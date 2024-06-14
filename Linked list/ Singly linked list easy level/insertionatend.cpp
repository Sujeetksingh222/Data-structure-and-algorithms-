// problem: we have to insert the node at the end of linked list
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
int main()
{
    Node *head=NULL;
    head=insert_at_end(head,10);
    head=insert_at_end(head,20);
    head=insert_at_end(head,30);
    head=insert_at_end(head,40);
    print_Node(head);
    return 0;
}