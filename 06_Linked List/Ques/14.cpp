//Clone a LinkedList with Next and Random Pointers | Copy List with Random Pointers
//https://leetcode.com/problems/copy-list-with-random-pointer/

//+++++++++BRUTE++++++++++++++++
/*
f(head){
    temp = head;
    map<Node,Node> mpp;
    while(temp!=NULL){
        Node* newNode = new Node(temp->val);
        mpp[temp]=newNode;
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        copyNode = mpp[temp];
        copyNode->next = mpp[temp->next];
        copyNode->random = mpp[temp->random];
        temp=temp->next;
    }
    return mpp[head];
}
*/

//+++++++++OPTIMAL+++++++++++
/*
class Solution {
public:
    void insertCopyInBetween(Node* head){
        Node* temp = head;

        while(temp!=NULL){
            Node* nextElement = temp->next;
            Node* copy = new Node(temp->val);
            copy->next= nextElement;
            temp->next=copy;
            temp=nextElement;
        }
    }
    void connectRandomPointers(Node* head){
        Node* temp = head;

        while(temp!=NULL){
            Node* copyNode = temp->next;
            if(temp->random){
                copyNode->random = temp->random->next;
            }
            else{
                copyNode->random = nullptr;
            }
            temp=temp->next->next;
        }
    }
    Node* getDeepCopyList(Node* head){
        Node* temp = head;
        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;
        
        while(temp!=NULL){
            //creating new list
            res->next=temp->next;
            res = res->next;

            //disconnecting and going back to
            //initial state of LL
            temp->next = temp->next->next;
            temp = temp->next;
        }
        return dummyNode->next;
    }
    Node* copyRandomList(Node* head) {
        insertCopyInBetween(head);
        connectRandomPointers(head);
        return getDeepCopyList(head);
    }
};
*/