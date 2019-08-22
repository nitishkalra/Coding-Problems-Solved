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
listnode* deleteDuplicates(listnode* A) {
    listnode* curr = A;
    while((curr)&&(curr->next)){
        if((curr->val) ==((curr->next)->val) ){
            listnode* t = curr->next;
            curr ->next = t->next;
            free(t);
            t = NULL;
        }
        else{
            curr = curr->next;
        }
    }
    return A;
}
