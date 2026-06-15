//Top K frequent elements
//https://leetcode.com/problems/top-k-frequent-elements/description/

/*
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >minH;
        for(auto i=mp.begin();i!=mp.end();i++){
            minH.push({i->second,i->first});//iterator
            if(minH.size()>k){
                minH.pop();
            }
        }
        vector<int> ans;
        while(!minH.empty()){
            ans.push_back(minH.top().second);
            minH.pop();
        }
        return ans;
    }
};
*/