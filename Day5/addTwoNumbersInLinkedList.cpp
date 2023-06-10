https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_8230833?challengeSlug=striver-sde-challenge

Node *add(Node *first, Node *second)
{
    int sum=0,digit1,digit2,carry=0;
    Node *cur1,*cur2,*head=NULL,*prev=NULL;
    cur1=first;
    cur2=second;
    Node *temp;
    while(cur1!=NULL || cur2!=NULL)
    {
          digit1=0,digit2=0;
          if (cur1 != NULL) {
        digit1 = cur1->data;
        cur1=cur1->next;
      }
         if(cur2!=NULL){
             digit2=cur2->data;
             cur2=cur2->next;
         }
            
        sum=digit1+digit2+carry;
        carry=sum/10;
        sum=sum%10;

        
        temp=new Node(sum);
        if(head==NULL) head =temp;
        else prev->next=temp;
       
        prev=temp;
    }
    if(carry>0)
    {
        temp=new Node(carry);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *res;
    // Write your code here.
    
    res= add(num1,num2);
    
    return res;
}
