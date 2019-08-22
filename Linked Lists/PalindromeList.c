35976 KB	
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
 * 
 * @Output Integer
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
int lPalin(listnode* head) {
    if(head==NULL) return 1;
    if(head->next==NULL) return 1;
    listnode* left = head;
    listnode* mid = middle(left);
    listnode* right = reverseRecursively(mid->next);
    mid->next = NULL;
    listnode* temp1 = left;
    listnode* temp2 = right;
    while(temp1&&temp2){
        if(temp1->val!=temp2->val){
            return 0;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return 1;
}
