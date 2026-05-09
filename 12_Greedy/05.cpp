//Assign Cookies
//https://leetcode.com/problems/assign-cookies/
/*
Parent has N children. Each children has a greed factor. Parent has M cookies and each cookie has different size. Suppose a children has greed of 3, he will be satisfied if he gets cookie with size>=3. Only one cookie to one children. 

Task : Assign cookies to more children
*/

/*
greed = [1 5 3 3 4]
size = [4 2 1 2 1 3]

sort the size array i.e [1 1 2 2 3 4]
sort the greed array i.e [1 3 3 4 5]

take two pointers left and right

func(greed,size){
    int n = greed.size();
    int m = size.size();
    int l=0,r=0;
    sort(greed.begin(),greed.end());
    sort(size.begin(),size.end());

    while(l<n && r<m){
        if(size[r]>=greed[l]){
            l++;
        }
        r++;
    }
    return l;
}

TC => O(nlogn + mlogm) for sorting and O(n+m) for traversing the arrays
SC => O(1) if we ignore the space taken by sorting, otherwise O(n+m) for sorting
*/

