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
private:
    ListNode* getmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* front = NULL;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front; 
        }
        return prev;
    }
public:

    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;
        ListNode *mid = getmid(head);
        ListNode *temp = mid->next;
        temp = reverse(temp);
        ListNode *head1 = head;
        while(temp!=NULL){
            if(head1->val != temp->val) return false;
            temp = temp->next;
            head1 = head1->next;

        }
        return true;
    }
};