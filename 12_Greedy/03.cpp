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