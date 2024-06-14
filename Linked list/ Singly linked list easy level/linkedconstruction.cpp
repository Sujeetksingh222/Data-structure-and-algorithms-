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
int main()
{
    vector<int>arr={1,2,3,4,5};
    Node *result=constructLL(arr);
    while(result)
    {
        cout<<result->data<<"->";
        result=result->next;
    }
    return 0;
}