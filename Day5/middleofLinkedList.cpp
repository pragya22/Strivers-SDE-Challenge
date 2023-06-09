https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_8230764?challengeSlug=striver-sde-challenge

Node *findMiddle(Node *head) {
    // Write your code here

    Node *fast,*slow;
    if(head==NULL ||head->next==NULL) return head;
    slow=head;
    fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}