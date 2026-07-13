//Maximum Sum Combination
//https://www.geeksforgeeks.org/problems/maximum-sum-combination/1

/*
class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n = a.size();
        
        //stores the final answer
        vector<int> ans;
        
        //Sort both arrays in ascending order
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        
        //    Max Heap
        //  First  -> Sum
        //   Second -> Pair of indices (i, j)
        
        priority_queue<pair<int,pair<int,int>>> pq;
        
        // To avoid pushing duplicate index pairs
        set<pair<int,int>> visited;
        
        //Largest possible sum
        pq.push({a[n-1]+b[n-1],{n-1,n-1}});
        visited.insert({n-1,n-1});
        
        while(k--){
            //get current maximum sum
            auto curr = pq.top();
            pq.pop();
            
            int sum = curr.first;
            int i = curr.second.first;
            int j = curr.second.second;
            
            //store answer
            ans.push_back(sum);
            
            //--------------------------------------------------
            // Try moving one step left in array 'a'
            // (i-1, j)
            //--------------------------------------------------
            if(i>0 && visited.find({i-1,j})==visited.end()){
                pq.push({a[i-1]+b[j],{i-1,j}});
                visited.insert({i-1,j});
            }
            //--------------------------------------------------
            // Try moving one step left in array 'b'
            // (i, j-1)
            //--------------------------------------------------
            if(j>0 && visited.find({i,j-1})==visited.end()){
                pq.push({a[i]+b[j-1],{i,j-1}});
                visited.insert({i,j-1});
            }
        }
        return ans;
    }
};
*/