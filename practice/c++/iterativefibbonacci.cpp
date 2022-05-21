#include<iostream>
using namespace std;

int fib(int n){
    int b0 = 0,b1 = 1,i,s;
    if (n <= 1)
        return n;
    for(i = 2; i <= n;i++){
        s = b0 + b1;
        b0 = b1;
        b1 = s;
    }
    return s;
}
int main(){
    cout<<fib(6)<<endl;
}