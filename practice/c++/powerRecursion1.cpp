#include<iostream>
using namespace std;

int power1(int m, int n){
    if (n == 0)
    return 1;
    if (n % 2 == 0)
    return power1(m * m,n - 1) * m;
    else 
    return m * power1(m * m,(n -1) / 2);
}


int main(){
    int r;
    r = power1(2, 3);
    cout<<r<<endl;
}
