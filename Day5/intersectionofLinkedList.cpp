https://www.codingninjas.com/codestudio/problems/intersection-of-two-linked-lists_8230688?challengeSlug=striver-sde-challenge

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here

    Node *dummy1,*dummy2;
    int len1=0,len2=0;
    dummy1=firstHead;
    dummy2=secondHead;
    while(dummy1 || dummy2)
    {                  
            if(dummy1!=NULL)
            {
                len1++;
                dummy1=dummy1->next;
            }
            if(dummy2!=NULL)
            {
                len2++;
                dummy2=dummy2->next;
            }
    }
    dummy1=firstHead;
    dummy2=secondHead;
    int longer=len1>len2?len1:len2;
    int smaller=len1<len2?len1:len2;
    for(int i=0;i<(longer-smaller);i++)
    {
        if(len1>len2)
            dummy1=dummy1->next;
        else
            dummy2=dummy2->next;
    }

    while(dummy1!=NULL && dummy2!=NULL)
    {
        if(dummy1==dummy2)
           return dummy1;
        dummy1=dummy1->next;
        dummy2=dummy2->next;
    }
    return NULL ;
    
}