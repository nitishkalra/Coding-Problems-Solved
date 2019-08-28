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
 * @input C : Integer
 * 
 * @Output head pointer of list.
 */
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
listnode* reverseBetween(listnode* head1, int B, int C) {
    listnode* ussePehli = NULL;
    listnode* last = NULL;
    listnode* uskeBaad = NULL;
    listnode* temp = head1;
    int m1=1;
    while(temp&&C!=0){
        //if(m1==1) ussePehli = temp;
        if(m1<=B-1){
            ussePehli = temp;
        }
        m1++;
        if(C-1==0){
            last = temp;
        }
        C--;
        temp = temp->next;
    }
    uskeBaad = last->next;
   // printf("ussePehli : %d\n last: %d\n uskeBaad: %d",ussePehli->data,last->data,uskeBaad->data);
    last->next = NULL;
    listnode* toAdd;
    //ussePehli->next = reverseRecursively(ussePehli->next);
    if(ussePehli!=NULL){
        toAdd = reverseRecursively(ussePehli->next);
        ussePehli->next = toAdd;
    }
    else{
        toAdd = reverseRecursively(head1);
        head1 = toAdd;
    }
    listnode* temp2 = head1;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = uskeBaad;
    return head1;
}
