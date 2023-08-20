#include <bits/stdc++.h>
using namespace std;
/*
input:
5
1 2 3 4 5
2 3 6 9 1
output:
0 0 0 0 0 0
0 2 4 6 8 10
0 2 4 6 8 10
0 2 4 6 8 10
0 2 4 6 9 11
0 2 4 6 9 11
*/
int dp[10][10];
int main()
{
    int l;
    cin >> l;
    int c[5],p[5];
    for(int i=0; i<l; i++){
    cin>>p[i];
     }

    for(int i=0; i<=l; i++){
     for(int j=0; j<=l; j++){
      if(i==0 || j==0){
       dp[i][j]=0;
      }
      else{
       if(i==1){
        dp[i][j] = j*p[i-1];
       }
       else{
         if(i>j){
           dp[i][j]=dp[i-1][j];
         }
         else{
          dp[i][j]=max(p[i-1] + dp[i][j-i], dp[i-1][j]);
         }
       }
      }
     }
    }
    for(int i=0; i<=l; i++){
     for(int j=0; j<=l; j++){
      cout<<dp[i][j]<<' ';
     }
     cout<<endl;
    }
    cout<<endl;
   cout<<"MAX ANS: "<<dp[l][l]<<'\n';
 return 0;
}
