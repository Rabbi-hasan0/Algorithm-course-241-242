#include<bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i){

int parent= (i-1)/2;

 if(a[parent]>0){
  if(a[i]>a[parent]){
  swap(a[i],a[parent]);
  heapify(a,n,parent);
  }
 }
}

void insertnode(int a[], int n, int x){
 a[n-1]=x;
 heapify(a,n,n-1);
}

void print(int a[], int n){
 for(int i=0; i<n; i++){
 cout<<a[i]<<' ';
 }
 cout<<'\n';
}


int main(){

int n;cin>>n;
int a[n+1],mx=0;

for(int i=0; i<n; i++){
 cin>>a[i];
 mx=max(mx,a[i]);
}
insertnode(a,n,mx);

print(a,n);
return 0;
}
