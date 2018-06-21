Node* Delete(Node *head, int position)
{
  // Complete this method
    int i=0;
    Node *prev=NULL;
    Node *curr=head;
    while(i<position)
    {
        prev=curr;
        curr=curr->next;
        i++;
    }
    if(position>0)
        prev->next=curr->next;
    else
        head=head->next;
    free(curr);
    return head;
}
