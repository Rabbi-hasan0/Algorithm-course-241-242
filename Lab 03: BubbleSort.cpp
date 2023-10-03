#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){

    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
      cin >> a[i];
    }

    for(int i=0; i<n-1; i++){
     for(int j=0; j<n; j++){
       if (a[j] > a[j+1]){
         swap(a[j], a[j+1]);
       }
     }
     /*for(auto it: a){
      cout << it << ' ';
    }cout << '\n';*/
    }
     
    for(auto it: a){
      cout << it << ' ';
    }cout << '\n';
return 0;
}

/*
Time Complexity: O(n^2);
Space COmplexity: O(1);
*/
