#include <iostream>
using namespace std;

class Array {
private:
    int size;       // current number of elements
    int capacity;   // maximum size
    int *arr;

public:
    Array(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        arr = new int[capacity];
    }

    void insertAtEnd(int val) {
        if(size == capacity){
            cout << "Array is full\n";
            return;
        }
        arr[size] = val;
        size++;
    }

    void insertAtBeginning(int val) {
        if(size == capacity){
            cout << "Array is full\n";
            return;
        }
        for(int i = size; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = val;
        size++;
    }

    void insertAtPos(int idx, int val) {
        if(idx < 0 || idx > size || size == capacity) {
            cout << "Inserting out of bound\n";
            return;
        }
        for(int i = size; i > idx; i--) {
            arr[i] = arr[i-1];
        }
        arr[idx] = val;
        size++;
    }

    void deleteAtBeginning() {
        if(size <= 0){
            cout << "Empty array.\n";
            return;
        }
        for(int i = 0; i < size-1; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }

    void deleteAtEnd() {
        if(size <= 0){
            cout << "Empty array.\n";
            return;
        }
        size--;
    }

    void deleteAtPos(int idx) {
        if(idx < 0 || idx >= size){
            cout << "Deleting out of bound\n";
            return;
        }
        for(int i = idx; i < size-1; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }

    int getLength() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void sortArray() {
        for(int i = 0; i < size-1; i++) {
            bool swapped = false;
            for(int j = 0; j < size-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                    swapped = true;
                }
            }
            if(!swapped) break;
        }
    }

    void print() {
        for(int i = 0; i < size; i++){
            cout << arr[i] << "  ";
        }
        cout << endl;
    }

    void traverse(int low, int high) {
        if(low < 0 || high > size){
            cout << "Wrong traversing indexes.\n";
            return;
        }
        for(int i = low; i < high; i++){
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
};

int main() {
    Array array(10);

    array.insertAtEnd(5);
    array.insertAtEnd(10);
    array.insertAtBeginning(2);
    array.insertAtPos(1, 7);

    cout << "Array elements: ";
    array.print();

    array.deleteAtPos(2);
    cout << "After deletion: ";
    array.print();

    array.sortArray();
    cout << "After sorting: ";
    array.print();

    return 0;
}
