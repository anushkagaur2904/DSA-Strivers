//K closest elements
//https://www.geeksforgeeks.org/problems/k-closest-elements3619/1

/*
class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {

        vector<pair<int,int>> v;

        for(int num : arr) {

            if(num == x)
                continue;

            // {distance, value}
            v.push_back({abs(num - x), num});
        }

        sort(v.begin(), v.end(),
             [](pair<int,int>& a, pair<int,int>& b) {

                if(a.first == b.first)
                    return a.second > b.second; // larger first

                return a.first < b.first;      // smaller distance first
             });

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
*/