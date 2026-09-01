//DSU

//FIND -> O(N)
/* 
int find(int i,vector<int> &parent){
    if(i==parent[i]){
        return i;
    }
    return find(parent[i],parent);
}
*/

//UNION
/*
void union(int x,int y,vector<int> &parent){
    int x_parent = find(x,parent);
    int y_parent = find(y,parent);

    if(x_parent!=y_parent){
        parent[x_parent]=y_parent;
    }
}
*/

//PATH COMPRESSION
/*
int find(int i,vector<int> &parent){
    if(i==parent[i]){
        return i;
    }
    return parent[i]=find(parent[i],parent);
}
*/

//UNION USING RANK
/*
void union(int x,int y,vector<int> &parent,vector<int> &rank){
    int x_parent = find(x,parent);
    int y_parent = find(y,parent);

    if(x_parent == y_parent){
        return;
    }
    if(rank[x_parent]>rank[y_parent]){
        parent[y_parent]=x_parent;
    }
    else if(rank[x_parent]<rank[y_parent]){
        parent[x_parent]=y_parent;
    }
    else{
        parent[x_parent]=y_parent;
        rank[y_parent]+=1;
    }
}
*/

/*
Key Details:
Without Path Compression: Union by Rank alone provides $O(\log N)$ time complexity per operation.
With Path Compression: Combining Path Compression with Union by Rank (or Union by Size) improves the worst-case amortized time complexity to $O(\alpha(N))$. 
Inverse Ackermann Function: $\alpha(N)$ is the inverse of the Ackermann function, which is a very fast-growing function; thus, its inverse is nearly constant for any realistic input size.
*/
