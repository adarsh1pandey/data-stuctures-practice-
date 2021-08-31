#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 10, b = 43;
    swap(&a, &b);
   cout<<a<<endl<<b<<endl;     //in this formal parameters access the value of actual parameter indirectly
}