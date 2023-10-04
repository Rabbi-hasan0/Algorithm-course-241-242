/*
Time Complexity: O(n logn);
Space complexity: O(n);
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &l, vector<int> &r) {

  int n = l.size(), m = r.size();
  vector<int> ans;
  int i = 0, j = 0;
    while (i < n && j < m){
        if (l[i] < r[j]){
          ans.push_back(l[i]);
          i++;
        }
        else{
          ans.push_back(r[j]);
          j++;
        }
    }

    while (i < n) {
      ans.push_back(l[i]);
      i++;
    }
    while (j < m) {
      ans.push_back(r[j]);
      j++;
    }

    return ans;
}

vector<int> a;

vector<int> merge_sort(int l, int r) {
  if (l == r) return {a[l]};
  int mid = (l + r)/2;
  auto left = merge_sort(l, mid);
  auto right = merge_sort(mid + 1, r);
  return merge(left, right);
}

int32_t main() {

  int n; cin >> n;
  a.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> ans = merge_sort(0, n - 1);

  for (auto x: ans) {
    cout << x << ' ';
  }cout << '\n';
  return 0;
}
