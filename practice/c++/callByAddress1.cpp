#include<iostream>
using namespace std;
int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}



int main(){
    int num1 = 10, num2 = 34;
    swap(&num1, &num2);
    cout<<num1<<"num1"<<endl;
    cout<<num2<<endl;


    return 0;
}