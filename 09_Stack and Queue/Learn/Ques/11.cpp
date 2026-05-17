//QUEUE USING ARRAYS
//https://www.geeksforgeeks.org/problems/implement-queue-using-array/1
/*
class Q{
    int size;
    int Q[size];
    int start =-1;
    int end = -1;
    int currSize = 0;

    push(x){
        if(currSize == size){
            full;
        }
        if(currSize=0){
            start=0;
            end=0;
        }
        else{
            end = (end+1)%size; 
            //in case if aage ke elements khaali ho toh vaha fill kr skte hai
        }
        q[end]=x;
        currsize +=1;
    }

    pop(){
        element = q[start];
        if(currSize==0){
            empty;
        }
        if(currSize==1){
            start=end=-1;
        }
        else{
            start=(start+1)%size;
        }
        currSize -=1;
        return el;
    }

    top(){
        if(currSize==0){
            empty;
        }
        return q[start];
    }

    size(){
        return currSize;
    }
}

TC => O(1) for all operations
SC => O(size) 


*/

/*
class myQueue {
    int start;
    int end;
    int currSize;
    int *q;
    int size;
  public:
    myQueue(int n) {
        // Define Data Structures
        start=-1;
        end=-1;
        q = new int[n];
        currSize =0;
        size = n;
    }

    bool isEmpty() {
        // check if the queue is empty
        if(currSize==0){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull() {
        // check if the queue is full
        if(currSize == size){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(isFull()){
            return;
        }
        if(currSize==0){
            start=0;
            end=0;
        }
        else{
            end=(end+1)%size;
        }
        
        q[end]=x;
        currSize+=1;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(isEmpty()){
            return;
        }
        if(currSize==1){
            start=end=-1;
        }
        else{
            start=(start+1)%size;
        }
        currSize-=1;
    }

    int getFront() {
        // Returns the front element of the queue.
        if(isEmpty()){
            return -1;
        }
        return q[start];
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty()){
            return -1;
        }
        return q[end];
    }
};
*/