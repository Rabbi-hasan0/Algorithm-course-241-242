/**
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

//-> Just finding min element and swaping first index and doing index++;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    for(int i = 0; i < n-1; i++){
        int select = i;
        for(int j = i+1; j < n; j++){
            if(a[select]>a[j]){
               select = j;
            }
        }
       swap(a[select], a[i]);
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }cout<<"\n";

    return 0;
}
