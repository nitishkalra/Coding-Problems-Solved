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
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* addTwoNumbers(listnode* A, listnode* B) {
    listnode* newList = (listnode*)malloc(sizeof(listnode));
    newList->val = 0;
    newList->next = NULL;
    listnode* newListptr = newList;
    listnode* temp1 = A;
    listnode* temp2 = B;
    int c = 0;
    while(temp1&&temp2){
        listnode* digit = (listnode*)malloc(sizeof(listnode));
        digit->next = NULL;
        if(temp1->val+temp2->val+c>9){
            digit->val = (temp1->val+temp2->val+c)%10;
            c = 1;
            newListptr->next = digit;
            newListptr = newListptr->next;
        }
        else{
            digit->val = temp1->val+temp2->val+c;
            c=0;
            newListptr->next = digit;
            newListptr = newListptr->next;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while(temp1){
        listnode* digit = (listnode*)malloc(sizeof(listnode));
        digit->next = NULL;
        if(temp1->val+c>9){
            digit->val = (temp1->val+c)%10;
            c = 1;
            newListptr->next = digit;
            newListptr = newListptr->next;
        }
        else{
            digit->val = temp1->val+c;
            c=0;
            newListptr->next = digit;
            newListptr = newListptr->next;
        }
        temp1 = temp1->next;
        
    }
    while(temp2){
        listnode* digit = (listnode*)malloc(sizeof(listnode));
        digit->next = NULL;
        if(temp2->val+c>9){
            digit->val = (temp2->val+c)%10;
            c = 1;
            newListptr->next = digit;
            newListptr = newListptr->next;
        }
        else{
            digit->val = temp2->val+c;
            c=0;
            newListptr->next = digit;
            newListptr = newListptr->next;
        }
        temp2 = temp2->next;
    }
    if(c!=0){
        listnode* digit = (listnode*)malloc(sizeof(listnode));
        digit->next = NULL;
        digit->val = 1;
        newListptr->next = digit;
        newListptr = newListptr->next;
    }
    return newList->next;
}
