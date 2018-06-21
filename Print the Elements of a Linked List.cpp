void Print(Node *head)
{
    if(head==NULL)
        return;
    cout<<head->data<<endl;
    Print(head->next);
}
