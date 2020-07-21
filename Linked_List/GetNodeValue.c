int getNode(SinglyLinkedListNode* head, int positionFromTail) 
{
    SinglyLinkedListNode* temp=head;
    int x=0;
    int n=0;
    int p;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        n++;
    }
    p=n-positionFromTail;
    temp=head;
    while(temp->next!=NULL && x!=p)
    {
        temp=temp->next;
        x++;
    }
    return temp->data;

}
