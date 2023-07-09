/**    Don't Copy Code from anywhere
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include<bits/stdc++.h>
#define nn "\n"
using namespace std;
int binarysearch(int a[],int l,int r,int num)
{
    if (r>=l)
    {
        int mid=(l+r)/2;
        if(a[mid]==num) return mid;
        if(a[mid]>num)
        return binarysearch(a, l, mid-1, num);
        else
        return binarysearch(a, mid+1, r, num);
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
    sort(a,a+n);
    int l=0,r=n-1;
    int num;
    cin>>num;
    if(binarysearch(a,l,r,num)!=-1)
        cout<<"Find"<<nn;
    else
        cout<<"Not found"<<nn;
}
