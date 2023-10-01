#include<bits/stdc++.h>
using  namespace  std;

const int N=1e6;
int a[N];

void sieve(int n){

    for(int i=2; i<=sqrt(n); i++){
        if(!a[i]){
            for(int j=i*i; j<=n; j+=i){
                a[j] = true;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(!a[i]){
          cout << i << ' ';
        }
    }cout<<'\n';
}
int main()
{
    int n;
    cin >> n;
    sieve(n);

    return 0;
}
