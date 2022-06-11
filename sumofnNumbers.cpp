#include<iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    int prevSum = sum(n-1);
    return n+prevSum;
}
int main(){
    int n;
    cin>>n;
    if(n<=0){
        cout<<"Enter valid natural number";
    }
    else{
    cout<<sum(n);
}
}