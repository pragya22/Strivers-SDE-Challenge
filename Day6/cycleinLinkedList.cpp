https://www.codingninjas.com/codestudio/problems/cycle-detection-in-a-singly-linked-list_8230683?challengeSlug=striver-sde-challenge

bool detectCycle(Node *head) {
  //	Write your code here

  Node *slow, *fast;
  slow=head;
  fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
            return true;
        
    }
    return false;
}