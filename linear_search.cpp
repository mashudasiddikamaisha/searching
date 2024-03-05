#include <bits/stdc++.h>
using namespace std;
int linear_search(int A[], int n, int x)
{
    //int i;
    for(int i=0;i<n;i++) {
        if(A[i]==x) return i;
    }
    //i=-1;
    //return i;
    return -1;
}
int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    int x;
    cin>>x;
    int res= linear_search(A,n,x);
    if(res==-1) cout<<"not found";
    else cout<<"Found at index "<<res<<endl;
    return 0;
}
