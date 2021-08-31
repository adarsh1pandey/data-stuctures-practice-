#include<iostream>
using namespace std ;

void fun(int a){
    if (a > 0){
        fun(a-1);
        cout<<a<<endl;
    }
}
int main(){
    int a = 10;
    fun(a);

}