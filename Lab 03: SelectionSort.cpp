/**
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

//-> Just finding min element and swaping first index and doing index++;
#include<bits/stdc++.h>
using namespace std;
void insertion(int a[],int n){
  int M;
  for(int i=0; i<n-1; i++){
    M=i;
    for(int j=i+1; j<n; j++){
      if(a[M]>a[j])
        M=j;
     }
    if(M!=i)
      swap(a[M],a[i]);
  }
}
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++)
        cin>>a[i];
    insertion(a,n);

    for(int i=0; i<n; i++)
        cout<<a[i]<<' ';
    cout<<"\n";

    return 0;
}
