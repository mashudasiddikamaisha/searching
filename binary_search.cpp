#include <bits/stdc++.h>
using namespace std;
int binary_search(int A[], int n, int x)
{
    int left=0, right=n-1, mid;
    while(left<=right) {
        mid = (left+right)/2;
        if(A[mid]==x) return mid;
        if(A[mid]<x) left= mid+1;
        else right = mid-1;
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    int x;
    cin>>x;
    int res= binary_search(A,n,x);
    if(res==-1) cout<<"not found";
    else cout<<"Found at index "<<res<<endl;
    return 0;
}
