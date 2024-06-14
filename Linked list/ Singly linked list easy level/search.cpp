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
    cout<<endl;
}
bool search_Node(Node *&head,int key)
{
    if(head==NULL)return false;
    while(head)
    {
        if(head->data==key)return true;
        head=head->next;
    }
    return false;
}
int main()
{
    Node *head=NULL;
    head=insert_at_begin(head,2);
    head=insert_at_begin(head,10);
    head=insert_at_begin(head,6);
    head=insert_at_begin(head,30);
    cout<<"Elements of the linked list are:";
    print_Node(head);
    int key;
    cout<<"Enter the element to search in the linked list:";
    cin>>key;
    if(search_Node(head,key))cout<<key<<" is found in the linked list:";
    else cout<<key<<" is not found in the linked list:";
    return 0;
}