#include<bits/stdc++.h>
using namespace std;

int sorting(int a[], int l ,int r){
  int pos=a[l];
  int cnt=0;
  for(int i=l+1; i<=r; i++){
    if(a[i]<=pos){
        ++cnt;
    }
  }
  int x=cnt+l;
  swap(a[x],a[l]);

  int i=l, j=r;
  while(i<x && j>x){
    while(a[i]<=pos)i++;
    while(a[j]>pos)j--;

    if(i<x && j>x){
        swap(a[++i],a[--j]);
    }
  }
  return x;
}

void quicksort(int a[],int l, int r)
{
    if(l>=r)return;
    int x=sorting(a,l,r);
    quicksort(a,l,x-1);
    quicksort(a,x+1,r);
}

void print(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    print(a,n);
    return 0;
}

