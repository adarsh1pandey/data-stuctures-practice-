#include<iostream>
using namespace std;

int rfib(int n){
    if(n <= 1) return n;
    return rfib(n - 2) + rfib(n - 1);
}

int main(){
    cout<<rfib(5)<<endl;
}