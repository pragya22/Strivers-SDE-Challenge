https://www.codingninjas.com/codestudio/problems/reverse-linked-list_8230724?challengeSlug=striver-sde-challenge

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *prev, *cur, *temp;
    cur=head;
    prev=NULL;
    temp=NULL;
    if(head==NULL || (head->next)==NULL) return head;
    while(cur!=NULL)
    {
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    return prev;
}