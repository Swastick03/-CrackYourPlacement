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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* cur = head;
        while(cur!=NULL){
            if((cur->next!=NULL)&&(cur->val == cur->next->val)){
                ListNode* temp = cur->next->next;
                ListNode* to_del = cur->next;
                delete(to_del);
                cur->next = temp;
            }
            else{
                cur = cur->next;
            }
        }
        return head;
    }
};