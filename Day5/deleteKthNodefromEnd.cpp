https://www.codingninjas.com/codestudio/problems/delete-kth-node-from-end_8230725?challengeSlug=striver-sde-challenge
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node *slow,*fast;
    slow=head;
    fast=head;
    if(head==NULL || head->next== NULL) return NULL;
    while(K)
    {
        fast=fast->next;
        K--;
    }
    //if K==length of LL and node to be deleted is head node
    if(fast==NULL)
    {   Node *temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
   
    Node *temp=slow->next;
    slow->next=slow->next->next;
    free(temp);
    return head;
}
