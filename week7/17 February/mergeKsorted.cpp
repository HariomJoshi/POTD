//question -> https://leetcode.com/problems/merge-k-sorted-lists/description/

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *temp = NULL, *head= temp;

        int n = lists.size();
        bool allNull = false;
        while(!allNull){
            int idx=0, mi = INT_MAX;
            allNull = true;
            for(int i=0;i<n;i++){
                if(lists[i]!= NULL){
                    allNull =false;
                }else{
                    continue;
                }
                if(lists[i]->val <= mi){
                    idx =i;
                    mi = lists[i]->val;
                }
                
            }
            if(allNull) break;
            ListNode* t = new ListNode(lists[idx]->val);
            if(temp== NULL){
                temp = t;
                head = t;              
            }else{
                temp->next = t;
                temp =temp->next;
            }
            lists[idx] = lists[idx]->next;
            
        }
        return head;
    }
};