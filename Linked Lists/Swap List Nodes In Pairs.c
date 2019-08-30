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
 * 
 * @Output head pointer of list.
 */
listnode* swapPairs(listnode* curr) {
    listnode* first = curr;
    listnode* second;
    if(first!=NULL)
        second = first->next;
    if(first==NULL||second==NULL){
        return first;
    }
    else{
        second->next = swapPairs(second->next);
        first->next = second->next;
        second->next = first;
        return second;
    }
}
