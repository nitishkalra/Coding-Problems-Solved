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
