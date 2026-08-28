//Length of loop in LL
//https://www.geeksforgeeks.org/problems/find-length-of-loop/1
//+++++++BRUTE FORCE APPROACH++++++++++++++
/*
HASH MAP
use a timer to count the number of nodes in the loop, when we encounter a node which is already visited then we can return the timer value as the length of the loop.

map<Node*,int>mpp;//here int is timer
temp=head;
timer=1;
while(temp!=NULL){
    if(mpp.find(temp)!=mpp.end()){
        value=mpp[temp];  //returning the value of that node;
        return timer-value;  //returning the length of the loop
    }
    mpp[temp]=timer;
    timer++;
    temp=temp->next;
}
return 0;  //if there is no loop in the LL

TC => O(N * 2 * logN)  //for searching in the hash map and for inserting in the hash map
SC => O(N)  //for storing the nodes in the hash map
*/

//+++++++TORTOISE AND HARE APPROACH++++++++++++++
/*
SLOW AND FAST POINTER

slow=head;
fast=head;
while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
        return findLength(slow,fast);
    }
}
return 0;  //if there is no loop in the LL

findLength(Node* slow,Node* fast){
    cnt=1;
    fast=fast->next;
    while(slow!=fast){
        fast=fast->next;
        cnt++;
    }
    return cnt;
}
*/
