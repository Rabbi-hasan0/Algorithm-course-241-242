/**
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l, int M, int r){
    int n1=M-l+1;
    int n2=r-M;
    int b[n1+5],c[n2+5];
    for (int i=0; i<n1; i++)
        b[i]=a[l+i];
    for (int j=0; j<n2; j++)
        c[j]=a[M+1+j];
    
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2){
        if(b[i]<=c[j]){
            a[k]=b[i];
            i++;
        }
        else{
            a[k]=c[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=b[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=c[j];
        j++;
        k++;
    }
}
int sorting(int a[], int l, int r){
    if(l<r){
        int M=(l+r)/2;
        sorting(a,l,M);
        sorting(a,M+1,r);
        merge(a,l,M,r);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sorting(a,0,n-1);

    for(int i=0; i<n; i++)
        cout<<a[i]<<' ';
    cout<<"\n";

    return 0;
}
