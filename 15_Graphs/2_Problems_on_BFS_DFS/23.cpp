//Alien Dictionary
//https://www.geeksforgeeks.org/problems/alien-dictionary/1

/*
class Solution {
public:
    string findOrder(vector<string> &words) {
        int K = 26;
        vector<vector<int>> adj(K);
        vector<int> indegree(K, 0);
        vector<bool> present(K, false);

        // Mark characters that are actually present
        for (auto &word : words) {
            for (char ch : word) {
                present[ch - 'a'] = true;
            }
        }

        // Build graph
        for (int i = 0; i < words.size() - 1; i++) {
            string s1 = words[i];
            string s2 = words[i + 1];

            int len = min(s1.size(), s2.size());

            bool found = false;

            for (int ptr = 0; ptr < len; ptr++) {
                if (s1[ptr] != s2[ptr]) {
                    int u = s1[ptr] - 'a';
                    int v = s2[ptr] - 'a';

                    adj[u].push_back(v);
                    indegree[v]++;

                    found = true;
                    break;
                }
            }

            // Invalid case: longer word comes before its prefix
            if (!found && s1.size() > s2.size()) {
                return "";
            }
        }

        // Topological sort
        queue<int> q;

        for (int i = 0; i < K; i++) {
            if (present[i] && indegree[i] == 0) {
                q.push(i);
            }
        }

        string ans = "";

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            ans += char(node + 'a');

            for (int next : adj[node]) {
                indegree[next]--;

                if (indegree[next] == 0) {
                    q.push(next);
                }
            }
        }

        // Cycle detected
        int totalChars = 0;
        for (int i = 0; i < K; i++) {
            if (present[i])
                totalChars++;
        }

        if (ans.size() != totalChars)
            return "";

        return ans;
    }
};
*/