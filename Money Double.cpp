#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        int amount = x;
        if(x>=1000)
        {
            for(int i=0; i<y; i++)
            {
                amount*=2;
            }

        }
        else
        {
             amount +=1000;
            for(int i=0; i<y-1; i++)
            {
                amount*=2;
            }
        }
        cout<<amount<<endl;
    }

    return 0;
}
