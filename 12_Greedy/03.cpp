//Job Sequencing Problem
//https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1

/*
class Solution {
  public:
  
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        
        int n = deadline.size();

        // Store jobs as {profit, deadline}
        vector<pair<int,int>> jobs;

        for(int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i]});
        }

        // Sort jobs in descending order of profit
        sort(jobs.begin(), jobs.end(), greater<pair<int,int>>());

        // Find maximum deadline
        int maxDeadline = 0;

        for(int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, deadline[i]);
        }

        // Slot array to track occupied slots
        // -1 means slot is free
        vector<int> slot(maxDeadline + 1, -1);

        int countJobs = 0;
        int totalProfit = 0;

        // Traverse all jobs
        for(int i = 0; i < n; i++) {

            int currProfit = jobs[i].first;
            int currDeadline = jobs[i].second;

            // Try placing job at latest free slot
            for(int j = currDeadline; j > 0; j--) {

                // If slot is free
                if(slot[j] == -1) {

                    // Mark slot occupied
                    slot[j] = i;

                    // Increase job count
                    countJobs++;

                    // Add profit
                    totalProfit += currProfit;

                    // Job scheduled
                    break;
                }
            }
        }

        // Return {maximum jobs done, maximum profit}
        return {countJobs, totalProfit};
    }
};
*/

//+++++OPTIMAL++++++++
/*
✅ Optimized Approach (DSU / Disjoint Set)

We use:

Disjoint Set Union (Union Find)

to quickly find the latest free slot.

class Solution {
  public:

    // Find parent (available slot)
    int findParent(int node, vector<int>& parent) {

        // Path compression
        if(parent[node] == node)
            return node;

        return parent[node] = findParent(parent[node], parent);
    }

    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {

        int n = deadline.size();

        // Store jobs as {profit, deadline}
        vector<pair<int,int>> jobs;

        for(int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i]});
        }

        // Sort jobs by descending profit
        sort(jobs.begin(), jobs.end(), greater<pair<int,int>>());

        // Find maximum deadline
        int maxDeadline = *max_element(deadline.begin(), deadline.end());

        // DSU parent array
        vector<int> parent(maxDeadline + 1);

        // Initially every slot is free
        for(int i = 0; i <= maxDeadline; i++) {
            parent[i] = i;
        }

        int countJobs = 0;
        int totalProfit = 0;

        // Process all jobs
        for(auto job : jobs) {

            int currProfit = job.first;
            int currDeadline = job.second;

            // Find latest available slot
            int availableSlot = findParent(currDeadline, parent);

            // If slot available
            if(availableSlot > 0) {

                // Occupy slot
                parent[availableSlot] =
                    findParent(availableSlot - 1, parent);

                countJobs++;

                totalProfit += currProfit;
            }
        }

        return {countJobs, totalProfit};
    }
};
*/