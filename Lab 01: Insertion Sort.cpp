/**    Don't Copy Code from anywhere
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include<bits/stdc++.h>
#define nn "\n"
using namespace std;
void insertionSort(int a[], int n)
{
    int i,key,j;
    for (i=1; i<n; i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for (i=0; i<n; i++)
        cout<<a[i]<<' ';
    cout<<nn;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
        cin>>a[i];
    insertionSort(a,n);
  return 0;
}
