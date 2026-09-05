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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res=nullptr;
        ListNode* dummy=res;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        while(temp1!=nullptr&&temp2!=nullptr)
        {
            if(temp1->val<=temp2->val)
            {
                ListNode* temp=temp1;
                temp1=temp1->next;
                if(res==nullptr)
                {
                    res=temp;
                }
                else{
                    res->next=temp;
                    res=res->next;
                } 
            }
            else if(temp2->val<temp1->val){
                ListNode* temp=temp2;
                temp2=temp2->next;
                if(res==nullptr)
                {
                    res=temp;
                }
                else{
                    res->next=temp;
                    res=res->next;
                }
                
            }
            if(dummy==nullptr)
            {
                dummy=res;
            }
        }
        if(temp1!=nullptr)
        {
            if(res==nullptr)
            {    
                res=temp1;
                dummy=res;
            }
            else
            res->next=temp1;
        }
        else if(temp2!=nullptr)
        {
            if(res==nullptr)
            {   
                res=temp2;
                dummy=res;
            }
            else
            {res->next=temp2;}
        }
        return dummy;
    }
};
