//question -> https://leetcode.com/problems/merge-two-sorted-lists/description/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode() ;
        ListNode* merged = temp;
        ListNode* ans = temp;
        while(list1 != NULL && list2 != NULL){
            if(list1->val > list2->val){
                merged->next = new ListNode();
                merged->next->val = list2->val;
                list2 = list2->next;
                merged = merged->next;

            }else if(list1->val <= list2->val){
                merged->next = new ListNode();
                merged->next->val = list1->val;
                list1 = list1->next;
                merged = merged->next;
            }
            
        }

        if(list1 == NULL){
            merged->next = list2;
        }else if(list2 == NULL){
            merged->next = list1;
        }

        return ans->next;
    }
};