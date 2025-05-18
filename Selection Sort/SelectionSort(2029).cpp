#include<bits/stdc++.h>
using namespace std;
void SelectonSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_ind])
            {
                min_ind=j;
            }
        }
        if(min_ind!=i)
        {
            swap(a[i],a[min_ind]);
        }
    }
}
int main(){
    int n,i;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectonSort(arr, n);
    cout<<"Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
  }
