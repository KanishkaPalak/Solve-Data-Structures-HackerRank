int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method
        Node *curA=headA;
        Node *curB=headB;
        while(curA!=NULL && curB!=NULL)
        {
            if(curA->data==curB->data)
            {
                curA=curA->next;
                curB=curB->next;
            }
            else
                return 0;
        }
    if(curA==NULL && curB==NULL)
        return 1;
    else 
        return 0;
}
