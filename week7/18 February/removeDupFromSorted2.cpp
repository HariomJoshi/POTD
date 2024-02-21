//question -> https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        bool inside = false;
        while(head!= NULL && head->next != NULL && head->val == head->next->val){
            head = head->next;
            inside= true;
        }
        ListNode* temp = head, *nxt = head;
        while(nxt != NULL){
            nxt = temp->next;
            bool ins = false;
            while(nxt != NULL && nxt->next != NULL && nxt->val == nxt->next->val){
                nxt = nxt->next;
                ins = true;
            }
            if(ins)temp->next = nxt->next;
            else temp = temp->next;
        }
        if(inside){
            head = head->next;
        }
        return head;
    }
};