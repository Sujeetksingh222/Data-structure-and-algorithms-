// problem statement:- insert the node at the beginning of linked list
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
Node *insert_at_begin(Node *head,int data)
{
    if(head==NULL)
    {
        head=new Node(data);
        return head; 
    }
    else
    {
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
    }
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
    head=insert_at_begin(head,2);
    head=insert_at_begin(head,10);
    head=insert_at_begin(head,6);
    head=insert_at_begin(head,30);
    print_Node(head);
    return 0;
}