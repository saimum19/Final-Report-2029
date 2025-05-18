#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Number of element:";
    cin>>n;
    int a[n];
    cout<<"Input Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before sorting:";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    for(i =0;i<n-1;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               swap(a[j+1],a[j]);
           }
       }
    }
     cout<<endl;
     cout<<"After Sorting: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
