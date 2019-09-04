3244 KB	
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
 * @Output head pointer of list.
 */
void insertNode(listnode** head, listnode* toAdd){
    listnode* temp = *head;
    if(temp==NULL||temp->val>=toAdd->val){
        toAdd->next = *head;
        *head = toAdd;
    }
    else{
        while(temp->next!=NULL&&temp->next->val<toAdd->val){
            temp = temp->next;
        }
        toAdd->next = temp->next;
        temp->next = toAdd;
        
    }
}
listnode* insertionSortList(listnode* head) {
    listnode* ptr = head;
    listnode* sortedList = NULL;
    while(ptr!=NULL){
        listnode* nextt = ptr->next;
        insertNode(&sortedList, ptr);
        ptr = nextt;
    }
    return sortedList;
    
}
