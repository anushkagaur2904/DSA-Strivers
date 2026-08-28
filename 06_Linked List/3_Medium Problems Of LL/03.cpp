//Detect a loop in LL
//https://leetcode.com/problems/linked-list-cycle/description/
/*
if there exists a node,from where u start traversing the LL, and u can reach that node again, then there is a loop in the LL.
*/

//++++++++BRUTE FORCE APPROACH++++++++++++++
/*
USE A HASH MAP TO STORE THE NODES WHICH ARE VISITED, IF WE ENCOUNTER A NODE WHICH IS ALREADY VISITED THEN THERE IS A LOOP IN THE LL.

value of node might repeat but the address of the node will never repeat, so we can use the address of the node as the key in the hash map.

map<Node*,int> mpp;
Node* temp=head;
while(temp!=NULL){
    if(mpp.find(temp)!=mpp.end()){
        return true;
    }
    mpp[temp]=1;
    temp=temp->next;
}
return false;

TC => O(N * 2 * logN)  //for searching in the hash map and for inserting in the hash map
SC => O(N)  //for storing the nodes in the hash map

mpp.end()

Represents "nothing found"

It’s like saying: “we reached the end → key doesn’t exist”
*/

//++++++++TORTOISE AND HARE APPROACH++++++++++++++
/*
IF SLOW AND FAST POINTER MEET THEN THERE IS A LOOP IN THE LL.

slow=head;
fast=head;
while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
        return true;
    }
}
return false;
*/

