/* 
 Time Complexity: O(n+max);
 Extra Space: O(max);
*/

#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6; // max element of the array
int cnt[MAX + 1];

int32_t main() {
 
  int n; cin >> n;
  int a[n + 1];
  
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  
  for (int i = 1; i <= n; i++) {
    cnt[a[i]]++;
  }
  
  for (int i = 1; i <= MAX; i++) {
    for (int j = 1; j <= cnt[i]; j++) {
      cout << i << ' ';
    }
  }cout << '\n';
  return 0;
}
