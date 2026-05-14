//Nearest Smaller to Left

/*
vector<int> Smallestonleft(int arr[], int n) {

    vector<int> v;

    stack<int> s;

    for(int i = 0; i < n; i++) {

        // If stack empty
        if(s.size() == 0) {

            v.push_back(-1);
        }

        // Top smaller or equal
        else if(s.size() > 0 &&
                s.top() <= arr[i]) {

            v.push_back(s.top());
        }

        // Remove greater elements
        else if(s.size() > 0 &&
                s.top() > arr[i]) {

            while(s.size() > 0 &&
                  s.top() > arr[i]) {

                s.pop();
            }

            if(s.size() == 0) {

                v.push_back(-1);
            }

            else {

                v.push_back(s.top());
            }
        }

        // Push current element
        s.push(arr[i]);
    }

    return v;
}
*/