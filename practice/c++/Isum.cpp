#include<iostream>
using namespace std;

int Isum(int n){
    int i = 0, s = 0;
    for(i = 1; i <= n; i++){
        s = s + i;
        
    }
    return s;
}

int main(){
    int r = Isum(5);
    cout<<r<<endl;

     
}