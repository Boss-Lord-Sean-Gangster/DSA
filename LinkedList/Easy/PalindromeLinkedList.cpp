/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL){
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    bool comparingLinkedList(ListNode* head1, ListNode* head2){
        ListNode* temp1 = head1;
        ListNode* temp2 = head2;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val!=temp2->val){
                return false;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* mid =findMiddle(head);
        ListNode* head2 = mid->next;
        mid->next = NULL;
        head2 = reverseLinkedList(head2);
        ListNode* head1 = head;
        bool ans = comparingLinkedList(head1,head2);
        return ans;
    }
};