// problem statement:- we have given a doubly linked list , we need to reverse the linked list
// problem statement: create the doubly linked list from the array
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
Node *reverse(Node *head)
{
    if(head==NULL)return head;
    Node *curr=head;
    Node *prv=NULL;
    while(curr)
    {
        Node *temp=curr->next;
        curr->next=prv;
        prv=curr;
        prv->prev=temp;
        curr=temp;
        
    }
    return prv;
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
    cout<<"Elements of the doubly linked list  are :"<<endl;
    print_Node(head);
    Node *rev=reverse(head);
    cout<<"Elements of the linked list after reversal:";
    print_Node(rev);
    return 0;
}