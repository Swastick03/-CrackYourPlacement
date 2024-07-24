class Solution {
public:
    int getLength(ListNode * head){
        int i=0;
        while(head!=NULL){
            head = head->next;
            i++;
        }
        return i;
    }
    ListNode* middleNode(ListNode* head) {
        int len = getLength(head)/2;
        ListNode* temp = head;
        while(len!=0){
            temp = temp->next;
            len--;
        }
        return temp;
    }
};