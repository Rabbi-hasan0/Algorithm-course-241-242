#include<bits/stdc++.h>
using  namespace  std;

bool check(int x) {
    if(x == 0)return 1;
    if(x < 0) return 0;
    return check(x-3) || check(x-7);
}

int main(){
    int t;
    cin >> t;
    while(t--){
     int n;
     cin >> n;
    (check(n))? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}


