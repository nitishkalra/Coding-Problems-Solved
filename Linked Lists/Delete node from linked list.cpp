// Leetcode - Delete Node in a Linked List

// Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.

// It is guaranteed that the node to be deleted is not a tail node in the list.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;
        while(temp->next!=NULL && temp->next->next!=NULL){
            temp->val = temp->next->val;
            temp = temp->next;
        }
        temp->val = temp->next->val;
        temp->next = NULL;
        
    }
};