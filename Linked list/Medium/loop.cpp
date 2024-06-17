//problem statement: we have a linked list , we have to check whether the linked list has loop or not
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
bool cycle_Detection(Node *head)
{
    if(head==NULL || head->next==NULL)return false;
    Node *slow=head;
    Node *fast=head;
    while(fast and fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Node *head=NULL;
    Node *temp;
    temp=head=insert_at_end(head,10);
    head=insert_at_end(head,20);
    head=insert_at_end(head,30);
    head=insert_at_end(head,40);
    temp->next=head;
    if(cycle_Detection(head))cout<<"there exits a cycle in the linked list:";
    else cout<<"There does not exit cycle in the linked list:";
    return 0;
}