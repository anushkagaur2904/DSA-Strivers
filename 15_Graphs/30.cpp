//Accounts Merge
//https://leetcode.com/problems/accounts-merge/description/

/*
class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    int find(int x) {
        if (x == parent[x])
            return x;
        return parent[x] = find(parent[x]);
    }

    void Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);

        if (x_parent == y_parent)
            return;

        if (rank[x_parent] > rank[y_parent]) {
            parent[y_parent] = x_parent;
        } else if (rank[x_parent] < rank[y_parent]) {
            parent[x_parent] = y_parent;
        } else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();

        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        // Step 1: Map each email to account index and union accounts with shared emails
        unordered_map<string, int> emailToAcc;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < accounts[i].size(); j++) {
                string email = accounts[i][j];

                if (emailToAcc.find(email) == emailToAcc.end()) {
                    emailToAcc[email] = i;
                } else {
                    Union(i, emailToAcc[email]);
                }
            }
        }

        // Step 2: Group emails by their root parent account
        unordered_map<int, vector<string>> mergedAccounts;
        for (auto& it : emailToAcc) {
            string email = it.first;
            int rootAcc = find(it.second);
            mergedAccounts[rootAcc].push_back(email);
        }

        // Step 3: Format result with sorted emails and account names
        vector<vector<string>> ans;
        for (auto& it : mergedAccounts) {
            int accIndex = it.first;
            vector<string>& emails = it.second;

            sort(emails.begin(), emails.end());

            vector<string> temp;
            temp.push_back(accounts[accIndex][0]); // Account Name
            temp.insert(temp.end(), emails.begin(), emails.end());

            ans.push_back(temp);
        }

        return ans;
    }
};
*/