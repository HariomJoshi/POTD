//question -> https://leetcode.com/problems/add-two-numbers/description/

#include<bits/stdc++.h>

using namespace std;


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        int carry = 0;
        ListNode* prev;

        while(l1 != NULL && l2 != NULL){
            ans-> val = (l1-> val + l2-> val + carry)%10;
            if(l1-> val + l2-> val + carry >=10){
                carry = 1;
            }else{
                carry =0;
            }
            prev = ans;
            ans->next = new ListNode();
            ans = ans->next;
            l1 = l1->next;
            l2 = l2->next;
            

        }

        while(l1!= NULL){
            ans-> val = (l1-> val + carry)%10;
            if(l1-> val+ carry >=10){
                carry = 1;
            }else{
                carry =0;
            }
            prev = ans;
            ans->next = new ListNode();
            ans = ans->next;
            l1 = l1->next;
        }

        while(l2!= NULL){
            ans-> val = (l2-> val + carry)%10;
            if(l2-> val+ carry >=10){
                carry = 1;
            }else{
                carry = 0;
            }
            prev = ans;
            ans->next = new ListNode();
            ans = ans->next;
            l2 = l2->next;
        }

        if(carry == 1){
            ans->val =1;
        }else{
            prev->next = NULL;
        }



        return temp;   
    }
};



