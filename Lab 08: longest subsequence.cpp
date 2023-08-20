#include <bits/stdc++.h>
using namespace std;
/*
input:
A="abcd";
B="bd";
output:
0 0 0
0 0 0
0 1 1
0 1 1
0 1 2
*/
int dp[10][10];
int main()
{
    string A,B;
    cin>>A>>B;

    for(int i=0; i<=A.size(); i++){
        for(int j=0; j<=B.size(); j++){
            if (i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else{
                if(A[i-1] == B[j-1]){
                    dp[i][j]= 1+ dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
                }
            }
            cout<<dp[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<endl;
    cout<<"MAX ANS: "<<dp[A.size()][B.size()]<<'\n';
    return 0;
}
