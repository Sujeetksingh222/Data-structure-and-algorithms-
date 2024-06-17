//problem statement :- we have given the linked list we have to find the mid of the linked
// Approach:- find the length of the linked list , then traverse the linked list upto half
// approach2:- take two pointers , one is slow and another is fast and run the slow pointer to one move forward and run the fast pointer two position ahead
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
Node *Middle_of_linked_list(Node *head)
{
    if(head==NULL)return head;
    Node *slow=head;
    Node *fast=head;
    while(fast and fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    
    }
    return slow;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    Node *result=constructLL(arr);
    Node *head=result;
    while(result)
    {
        cout<<result->data<<"->";
        result=result->next;
    }
    cout<<endl;
    Node *mid=Middle_of_linked_list(head);
    cout<<"Middle of the linked list is :"<<mid->data<<endl;
    return 0;
}