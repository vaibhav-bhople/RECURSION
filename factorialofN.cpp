#include<iostream>
using namespace std;
 
int fact(int n){
    if(n==0) return 1;
    int prevAns = fact(n-1);
    return n*prevAns;
}

int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"Error";
    }
    else{
        cout<<fact(n);
    }
}
 
