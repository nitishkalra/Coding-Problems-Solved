×
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
listnode* reverseList(listnode* head, int B) {
    listnode* curr = head;
    listnode* prev = NULL;
    listnode* next = NULL;
    int count = 0;
    while(curr!=NULL&&count<B){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    if(next!=NULL){
        head->next = reverseList(next,B);
    }
    return prev;
}
