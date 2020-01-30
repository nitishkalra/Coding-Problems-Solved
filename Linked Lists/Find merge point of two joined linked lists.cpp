  int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    unordered_map<SinglyLinkedListNode*,int> m;
    SinglyLinkedListNode* temp = head1;
    while(temp){
        m[temp] = 1;
        temp=temp->next;
    }
    temp = head2;
    while(temp){
        if(m.find(temp)!=m.end()){
            return temp->data;
        }
        temp=temp->next;
    }
    return -1;
}
