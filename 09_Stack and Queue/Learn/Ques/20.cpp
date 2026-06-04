//Sort Stack
//https://www.geeksforgeeks.org/problems/sort-a-stack/1

/*
class Solution {
  public:
    
    void insert(stack<int>& st, int temp) {
        
        // Base condition
        if (st.empty() || st.top() <= temp) {
            st.push(temp);
            return;
        }
        
        int val = st.top();
        st.pop();
        
        insert(st, temp);
        
        st.push(val);
    }
    
    void sortStack(stack<int> &st) {
        
        // Base condition
        if (st.size() <= 1)
            return;
        
        int temp = st.top();
        st.pop();
        
        sortStack(st);
        
        insert(st, temp);
    }
};
*/