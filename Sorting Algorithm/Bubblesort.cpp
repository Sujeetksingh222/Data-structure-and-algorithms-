//Problem statement: we have given an array of n elements , we have to sort the elements of array
// approach:- in Bubble sort , we compare adjacent element , if previous element is greater than the next element then swao these elements

#include<bits/stdc++.h>
using namespace std;
  
    void Bubble_sort(int arr[], int n)
    {
        bool flag=false;
    
       for(int i=0;i<n;i++)
       {
          int  min=i;
           for(int j=0;j<n-i-1;j++)
           {
               if(arr[j]>arr[j+1])
               {
                   swap(arr[j],arr[j+1]);
                   flag=true;
                   
               }
           }
           if(!flag)break;
           
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
    Bubble_sort(arr,n);
    cout<<"Elements of the array after sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}