//Fractional Knapsack

/*
you are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. Note that we can break items for maximizing the total value of knapsack.
*/

/*
Eg => arr = [(100,20),(60,10),(100,50),(200,50)] W=90

item{
    int value;
    int weight;
}

//how to make a comparator for sorting the items based on value/weight ratio
bool comparator(item a,item b){
    double r1=(double)a.value/a.weight;
    double r2=(double)b.value/b.weight;
    return r1>r2; //sort in decreasing order of value/weight ratio
}
double function(item arr[],int w){
    sort(arr,comparator);
    totalVal=0;
    for(int i=0;i<n;i++){
        if(arr[i].weight<=w){
            totalVal+=arr[i].value;
            w-=arr[i].weight;
        }
        else{
            totalVal+=arr[i].value*(double)w/arr[i].weight; //take the fraction of the item
            break; //we have filled the knapsack
        }
    }
    return totalVal;
}   
//make sure of double
TC => O(nlogn) for sorting + O(n) for iterating through the items
SC => O(1) if we sort in place, otherwise O(n) for sorting
*/
