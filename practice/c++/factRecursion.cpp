#include<iostream>
using namespace std;

int fact(int n){
    if (n == 0){
        return 1;
    }
    else 
        return fact(n - 1) * n;
}        
       
int main(){
    int r;
    r = fact(5);
    cout<<r<<endl;
}