//Min element in stack with extra space

/*
stack<int> s;
stack<int> ss;

void push(int a){
    s.push(a);
    if(ss.size()==0 || ss.top() >= a){
        ss.push(a);
    }
    return;
}

int pop(){
    if(s.size()==0) return -1;
    int ans = s.top();
    s.pop();
    if(ss.top()==ans){
        ss.pop();
    }
    return ans;
}

int getMin(){
    if(ss.size()==0) return -1;
    return ss.top();
}
*/

//Min element in stack with O(1) space
//https://leetcode.com/problems/min-stack/description/

/*
class MinStack {
public:

    long long minEle;

    stack<long long> s;

    MinStack() {

    }

    void push(int val) {

        // First element
        if(s.empty()) {

            s.push(val);

            minEle = val;
        }

        else {

            // Normal push
            if(val >= minEle) {

                s.push(val);
            }

            // Encoded push
            else {

                s.push(2LL * val - minEle);

                minEle = val;
            }
        }
    }

    void pop() {

        if(s.empty())
            return;

        // Normal value
        if(s.top() >= minEle) {

            s.pop();
        }

        // Encoded value
        else {

            minEle =
            2LL * minEle - s.top();

            s.pop();
        }
    }

    int top() {

        if(s.empty())
            return -1;

        // Normal value
        if(s.top() >= minEle) {

            return s.top();
        }

        // Encoded value
        else {

            return minEle;
        }
    }

    int getMin() {

        if(s.empty())
            return -1;

        return minEle;
    }
};
*/