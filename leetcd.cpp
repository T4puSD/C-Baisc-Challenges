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
    ListNode* insertNode(ListNode* head,int data){
        ListNode * d1 = new ListNode(data);
        if(head==NULL){
            return d1;
        } else{
            ListNode * temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            } temp->next = d1;
        }
        return head;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode * headNew = NULL;
        
        int carry = 0;
        int sum = 0;
        while(l1){
            if(carry==0){
                sum = l1->val+l2->val;
            if(sum>9){
                int lastDigit = sum%10;
                carry=1;
                cout<<lastDigit<<endl;
                headNew = insertNode(headNew,lastDigit);
            }else{
                cout<<sum<<endl;
                 headNew = insertNode(headNew,sum);
            }
           
           
            } else{
                sum = l1->val+l2->val+1;
                if(sum>9){
                    int lastDigit = sum%10;
                    carry = 1;
                    cout<<lastDigit<<endl;
                     headNew = insertNode(headNew,lastDigit);
                } else{
                    cout<<sum<<endl;
                    carry = 0;
                     headNew = insertNode(headNew,sum);
                    
                }
            }
             l1= l1->next; l2 = l2->next;
        }
        
        return headNew;
    }
};
