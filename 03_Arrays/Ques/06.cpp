//Union and Intersection of 2 sorted arrays 

//union of two sorted arrays
//https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
/*
vector<int> unionArray(vector<int> &a, vector<int> &b) {
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j]) {
            if (result.empty() || result.back() != b[j])
                result.push_back(b[j]);
            j++;
        }
        else {
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++; j++;
        }
    }

    // remaining elements
    while (i < a.size()) {
        if (result.empty() || result.back() != a[i])
            result.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        if (result.empty() || result.back() != b[j])
            result.push_back(b[j]);
        j++;
    }

    return result;
}
*/

//intersection of 2 sorted arrays

/*
vector<int> intersectionArray(vector<int> &a, vector<int> &b) {
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        }
        else {
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++; j++;
        }
    }

    return result;
}
*/

/*
Time: O(n + m)
Space: O(n + m) (for result)
*/