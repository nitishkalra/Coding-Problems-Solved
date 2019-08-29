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
listnode* middle(listnode* head)
{
    listnode* slow = head;
    if(head->next==NULL) return slow;
    listnode* fast = head->next;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
listnode* reverseRecursively(listnode* curr)
{
    listnode* first = curr;
    listnode* second;
    if(first!=NULL)
        second = first->next;
    if(second==NULL)
        return first;
    else{
        listnode* h = reverseRecursively(second);
        first->next = second->next;
        second->next = first;
        return h;
    }
}
listnode* reorderList(listnode* head) {
    if(head->next==NULL) return head;
    listnode* left = head;
    listnode* mid = middle(left);
    listnode* right = reverseRecursively(mid->next);
    mid->next = NULL;
    listnode* newList = (listnode*)malloc(sizeof(listnode));
    newList->val = 0;
    newList->next = NULL;
    listnode* newListptr = newList;
    newListptr->next = left;
    newListptr = newListptr->next;
    left = left->next;
    //struct Node* temp = newList;
    while(left&&right){
        newListptr->next = right;
        newListptr = newListptr->next;
        right = right->next;
        newListptr->next = left;
        newListptr = newListptr->next;
        left = left->next;
    }
    while(left){
        newListptr->next = left;
        newListptr = newListptr->next;
        left = left->next;
    }
    while(right){
        newListptr->next = right;
        newListptr = newListptr->next;
        right = right->next;
    }
    return newList->next;
}
