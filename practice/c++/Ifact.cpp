#include<iostream>
using namespace std;

int Ifact(int n){
    int i ;
    int fact = 1;

    for(i = 1; i <= n; i++){
       fact = i*fact;
    }
    return fact;
}
int main(){
    int r;
    r = Ifact(4);
    cout<<r<<endl;
}