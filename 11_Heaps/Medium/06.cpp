//Task Scheduler
//https://leetcode.com/problems/task-scheduler/description/

//APPROACH 1 : HEAP
/*
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26,0);

        for(char &ch: tasks){
            mp[ch-'A']++;
        }
        int time = 0;

        priority_queue<int> pq; //max heap

        for(int i=0;i<26;i++){
            if(mp[i]>0){
                pq.push(mp[i]);
            }
        }
        while(!pq.empty()){
            vector<int> temp;
            for(int i=1;i<=n+1;i++){
                if(!pq.empty()){
                    int freq = pq.top();
                    pq.pop();
                    freq--;
                    temp.push_back(freq);
                }
            }
            for(int &f : temp){
                if(f>0){
                    pq.push(f);
                }
            }
            if(pq.empty()){
                time += temp.size();
            }
            else{
                time += n+1;
            }
        }
        return time;
    }
};
*/

//APPROACH 2 : Greedy
/*
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0){
            return tasks.size();
        }

        vector<int> mp(26,0);

        for(char &ch : tasks){
            mp[ch-'A']++;
        }

        sort(begin(mp),end(mp));

        int maxFreq = mp[25];
        int holes = maxFreq-1;
        int idleSlots = n*holes;

        for(int i=24;i>=0;i--){
            idleSlots -= min(mp[i],holes);
        }

        if(idleSlots>0){
            return tasks.size() + idleSlots;
        }
        return tasks.size();
    }
};
*/