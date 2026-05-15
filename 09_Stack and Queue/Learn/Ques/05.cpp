//Stock Span Problem
//https://leetcode.com/problems/online-stock-span/description/


/*
class Solution {
  public:

    vector<int> calculateSpan(vector<int>& arr) {

        int n = arr.size();

        vector<int> v;

        // Stack stores:
        // {stock price, index}
        stack<pair<int,int>> s;

        for(int i = 0; i < n; i++) {

            // No greater element on left
            if(s.size() == 0) {

                v.push_back(-1);
            }

            // Nearest greater found
            else if(s.size() > 0 &&
                    s.top().first > arr[i]) {

                v.push_back(s.top().second);
            }

            // Remove smaller/equal elements
            else if(s.size() > 0 &&
                    s.top().first <= arr[i]) {

                while(s.size() > 0 &&
                      s.top().first <= arr[i]) {

                    s.pop();
                }

                // No greater element exists
                if(s.size() == 0) {

                    v.push_back(-1);
                }

                else {

                    v.push_back(s.top().second);
                }
            }

            // Push current element with index
            s.push({arr[i], i});
        }

        // Convert NGL index to stock span
        for(int i = 0; i < n; i++) {

            v[i] = i - v[i];
        }

        return v;
    }
};
*/

//LEETCODE ANSWER
/*
class StockSpanner {
public:

    //stack stores {price,span}
    stack<pair<int,int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while(!s.empty() && s.top().first<=price){
            span += s.top().second;
            s.pop();
        }
        s.push({price,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */


/*
✅ Idea Behind Optimization

Instead of storing:

price + index

we directly store:

price + span

This avoids recalculating spans.

✅ Dry Run

Input:

100 80 60 70 60 75 85
🔹 next(100)

Stack empty.

Span:

1

Push:

{100,1}
🔹 next(80)
100 > 80

Span:

1

Push:

{80,1}
🔹 next(70)

Pop:

60

Add span:

1 + 1 = 2

Push:

{70,2}
🔹 next(85)

Pop:

75(span=4)
80(span=1)

Total:

1+4+1 = 6

Push:

{85,6}
✅ Final Output
1 1 1 2 1 4 6
✅ Complexity
Complexity	Value
Time	Amortized O(1)
Space	O(n)
🔥 Important Interview Insight

Each element:

pushed once
popped once

So total operations:

O(n)

for all calls combined.
*/