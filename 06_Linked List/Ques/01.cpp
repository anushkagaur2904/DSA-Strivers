//Reverse a LL
//https://leetcode.com/problems/reverse-linked-list/description/

/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy = NULL;
        while(head!=NULL){
            ListNode *next = head->next;//next pointer
            head->next = dummy;//head will point to dummy node now
            dummy=head;//dummy will be head
            head=next;//head will be next
        }
        return dummy;

    }
};
TC => O(N)
SC => O(1)
*/
