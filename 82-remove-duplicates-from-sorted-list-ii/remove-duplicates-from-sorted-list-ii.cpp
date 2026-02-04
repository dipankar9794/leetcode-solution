class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = new ListNode(0);
        prev->next = temp;
        ListNode* p = prev;

        while (temp != NULL) {
            if (temp->next != NULL && temp->val == temp->next->val) {
                int dup = temp->val;
                while (temp != NULL && temp->val == dup) {
                    temp = temp->next;
                }
                prev->next = temp;  
            }
            else {
                prev = temp;        
                temp = temp->next;
            }
        }

        return p->next;   
    }
};
