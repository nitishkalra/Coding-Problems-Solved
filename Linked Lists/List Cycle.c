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
// listnode* detect(listnode* head)
// {
    
//     if(slow==fast) return fast;
//     else return NULL;
// }
listnode* detectCycle(listnode* A) {
    listnode* slow = A;
    listnode* fast = A;
    while((fast->next)!=NULL&&slow!=NULL){
        
        //printf("%d %d\n",slow->val,fast->val);
        slow = slow->next;
        fast = (fast->next)->next;
        if(slow==fast) break;
    }
    //printf("%d %d",fast->val,slow->val);
    listnode* ptr2 = NULL;
    if(slow == fast)
        ptr2 = fast;
    else
        return NULL;
    //printf("%d",ptr2->val);
    listnode* ptr1 = A;
        while(ptr1!=ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return ptr2;
}
