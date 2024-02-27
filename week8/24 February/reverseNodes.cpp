//question -> https://leetcode.com/problems/reverse-nodes-in-k-group/

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
    ListNode* rev(ListNode* head, int k){
        // this function only reverses the pointers
        if(head == NULL || head ->next == NULL || k ==1) return head;
        if(head->next->next == NULL || k == 2){
            head->next->next = head;
            return head->next;
        }

        ListNode* prev = head, *curr = head->next, *nxt = head->next->next;
        int l = k-1;
        while(curr != NULL && l){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            if(nxt != NULL) nxt = nxt->next;
            l--;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1) return head;
        ListNode* prev = new ListNode(-1), *last = head, *ans = head;
        int in = k-1;
        while(ans != NULL && in){
            ans = ans->next;
            in--;
        }

        if(in != 0) return head;
        while(last != NULL){
            int l = k;
            while(last != NULL && l){
                last = last->next;
                l--;
            }
            if(l != 0){
                // cout<< "sdf"<<endl;
                return ans;
            }
            // cout<< "here "<< endl;
            prev ->next = rev(head, k);
            prev = head;
            head->next = last;
            head = head->next;
        }
        return ans;


    }
};