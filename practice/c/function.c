#include<stdio.h>

int add(int a, int b){
    int c;
    c = a + b;
    return c;

}

int main(){
    int x = 10, y = 34, z;
    z = add(x,y);
    printf("the sum is %d\n",z);
    return 0;
}