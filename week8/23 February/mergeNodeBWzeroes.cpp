//question -> https://leetcode.com/problems/merge-nodes-in-between-zeros/

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* start = NULL, *temp = head, *ans;
        while(temp->val == 0 && temp->next != NULL){
            temp = temp->next;
            int sum =0;
            while(temp->val != 0){
                sum+= temp->val;
                temp = temp->next;
            }
            // creating and inserting node in ll
            if(start == NULL){
                start = new ListNode(sum);
                ans = start;
            }else{
                start->next = new ListNode(sum);
                start = start ->next;
            }
        }
        return ans;

    }
};