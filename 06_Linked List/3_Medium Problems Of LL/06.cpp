//CHECK IF LL IS PALINDROME OR NOT
//https://leetcode.com/problems/palindrome-linked-list/description/
//+++++++BRUTE FORCE+++++++
//Approach 1: Using Stack
/*
PEHLE HUM LL KE SARE NODES KO STACK ME DAAL DENGE, PHIR SE LL KE SARE NODES KO TRAVERSE KARKE STACK SE POP KARKE CHECK KARENGE KI SAB SAME HAIN YA NAHI. AGAR SAB SAME HAIN TOH LL PALINDROME HAI, VARNA NAHI.

stack<int> st;
Node* temp = head;
while(temp != NULL){
    st.push(temp->data);
    temp = temp->next;
}
temp = head;
while(temp != NULL){
    if(temp->data != st.top()){
        return false;
    }
    st.pop();
    temp = temp->next;
}
return true;

TC: O(N) + O(N) = O(2N)
SC: O(N) (STACK ME NODES DAALNE KE LIYE)
*/

//DONT USE EXTRA DATA STRUCTURE
//Approach 2: Reverse the second half of the linked list and compare it with the first half.
/*
*/
