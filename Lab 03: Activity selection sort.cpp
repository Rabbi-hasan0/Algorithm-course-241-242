/*
process:
step:01
 -> end[]= sort end[] array element as pair of (start, end) elememt ;
 step:02
 -> compare end[i] element to start[i+1] element;
 -> if true then count++;
*/
#include <bits/stdc++.h>
using namespace std;

void printActivities(int s[], int f[], int n){
    int j=0;
    cout << j << " ";
    for (int i = 1; i < n; i++){
        if (s[i] >= f[j]){
            cout << i << " ";
            j = i;
        }
    }
}

int main(){
    int Start[] = { 1, 3, 0, 5, 8, 5 };
    int End[] = { 2, 4, 6, 7, 9, 9 };
    int n = sizeof(Start) / sizeof(Start[0]);
    printActivities(Start, End, n);
    return 0;
}
