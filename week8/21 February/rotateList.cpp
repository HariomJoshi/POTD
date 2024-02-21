//question -> https://leetcode.com/problems/rotate-list/

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        int len = 1;
        ListNode* last = head; // finding the last element and the length
        while(last->next != NULL){
            last = last->next;
            len++;
        }
        if(k%len == 0) return head;
        len -=k%len;
        int i=0;
        ListNode* temp = head; // for iterating
        while(++i<len){ // traversing till we find from where to break;
            temp = temp->next;
        }
        ListNode* ans = temp->next;
        temp->next =NULL;
        last->next = head;
        return ans;
    }
};