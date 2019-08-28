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

listnode* rotateRight(listnode* head, int k) {
  listnode* temp = head;
  listnode* prev = NULL;
  listnode* curr = head;
  int n = 0;
  while(temp!=NULL){
    n++;
    temp = temp->next;
  }
  int c = 0;
  if(k==0||n==0) return head;
  while(c!=n-k){
    c++;
    prev = curr;
    curr = curr->next;
  }
  prev->next = NULL;
  temp = curr;
  while(temp->next!=NULL){
    temp = temp->next;
  }
  temp->next = head;
  head = curr;
  return head;
}
