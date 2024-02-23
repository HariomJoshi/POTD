//question -> https://leetcode.com/problems/reorder-list/description/

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
    ListNode* func(ListNode* head){
        if(head ->next == NULL || head->next->next == NULL) return head;
        ListNode* temp1 = head, *temp2 = head;
        while(temp2->next->next != NULL){
            temp2 = temp2->next;
        }
        ListNode* nxt = temp1->next;
        temp1->next = temp2->next;
        temp2->next = NULL;
        temp1->next->next = func(nxt);
        return temp1;
    }
    void reorderList(ListNode* head) {
        head= func(head);
    }
};
