#include<iostream>
using namespace std;
 
int e(int x, int n){
    double s = 1;
    int i;
    double p = 1;
    double q = 1;
    p = p*x;
 
    for(i = 1; i <= n; i++ ){
        q = q * i;
        s = s + p/q;
        p = p*x;
    }
    return s;
}
int main(){
    cout<<e(2,10)<<endl;
    return 0;
}
 