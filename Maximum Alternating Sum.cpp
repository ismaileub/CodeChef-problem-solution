#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int maxSum=0,minSum=0, alternatingSum;
        for(int i=0; i<n; i++)
        {
            if(i<n/2)
                minSum+=arr[i];
            else
                maxSum+=arr[i];
        }
        alternatingSum=maxSum - minSum;
        cout<<alternatingSum<<endl;

    }
    return 0;
}
