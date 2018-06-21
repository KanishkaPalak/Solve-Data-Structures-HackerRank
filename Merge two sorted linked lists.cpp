Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA == NULL)
        return headB;
    else if(headB == NULL)
        return headA;
    else
    {
        if(headA->data < headB->data)
        {
            headA->next = MergeLists(headA->next, headB);
            return headA;
        }
        else
        {
            headB->next = MergeLists(headB->next, headA);
            return headB;
        }
    }
}
