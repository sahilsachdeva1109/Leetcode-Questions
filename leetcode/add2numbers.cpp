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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        //head pointer to return head of the LL
        ListNode* head = l3;
        int carry =0;
        // loop will run until the linked list is not empty
        while(l1 && l2){
            int value = l1->val + l2->val + carry ;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l1 = l1->next;
            l2 = l2->next;
            l3 = l3->next;
        }
        while(l1){
            int value = l1->val  + carry ;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l3 = l3->next;
            l1 = l1->next;
            
        }
        while( l2){
            int value = l2->val + carry ;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l3 = l3->next;
            l2 = l2->next;
            
        }
        // if there is no val to add but carry is there so create a new node for carry 
        if(carry){
            l3->next = new ListNode(carry);
        }

        return head->next;
    }
};