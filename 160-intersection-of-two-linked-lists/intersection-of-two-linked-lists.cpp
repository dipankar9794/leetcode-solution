/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temA = headA;
    
        int b ;
        bool f = false;
        while(temA != NULL){
            ListNode* a = temA;
            ListNode* temB = headB;
            while(temB!=NULL){
                if(a==temB){
                    
                    return a;
                    
                }
                temB = temB->next;
                
            }
            
            temA=temA->next;


        }
        
            return NULL;
            
                    
    
        
    

    }
};