#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Number of element:";
    cin>>n;
    int a[n];
    cout<<"Input Array:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Before sorting:";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i = 1; i<n; i++)
    {
        int temp = a[i];
        j = i-1;
        while(a[j]>temp && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<endl;
    cout<<"After Sorting: ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
