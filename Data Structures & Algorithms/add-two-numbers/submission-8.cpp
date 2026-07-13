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
        ListNode* sum = new ListNode();
        ListNode* temp = sum;
        ListNode* last = temp;
        bool carry = 0;
        int v1 , v2 , sum1;
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL) v1 = l1->val;
            if(l2 != NULL) v2 = l2->val;
            if(l1 == NULL) sum1 = v2;
            if(l2 == NULL) sum1 = v1;
            if(l1 != NULL && l2 != NULL) sum1 = v1 +v2;
            if(carry) sum1 = sum1 + 1;
            if(sum1 <= 9){
                temp->val = sum1;
                carry = 0;
            }
            else{
                sum1 = sum1 % 10;
                temp->val = sum1; 
                carry = 1;
            }
            temp->next = new ListNode();
            last = temp;
            temp = temp->next; 
            if(l1 != NULL)l1 = l1->next;
            if(l2 != NULL)l2 = l2->next; 
        } 
        if(carry){
            temp ->val = 1;
            temp->next = NULL;
        }
        else{
            temp = last;
            temp->next = NULL;
        }

        

        return sum;
    }
};
