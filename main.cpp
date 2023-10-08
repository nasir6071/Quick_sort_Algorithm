#include<bits/stdc++.h>
using namespace std;

#define n 5
int arr[n];

void swap(int number[],int x,int y)
{
    int temp=number[x];
        number[x]=number[y];
        number[y]=temp;
}
void swap1(int number[],int x,int y)
{
          number[x]=number[x]+number[y];
          number[y]=number[x]-number[y];
          number[x]=number[x]-number[y];
}
void swap2(int number[],int x,int y)
{
          number[x]=number[x]*number[y];
          number[y]=number[x]/number[y];
          number[x]=number[x]/number[y];
}
void swap3(int number[],int x,int y)
{
          number[x]=number[x]^number[y];
          number[y]=number[x]^number[y];
          number[x]=number[x]^number[y];
}


void quicksort(int number[],int first,int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(number[i]<=number[pivot]&&i<last)
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j)
            {
                swap3(number, i, j);
            }
        }
        swap(number, pivot, j);
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);
    }
}
int main()
{
    int i;
    cout<<"Enter Your Values\n";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
