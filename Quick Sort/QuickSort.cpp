#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r)
{
    int pivot = a[r];
    int i = l-1;
    for(int j = l; j<r; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}


void QuickSort(int a[],int l,int r)
{
    if(l<r)
    {
        int pi = partition(a,l,r);
        QuickSort(a,l,pi-1);
        QuickSort(a,pi+1,r);
    }
}

int main()
{
   int n;
   cout<<"Number of elements:";
   cin>>n;
   int a[n];
   cout<<"Take elements:";
   for(int i = 0;i<n;i++)
   {
       cin>>a[i];
   }
   cout<<"Before Sorting :";
   for(int i = 0;i<n;i++)
   {
       cout<<a[i]<<" ";

   }
   cout<<endl;
   QuickSort(a,0,n-1);
    cout<<"After Sorting :";
   for(int i = 0;i<n;i++)
   {
       cout<<a[i]<<" ";

   }

}
