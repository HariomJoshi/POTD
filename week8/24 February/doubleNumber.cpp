//question -> https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/description/

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
    ListNode* func(ListNode* head, int &carry){
        if(head == NULL) return head;
        head ->next = func(head->next, carry);
        int temp = head->val;
        head->val = (2*temp+carry)%10;
        carry = (2*temp+carry)/10;
        return head;

    }

    ListNode* doubleIt(ListNode* head) {
        int carry = 0,sum = 0;
        ListNode *ans = func(head, carry);
        if(carry != 0){
            ListNode* newHead = new ListNode(carry);
            newHead->next = head;
            head= newHead;
        }
        return head;

    }
};