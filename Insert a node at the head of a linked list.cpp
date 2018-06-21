Node* Insert(Node *head,int data)
{
    Node *node = new Node;
    node -> data = data;

    if (head == NULL) 
    {
        return node;
    }
    else 
    {
        node->next=head;
        return node; 
    }
}
