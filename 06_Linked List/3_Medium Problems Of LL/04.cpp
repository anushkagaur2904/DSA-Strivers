//FINDING THE STARTING POINT/CYCLE IN LL    
//https://leetcode.com/problems/linked-list-cycle-ii/description/
//++++++++BRUTE FORCE APPROACH++++++++++++++
/*
HASH MAP

map<Node*,int>mpp;
Node* temp=head;
while(temp!=NULL){
    if(mpp.find(temp)!=mpp.end()){
        return temp;  //returning the address of the node where the loop starts
    }
    mpp[temp]=1;
    temp=temp->next;
}
return NULL;  //if there is no loop in the LL
TC => O(N * 2 * logN)  //for searching in the hash map and for inserting in the hash map
SC => O(N)  //for storing the nodes in the hash map
*/

//++++++++TORTOISE AND HARE APPROACH++++++++++++++
/*
SLOW AND FAST POINTER
Step 1 => Detecting the loop
Step 2 => Finding the collision point of the slow and fast
Step 3 => place slow at head and fast at the meeting point and move both slow and fast one step at a time, the point where they meet is the starting point of the loop.
slow=head;
fast=head;
while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
        slow=head;  
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;  //returning the address of the node where the loop starts
    }
}
return NULL;  //if there is no loop in the LL
*/

/*
How are we sure that when we move both slow and fast one step at a time, they will meet at the starting point of the loop?

*/