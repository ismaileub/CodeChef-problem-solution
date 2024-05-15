#include<iostream>
using namespace std;
int main()
{
    int x,y,path;
    cin>>x>>y;
    path = x*2+y*2;
    if(path>=1000){
        cout<< "YES";
    }
    else{
        cout<< "No";
    }
}
