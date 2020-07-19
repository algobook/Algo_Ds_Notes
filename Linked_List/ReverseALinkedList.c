SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) 
{
    SinglyLinkedListNode* curr=head;
    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* temp=NULL;
    while(curr!=NULL)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
return prev;
}
