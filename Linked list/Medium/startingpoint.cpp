//problem statement: we have a linked list , we have to  find the starting point of the loop in the linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    // default constructor
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    // parameterized constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};
Node *insert_at_end(Node *head,int data)
{
    if(head==NULL)
    {
        head=new Node(data);
        return head;
    }
    // we need to travel the end of linked list to insert the value
    Node *curr=head;
    while(curr->next)
    {
        curr=curr->next;
    }
    curr->next=new Node(data);
    return head;
}
void print_Node(Node *head)
{
    if(head==NULL)return ;
    while(head)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}
Node * start_Cycle(Node *head)
{
    if(head==NULL)return NULL;
    Node *slow=head;
    Node *fast=head;
    while(fast and fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            fast=head;
            while(slow !=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
        }

    }
    return NULL;
}
int main()
{
    Node *head=NULL;
    Node *temp,*temp1;
    temp=head=insert_at_end(head,10);
    head=insert_at_end(head,20);
    temp1=head=insert_at_end(head,30);
    head=insert_at_end(head,40);
    temp->next=temp1;
    if(start_Cycle(head)==NULL)cout<<"there does not exist a cycle in the linked list:";
    else cout<<"starting point of linked list is:"<<start_Cycle(head)->data<<endl;
    return 0;
}