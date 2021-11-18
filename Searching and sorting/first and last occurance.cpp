// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


vector<int> find(int arr[], int n , int x )
{
    vector<int> ans(2);
    int i=0; int j = n-1;
    while(i <= j) {
        if(arr[i] != x) {
            i++;
        }
        if(arr[j] != x) {
            j--;
        }
        if(arr[i] == x && arr[j] == x) {
            ans[0] = i; ans[1] = j;
            break;
        }
    }
    
    if(i > j) return {-1,-1};
    return ans;
}