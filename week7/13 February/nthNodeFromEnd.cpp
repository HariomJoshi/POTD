//question -> https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        int start = size -n;
        // handling starting and ending cases, return in both cases
        temp = head;
        if(start == 0){  // starting case
            head = head-> next;
            return head;
        }
        if(n == 1){   // ending case
            while(start >0){
                temp = temp ->next;
                temp->next = NULL;
                start--;
            }
            return head;
        }
        
        // handling middle cases
        temp = head;    
        while(start >=2){
        temp = temp -> next;
            start--;
        }

        temp -> next = temp -> next->next;
        return head; 
    }

};