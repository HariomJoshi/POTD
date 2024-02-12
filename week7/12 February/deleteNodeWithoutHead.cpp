//question -> https://leetcode.com/problems/delete-node-in-a-linked-list/description/?envType=list&envId=rrs3r4z6

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};