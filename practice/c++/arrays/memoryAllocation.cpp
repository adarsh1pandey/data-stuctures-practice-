#include<iostream>
using namespace std;


int main(){
    int a[5] = {1, 2, 3, 4, 5};

    int *p;
    p = new int[5];

    p[5] = 9;
    p[1] = 8;
    p[2] = 7;
    p[3] = 6;
    p[4] = 5;

   
    for (int i = 0; i < 5; i++){
        cout<<a[i]<<endl;
    }

    cout<<"\n"<<endl;

    for(int i = 0; i < 5; i++){
        cout<<p[i]<<endl;
    }

}