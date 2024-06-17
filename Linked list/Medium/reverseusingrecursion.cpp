//problem: we have a given a linked list , we have to reverse the linked list .
// apporach: we are reversin the linked list using recursion
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*next;
};
typedef struct node Node;
Node *constructLL(vector<int>&arr)
{
    Node *head=(Node*)malloc(sizeof(Node));
    head->data=arr[0];
    head->next=NULL;
    Node *ans=head;
    for(int i=1;i<arr.size();i++)
    {
        Node *temp=(Node*)malloc(sizeof(Node));
        temp->data=arr[i];
        temp->next=NULL;
        head->next=temp;
        head=head->next;
    }
    return ans;
}
void print_Node(Node *head)
{
    Node *curr=head;
    while(curr)
    {
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<endl;
}
Node *reverse_Linked_List(Node *head)
{
    // if there is only one node in the linked list
    if(head==NULL || head->next==NULL)return head;
    Node *rev=reverse_Linked_List(head->next);
    head->next->next=head;
    head->next=NULL;
    return rev;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    Node *result=constructLL(arr);
   cout<<"Nodes of the linked list are:";
   print_Node(result);
   Node *rev=reverse_Linked_List(result);
   cout<<"Nodes of the linked list after reversal:";
   print_Node(rev);
   
    return 0;
}