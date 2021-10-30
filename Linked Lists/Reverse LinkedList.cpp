// Leetcode - Reverse Linked List

// Given the head of a singly linked list, reverse the list, and return the reversed list.

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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        ListNode* curr = head;
        ListNode* next = curr->next;
        ListNode* prev = NULL;
        while(curr!=NULL){
            curr->next = prev;
            prev = curr;
            curr = next;
            if(next!=NULL){
               next = next->next; 
            } 
        }
        return prev;
    }
};