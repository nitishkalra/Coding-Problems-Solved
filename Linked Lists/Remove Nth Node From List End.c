/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * @input B : Integer
 * 
 * @Output head pointer of list.
 */
int length(listnode* head)
{
    int count = 0;
    listnode* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
listnode* removeNthFromEnd(listnode* head, int k) {
    int n = length(head);
    int count = 1;
    if(n==1&&k==1) return NULL;
    if(n>=k){
        head = head->next;
        return head;
    }
    
    listnode* temp = head;
    while(temp->next!=NULL&&count!=(n-k)){
        count++;
        temp = temp->next;
        
    }
    if(temp->next!=NULL){
        
        temp->next = (temp->next)->next;
        
    }
    return head;
    
}

// Leetcode - Remove Nth Node From End of List
//Given the head of a linked list, remove the nth node from the end of the list and return its head.

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
        if(head == NULL) return NULL; 
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        count = count-n;
        temp = head;
        if(count == 0){
            head = temp->next;
            return head;
        }
        while(count-1>0){
            temp = temp->next;
            count--;
        }
        if(temp->next){
            temp->next = temp->next->next;
        }
        
        return head;
    }
};