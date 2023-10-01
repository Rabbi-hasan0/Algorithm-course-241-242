#include<bits/stdc++.h>
using  namespace  std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[n+1]={0};
    for(int i=0; i<n; i++){
        int x = s[i] - '0';
        a[i] = x;
    }
    int b[n+1]={0};
    string ss;
    cin >> ss;
    for(int i=0; i<n; i++){
       int x = ss[i] - '0';
        b[i] = x;
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i] == b[i]){
            continue;
        }
        else{
         int x = abs(a[i] - b[i]);
         if (a[i] < b[i]) a[i] += 10;
         else b[i] += 10;
         int y = abs(a[i] - b[i]);

         cout << min(x,y) << '\n';
         cnt += min(x,y);
        }
    }
    cout << cnt << '\n';



    return 0;
}


