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
    bool hasCycle(ListNode* head) {
        ListNode * temp = head;
        int i = 0;
        unordered_map<ListNode* , int> s;
        while(temp !=  NULL){
            if(s.count(temp) == 0){
                s.insert({temp , i});
                i++; 
                temp = temp->next ;
                continue;
            }
            else{
                return true;
            }
        }
        return false; 
    }
};
