//Queue using stack
//https://leetcode.com/problems/implement-queue-using-stacks/description/

/*
class MyQueue {

    stack<int> input;
    stack<int> output;

public:

    MyQueue() {

    }

    // Push element into queue
    void push(int x) {

        input.push(x);
    }

    // Remove front element
    int pop() {

        // If output stack empty,
        // transfer elements
        if(output.empty()) {

            while(!input.empty()) {

                output.push(input.top());

                input.pop();
            }
        }

        // Front element
        int val = output.top();

        output.pop();

        return val;
    }

    // Return front element
    int peek() {

        // Transfer if needed
        if(output.empty()) {

            while(!input.empty()) {

                output.push(input.top());

                input.pop();
            }
        }

        return output.top();
    }

    // Check if queue empty
    bool empty() {

        return input.empty() &&
               output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
