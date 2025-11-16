Node *removeDuplicates(Node *head) {
        if (head == NULL) return NULL;

        std::map<int, bool> seen; // or use unordered_map for better performance
        Node *curr = head;
        Node *prev = NULL;

        while (curr != NULL) {
            if (seen[curr->data]) {
                // Duplicate found; remove current node
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } else {
                seen[curr->data] = true;
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }