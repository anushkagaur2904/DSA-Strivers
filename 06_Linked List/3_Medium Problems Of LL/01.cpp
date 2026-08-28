//MIDDLE OF LL
//https://leetcode.com/problems/middle-of-the-linked-list/submissions/1951027715/
/*
+++++++++BETTER APPROACH+++++++++
for odd and even element, middle = n/2 +1

Node* temp = head;
int count = 0;
while(temp!=NULL){
    count++;
    temp = temp->next;
}
int middle = (count / 2 )+1;
Node* temp2 = head;
while(temp!=NULL){
    middle=middle-1;
    if(middle==0){
        break;
    }
    temp2=temp2->next;
}
return temp2;
TC=> O(N)+O(N/2)
SC=> O(1)
*/

//+++++++TORTOISE AND HARE METHOD+++++++++
/*
Take two pointers i.e slow and fast, one moves by 1 step and another moves by 2 steps.
When the second pointer reaches the end, the first pointer will be at the middle.

in odd LL, fast will be at last element
in even LL, fast will be at NULL

slow=head;
fast=head;
while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
}
return slow;
//TC=> O(N)
//SC=> O(1)
*/

