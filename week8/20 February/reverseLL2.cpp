//question -> https://leetcode.com/problems/reverse-linked-list-ii/

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        ListNode* temp = head;
        int i =1;
        while(temp != NULL){
            if(i>= left-1){
                ListNode* ln = temp;
                if(i != 1){
                    temp = temp->next;
                    i++;
                }
                ListNode* prev = temp;
                temp =temp->next;
                ListNode* nxt = temp->next;
                while(i<right){
                    // cout<< temp->val<< " "<< prev->val<<" "<<endl;
                    temp->next = prev;
                    prev = temp;
                    temp = nxt;
                    if(nxt!= NULL)nxt = nxt->next;
                    i++;
                }
                if(left!=1){
                    ListNode* sec = ln->next;
                    ln->next = prev;
                    sec->next = temp;
                    return head;
                }else{
                    ln->next = temp;
                    return prev;
                }

                
            }
            temp = temp->next;
            i++;
        }
        return head;
    }
};