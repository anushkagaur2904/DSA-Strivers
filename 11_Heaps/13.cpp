//Implement Max Heap
//https://www.geeksforgeeks.org/problems/max-heap-implementation/1

/*
class maxHeap {
  private:
    // Initialize your data members
    vector<int> heap;
  public:

    void push(int x) {
        // Insert x into the heap
        heap.push_back(x);
        int idx = heap.size()-1;
        
        while(idx>0){
            int parent = (idx-1)/2;
            
            if(heap[parent]<heap[idx]){
                swap(heap[parent],heap[idx]);
                idx=parent;
            }
            else{
                break;
            }
        }
    }

    void pop() {
        // Remove the top (maximum) element
        if(heap.empty()){
            return;
        }
        //move last element to root
        heap[0] = heap.back();
        heap.pop_back();
        
        int idx=0;
        int n = heap.size();
        
        while(true){
            int left = 2*idx+1;
            int right = 2*idx+2;
            
            int largest = idx;
            if(left<n && heap[left]>heap[largest]){
                largest = left;
            }
            if(right<n && heap[right]>heap[largest]){
                largest = right;
            }
            if(largest==idx){
                break;
            }
            swap(heap[idx],heap[largest]);
            idx=largest;
        }
    }

    int peek() {
        // Return the top element or -1 if empty
        if(heap.empty()){
            return -1;
        }
        return heap[0];
    }

    int size() {
        // Return the number of elements in the heap
        return heap.size();
    }
};
*/