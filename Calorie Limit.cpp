#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int total=0, count=0;
        for(int i=0; i<n; i++)
        {
            total += arr[i];
            if(total <= k )
            {

                count++;
            }
        }

        cout<<count<<endl;

    }

    return 0;
}
