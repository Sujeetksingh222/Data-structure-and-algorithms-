// Problem statement: we have given an array of n elements, we have to sort the array using the ,Merge sort
// Apporach : in merge sort, we divide the array into two halves till it becomes the one size sub-array, then we start merging the two sub-arrays 
#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[], int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    int index=low;
    int temp[high];
    while(left<=mid and right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp[index++]=arr[left++];
        }
        else
        {
            temp[index++]=arr[right++];
        }
    }
    // merging the remaining elements which are left in one subarray
    while(left<=mid)
    {
        temp[index++]=arr[left++];
    }
    while(right<=high)
    {
        temp[index++]=arr[right++];
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i];
    }
}
void MergeSort(int arr[],int low,int high)
{
    // if there is only element in the array then array is sorted
    if(low>=high)return ;
    int mid=low+(high-low)/2;
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    Merge(arr,low,mid,high);
    return ;
}
int main()
{
    int n;
    cout<<"Enter the numbers of elememts we need to sort the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array we need to sort:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the array before sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    MergeSort(arr,0,n-1);
    cout<<"Elements of the array after sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}