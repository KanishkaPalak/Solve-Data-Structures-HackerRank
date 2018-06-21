Node* Insert(Node *head,int data)
{
    // Complete this method
    Node *node = new Node;
    node -> data = data;

    if (head == NULL) 
    {
        return node;
    }
    else 
    {
        Node *end = head;
        while (end-> next != NULL) 
        {
            end = end -> next;
        }
        end -> next = node;
        return head; 
    }
}
