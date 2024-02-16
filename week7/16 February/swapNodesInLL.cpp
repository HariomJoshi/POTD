//question -> https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/?envType=list&envId=rrs3r4z6

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
    ListNode* swapNodes(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;
        while(temp !=0){
            temp= temp->next;
            len++;
        }
        len-=k;
        ListNode* first, *second;
        temp = head;
        int count =0;
        while(temp != NULL){
            if(count == k-1){
                first = temp;
            }
            if(count == len){
                second = temp;
            }
            count++;
            temp = temp->next;
        }
        swap(first->val, second->val);
        return head;
    }
};