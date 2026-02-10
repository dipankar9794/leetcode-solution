class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = new ListNode(0);
        prev->next = head;

        ListNode* temp = head;
        ListNode* currPrev = prev;

        while (temp != nullptr) {
            if (temp->val == val) {
                ListNode* n = temp;
                currPrev->next = temp->next;
                temp = temp->next;
                delete n;
            } else {
                currPrev = temp;
                temp = temp->next;
            }
        }

        return prev->next;
    }
};
