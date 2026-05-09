//N Meetings in one room
//https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

/*
class Solution {
public:

    // Comparator function to sort meetings
    // according to their ending time
    static bool cmp(pair<int,int> a, pair<int,int> b) {
        return a.second < b.second;
    }

    int maxMeetings(vector<int>& start, vector<int>& end) {

        int n = start.size();

        // Store meetings as {start, end}
        vector<pair<int,int>> meetings;

        for(int i = 0; i < n; i++) {
            meetings.push_back({start[i], end[i]});
        }

        // Sort meetings by end time
        sort(meetings.begin(), meetings.end(), cmp);

        // Select first meeting
        int count = 1;

        // Store end time of last selected meeting
        int lastEnd = meetings[0].second;

        // Traverse remaining meetings
        for(int i = 1; i < n; i++) {

            // If current meeting starts
            // after previous meeting ends
            if(meetings[i].first > lastEnd) {

                // Select current meeting
                count++;

                // Update last ending time
                lastEnd = meetings[i].second;
            }
        }

        // Return maximum meetings possible
        return count;
    }
};
*/