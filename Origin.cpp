#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      unsigned long long int num, r, temp,total_origin;
        cin>>num;
        if(num<10)
        {
            int origin=0;
            for(unsigned long long int i=1; i<=num; i++)
            {
                origin+=i;
            }
            total_origin=origin;
        }
        else
        {
            r = 10;
            int origin=0;
            for(int i=1; i<=9; i++)
            {
                origin+=i;
            }

            //cout<<origin<<endl;

            unsigned long long int sum_of_digit=0;
            for(unsigned long long int i=10; i<=num; i++)
            {
                int temp,rem,sum=0;
                temp=i;
                while(temp!=0)
                {
                    rem=temp%10;
                    sum = sum+rem;
                    temp = temp/10;
                }
                //cout<<sum<<endl;
                sum_of_digit= sum_of_digit+sum;
            }

            total_origin = origin+sum_of_digit;


        }
        cout<<total_origin<<endl;
    }

    return 0;
}
