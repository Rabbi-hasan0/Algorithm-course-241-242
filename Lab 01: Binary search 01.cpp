/**    Don't Copy Code from anywhere
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include<bits/stdc++.h>
#define nn "\n"
using namespace std;
bool binarysearch(int a[],int n,int num)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==num)return true;
        if(a[mid]<num)
            l=mid+1;
        else
            r=mid-1;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int num;
    cin>>num;
    if(binarysearch(a,n,num))
        cout<<"Find"<<nn;
    else
        cout<<"Not found"<<nn;
return 0;
}
