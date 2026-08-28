//REVERSE A LL
//https://leetcode.com/problems/reverse-linked-list/description/


//+++++++STACK APPROACH++++++
/*
put every element of the linked list in a stack and then pop them out and make a new linked list
Time complexity: O(n) for traversing the linked list and O(n) for popping out the elements from the stack and making a new linked list. So overall O(n).
Space complexity: O(n) for the stack to store the elements of the linked list.

temp=head;
stack<ListNode*> st;
while(temp!=NULL){
    st.push(temp->data);
    temp=temp->next;
}
ListNode* temp=head;
while(temp!=NULL){
    temp->data=st.top();
    st.pop();
    temp=temp->next;
}
TC => O(2N)  //for traversing the linked list and O(N) for popping out the elements from the stack and making a new linked list. So overall O(N).
SC => O(N)  //for the stack to store the elements of the linked list.
*/

//DO NOT USE STACK APPROACH AS IT IS NOT OPTIMAL i.e do not use external data structure to solve the problem when we can solve it without using any external data structure.

//+++++++THREE POINTER APPROACH++++++
//+++++++ITERATIVE APPROACH++++++
/*
arrows ki direction change karni hai, so we can use three pointers to reverse the linked list.

temp=head;
ListNode* prev=NULL;
while(temp!=NULL){
    front=temp->next;  //store the next node in a temporary variable
    temp->next=prev;  //reverse the current node's pointer
    prev=temp;
    temp=front;
}
return prev;  //prev will be the new head of the reversed linked list.
TC => O(N)  //for traversing the linked list once.
SC => O(1)  //for using only a constant amount of extra space.
*/


//+++++++RECURSIVE APPROACH++++++
/*
base case: if head is NULL or head->next is NULL, return head.
if one node then return head as it is the new head of the reversed linked list.

reverse(head){
    if(head==NULL || head->next==NULL){
        return head;//for 1 node
    }
    Node* newHead = reverse(head->next); //reverse the rest of the linked list and get the new head of the reversed linked list.
    Node* front = head->next;
    front->next = head; //reverse the current node's pointer
    head->next = NULL; //set the current node's next pointer to NULL
    return newHead; //return the new head of the reversed linked list.
}
//try to dry run the recursive approach to understand it better.
*/

