//Problem statement: we have given an array of n elements , we have to sort the elements of array
// approach:- in selection sort, in every iteration we find the minimum element position and we push that minimum element at the correct position in the array
#include<bits/stdc++.h>
using namespace std;
void selction_Sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=j;
            }
        }
        if(min!=i)swap(arr[i],arr[min]);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the array before sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    selction_Sort(arr,n);
    cout<<"Elements of the array after sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}