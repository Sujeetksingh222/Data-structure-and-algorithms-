//Problem statement: we have given an array of n elements , we have to sort the elements of array
// approach:- in insertion sort , we compare the incoming element with the current element , if current element is greater than the incoming element then find the correct position of incoming element and place it in the array

#include<bits/stdc++.h>
using namespace std;
  
    void insertion_sort(int arr[], int n)
    {
      for(int i=1;i<n;i++)
      {
        int j=i-1;
        int key=arr[i];
        while(arr[j]>key and j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        j++;
        arr[j]=key;
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
    cout<<endl;
    insertion_sort(arr,n);
    cout<<"Elements of the array after sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}