https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_8230729?challengeSlug=striver-sde-challenge

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* head,*result, *cur1,*cur2;
    cur1= first;
    cur2= second;
    result= NULL;
    
    if(cur1==NULL) return second;
    else if(cur2==NULL) return first;
    if(cur1->data<=cur2->data)
        {
            head=cur1;
            result=cur1;
            cur1=cur1->next;
            
        } 
    else {
          head= cur2;
          result=cur2;
          cur2 = cur2->next;
          
        }

    while(cur1!=NULL && cur2!=NULL)
    {
        if(cur1->data<=cur2->data)
        {
            result->next=cur1;
            result=cur1;
            cur1=cur1->next;
        } 
        else {
          result->next = cur2;
          result=cur2;
          cur2 = cur2->next;
        }
    }

    while(cur1!=NULL)
    {
        result->next=cur1;
        result=cur1;
        cur1=cur1->next;
    }
    while(cur2!=NULL)
    {
        result->next=cur2;
        result=cur2;
        cur2=cur2->next;
    }

    return head;
}
