//Max of min for every window size
//https://www.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1

/*
class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        //  code here
        stack<int> s;
        
        int n = arr.size();
        
        int left[n];
        int right[n];
        
        for(int i=0;i<n;i++){
            left[i]=-1;
            right[i]=n;
        }
        
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();
            if(!s.empty()){
                left[i]=s.top();
            }
            s.push(i);
        }
        //empty stack to use for right[]
        while(!s.empty()){
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();
            if(!s.empty()){
                right[i]=s.top();
            }
            s.push(i);
        }
        int ans[n+1];
        for(int i=0;i<=n;i++) ans[i]=0;
        
        for(int i=0;i<n;i++){
            int len = right[i]-left[i]-1;
            ans[len] = max(ans[len],arr[i]);
        }
        //remaining ans fill
        for(int i=n-1;i>=1;i--){
            ans[i] = max(ans[i],ans[i+1]);
        }
        vector<int> res(n);
        for(int i=1;i<=n;i++){
            res[i-1]=ans[i];
        }
        return res;
    }
};
*/