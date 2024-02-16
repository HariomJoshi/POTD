//question -> https://leetcode.com/problems/swap-nodes-in-pairs/?envType=list&envId=rrs3r4z6

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
    ListNode* swapPairs(ListNode* head) {
        ListNode* first = head;
        if(head == NULL) return NULL;
        ListNode* second = head->next, *ans = second;
        if(second == NULL) return head;
        ListNode* third = head->next->next;
        while(second != NULL && first != NULL){
            second->next = first;
            if(third == NULL) first ->next = NULL;
            else if(third->next == NULL ) first ->next = third;
            else first->next = third->next;   
            first = third;
            if(first == NULL || first->next == NULL) break;
            second = first ->next;
            third = second->next;
        }
        return ans;
    }
};