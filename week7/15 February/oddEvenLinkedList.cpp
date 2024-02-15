//question -> https://leetcode.com/problems/odd-even-linked-list/

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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL)return head;
        if(head->next->next == NULL )return head;
        ListNode* s = head->next;
        ListNode* prev = head, *first = head->next, *second = head->next->next;
        while(second != NULL && first != NULL){
            prev->next = second;
            first->next = second->next;
            prev = second;
            first = first->next;
            if(first == NULL) break;
            second = first ->next;
        }
        if(first == NULL)second->next = s;
        else prev->next = s;
        return head;
    }
};