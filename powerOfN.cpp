/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

long long power(int n,int y){
    if(y==0) return 1;
    long long temp =  power(n,y/2);
    if(y%2==1){
        return temp * temp * n;
    }
    return temp * temp;
}

int main()
{
    long long n;
    cin>>n;
    long long y;
    cin>>y;
    cout<<power(n,y);

    return 0;
}
