#include<bits/stdc++.h>
using namespace std;


int main(){
    int a = 10;
    int &r = a;
    r = 122345678;
   int b = 3444444;
    b = r;
    cout<<a<<endl<<r<<endl;
}