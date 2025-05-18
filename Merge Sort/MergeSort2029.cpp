#include<bits/stdc++.h>
using namespace std;
Merge(int a[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=a[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1) a[k++]=L[i++];
    while(i<n2) a[k++]=R[j++];

}
void MergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        MergeSort(a,l,mid);
        MergeSort(a,mid+1,r);
        Merge(a,l,mid,r);
    }
}
int main()
{
    int n;
    cout<<"Number of Elements:";
    cin>>n;
    int a[n];
    cout<<"Enter elements:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Original array--";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    MergeSort(a,0,n-1);
    cout<<"Sorted array--";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}


