//question -> https://leetcode.com/problems/split-linked-list-in-parts/description/

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp = head;
        int len = 0;
        while(temp!= NULL){
            len++;
            temp = temp->next;
        }
        vector<ListNode*> ans;
        temp = head;
        ListNode* prev = head;
        while(k >0 && temp != NULL){
            int l = ceil((float)len/k);
            len -=l;
            if(l != 0)ans.push_back(temp);
            while(l-- && temp != NULL){
                prev= temp;
                temp = temp->next;
            }
            if(prev != NULL)prev->next = NULL;
            k--;
        }
        while(k>0){
            ans.push_back(NULL);
            k--;
        }
        return ans;
    }
};
