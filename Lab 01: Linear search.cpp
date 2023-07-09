/**    Don't Copy Code from anywhere
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include<bits/stdc++.h>
#define nn "\n"
using namespace std;
int Linearsearch(int a[],int n,int num)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==num)
            return i+1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int num;
    cin>>num;
    if(Linearsearch(a,n,num)==-1)
        cout<<"Not found"<<nn;
    else
        cout<<Linearsearch(a,n,num)<<nn;
}
