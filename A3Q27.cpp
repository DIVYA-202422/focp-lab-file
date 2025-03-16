/*Implement a function that takes an  array and its size as arguments and returns the 
second largest element using a reference parameter.*/
#include<iostream>
using namespace std;
int secondLargest(int arr[],int n)
{
    int max=arr[0];
    int secondMax=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            secondMax=max;
            max=arr[i];
        }
        else if(arr[i]>secondMax && arr[i]!=max)
        {
            secondMax=arr[i];
        }
    }
    return secondMax;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The second largest element of the array is: "<<secondLargest(arr,n);
    return 0;
}