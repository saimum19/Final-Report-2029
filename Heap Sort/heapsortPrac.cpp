#include<bits/stdc++.h>
using namespace std;

void heapify(int a[],int n,int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && a[left]>a[largest])
        largest = left;

    if(right<n && a[right]>a[largest])
        largest = right;

    if(largest!=i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
    for(int i=n/2-1; i>=0; i--)
    {
        heapify(a,n,i);
    }
    for(int i=n-1; i>0; i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
int main()
{
    int n;
    cout<<"Number of element:";
    cin>>n;
    int a[n];
    cout<<"Input Array:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Before sorting:";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;
    heapsort(a,n);
    cout<<"After sorting:";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;
}

