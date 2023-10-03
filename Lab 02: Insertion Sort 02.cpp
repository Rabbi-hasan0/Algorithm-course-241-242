/**    Don't Copy Code from anywhere
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i=1; i<n; i++){
        int key = a[i];
        int j = i-1;

        while (j >= 0){    // Move big value index than small value index;
            if(a[j] < key){
                a[j+1] = a[j];
                j--;
            }
            else{
                break;
            }
        }

        a[j+1] = key; // Founded value fix in his index;
    }

    for (int i=0; i<n; i++)
        cout << a[i] << ' ';
    cout << '\n';
  return 0;
}
