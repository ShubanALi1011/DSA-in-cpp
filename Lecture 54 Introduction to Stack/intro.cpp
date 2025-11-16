#include<iostream>
using namespace std;
class Stack{
    private:
        int *arr;
        int top;
        int size;
    public:
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }
   
        void push(int element){
            // check if space available 
            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else{
                throw "Stack overflow.";
            }
        }

        void pop(){
            // if atleast 1 present
            if(top >= 0){
                top--;
            }
            else{
                throw "Stack underflow.";
            }
        }

        int peek(){
            if(top >= 0){
                return arr[top];
            }
            else{
                cout<<"Stack is Empty.\n";
                return -1;
            }
        }

        bool isEmpty(){
            if( top == -1){
                return true;
            }
            else{
                return false;
            }
        }
        
        int capacity(){
            return size;
        }

        int length(){
            return top+1;
        }

};
void print(Stack s){
    while(!s.isEmpty()){
        cout<<s.peek()<<"  ";
        s.pop();
    }
    cout<<endl;
}
int main(){

    Stack s(10);
    for(int i=0;i<5; i++){
        s.push(i);
    }
    while(true){
        cout<<"Current Stack : ";
        print(s);
        cout<<"Enter Your Choice :\n";
        cout<<"1 ) Push an element.\n";
        cout<<"2 ) Remove last element.\n";
        cout<<"3 ) Check top Element.\n";
        cout<<"4 ) Check Size of Stack.\n";
        cout<<"5 ) Check Capacity of Stack.\n";
        cout<<"6 ) Stack is Empty??\n";
        cout<<"7 ) Exit.\n";
        cout<<"------------------------------\n";
        int choice;
        cout<<"Enter Choice : ";
        cin>>choice;
        switch(choice){
            case 1 :
                int element;
                cout<<"Enter Element want to push : ";
                cin>>element;
                try{
                    s.push(element);
                }
                catch(const char *e){
                    cout<<"Error : "<<e<<endl;
                }
                break;
            case 2 :
                try{
                    s.pop();
                }
                catch(const char *e){
                    cout<<"Error : "<<e<<endl;
                }
                break;
            case 3 :
                cout<<"Top Element : "<<s.peek()<<endl;
                break;
            case 4 : 
                cout<<"Stack Size : "<<s.length()<<endl;
                break;
            case 5 :
                cout<<"Capacity : "<<s.capacity()<<endl;
                break;
            case 6 : 
                cout<<"Stack is Empty ?? : ";
                if(s.isEmpty())
                    cout<<"Yes.\n";
                else
                    cout<<"No.\n";
                break;
            case 7 :
                exit(0);
            default:
                cout<<"Wrong choice , enter again\n";
        }
    }

}