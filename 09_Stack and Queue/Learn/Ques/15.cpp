//STACK USING ARRAYS
//https://www.geeksforgeeks.org/problems/implement-stack-using-array/1
//not dynamic in nature
/*
size has to be known

class st{
    top=-1, int st[size];
    
    push(x){
        if(top>=size){
            error;
        }
        top=top+1;
        st[top]=x;
    }

    int top(){
        if(top==-1){
            empty;
        }
        else{
            return st[top];
        }
    }

    pop(){
        if(top==-1){
            empty;
        }
        top=top-1;
    }

    size(){
        return top+1;
    }
}

TC => PUSH , POP, TOP, SIZE all in O(1)
SC => depends on size of array
      
*/

/*
class myStack {
    int top;
    int capacity;
    int *st;
  public:
    myStack(int n) {
        // Define Data Structures
        capacity=n;
        top=-1;
        st = new int[n];
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull() {
        // check if the stack is full
        if(top==capacity-1){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(isFull()){
            return;
        }
        top=top+1;
        st[top]=x;
    }

    void pop() {
        // removes an element from the top of the stack
        if(isEmpty()){
            return;
        }
        top=top-1;
    }

    int peek() {
        // Returns the top element of the stack
        if(isEmpty()){
            return -1;
        }
        return st[top];
    }
};
*/
