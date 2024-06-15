// problem statement: we have a doubly linked list , we need to add a element at the given position
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    Node *prev;
    int data;
    Node *next;
    // default constructor
    Node()
    {
        this->prev=NULL;
        this->data=0;
        this->next=NULL;
    }
    // parameterized constructor
    Node(int data)
    {
        this->prev=NULL;
        this->data=data;
        this->next=NULL;
    }
   


};
Node *creation_Doubly_linked(vector<int>&arr)
{
    // creating the first node
    Node *head=new Node(arr[0]);
    Node *curr=head;
    for(int i=1;i<arr.size();i++)
    {
        Node *temp=new Node(arr[i]);
        curr->next=temp;
        temp->prev=curr;
        curr=temp;
    }
    return head;
}
void print_Node(Node *&head)
{
    Node *curr=head;
    while(curr)
    {
        cout<<"<-"<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<endl;
}
void add_Node(Node *head,int pos,int data )
{
    if(head==NULL and pos==0)
      head=new Node(data);
    Node *curr=head;
    int jump=0;
    while(jump<pos)
    {
        curr=curr->next;
        jump++;
    }
    Node *temp=new Node(data);
    temp->next=curr->next;
    if(curr->next)curr->next->prev=temp;
    curr->next=temp;
    temp->prev=curr;
    return ;

}
int main()
{
    int n;
    cout<<"Enter the number of elements in the doubly linked list:"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the doubly linked list:"<<endl;;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Node *head=creation_Doubly_linked(arr);
    cout<<"Elements of the doubly linked list are :"<<endl;
    print_Node(head);
    int pos;
    cout<<"Enter the position where you want to add the element :";
    cin>>pos;
    int data;
    cout<<"Enter the data to be inserted in the doubly linked list:";
    cin>>data;

    add_Node(head,pos,data);
    cout<<"Elements of the doubly linked list after insertion of new element:";
    print_Node(head);
    return 0;
}