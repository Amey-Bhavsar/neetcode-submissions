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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i = 1; 
        unordered_map<int , ListNode*>s;
        ListNode* temp = head ; 
        while(temp != NULL){
            s.insert({i , temp}); 
            i++; 
            temp = temp->next; 
        }
        int idx_o_etr = i - n ;
        if(s[idx_o_etr]->next == NULL){
            if(s[idx_o_etr] == head) return NULL;
            s[idx_o_etr - 1] -> next = NULL;
            return head;
        }
        if(s[idx_o_etr]== head) return head->next;
        s[idx_o_etr - 1] -> next = s[idx_o_etr + 1];
        return head; 
    }
};
