//Z Function
//https://www.geeksforgeeks.org/problems/search-pattern-z-algorithm--141631/1

/*
class Solution {
public:

    vector<int> calculateZ(string s) {

        int n = s.size();

        vector<int> Z(n, 0);

        int L = 0, R = 0;

        for(int i = 1; i < n; i++) {

            if(i > R) {

                L = R = i;

                while(R < n && s[R] == s[R - L]) {
                    R++;
                }

                Z[i] = R - L;
                R--;

            } else {

                int k = i - L;

                if(Z[k] < R - i + 1) {

                    Z[i] = Z[k];

                } else {

                    L = i;

                    while(R < n && s[R] == s[R - L]) {
                        R++;
                    }

                    Z[i] = R - L;
                    R--;
                }
            }
        }

        return Z;
    }

    vector<int> search(string &txt, string &pat) {

        string s = pat + "$" + txt;

        vector<int> Z = calculateZ(s);

        vector<int> ans;

        int m = pat.size();

        for(int i = 0; i < Z.size(); i++) {

            if(Z[i] == m) {

                // GFG expects 0-based indexing
                ans.push_back(i - m-1);
            }
        }

        return ans;
    }
};
*/