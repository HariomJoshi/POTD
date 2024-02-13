//question -> https://leetcode.com/problems/reverse-linked-list/description/?envType=list&envId=rrs3r4z6

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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        if(head->next->next == NULL){
            ListNode* temp = head->next;
            head ->next->next = head;
            head->next = NULL;
            return temp;
        }

        // now reversal for size 3 or more

        ListNode* prev = NULL, *curr = head, *nxt = head->next;
        while(nxt != NULL){
            curr->next = prev;
            prev = curr;
            curr= nxt;
            nxt = nxt->next;
        }
        curr->next = prev;
        return curr;

    }
};