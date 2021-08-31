#include<stdio.h>

void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}
int main(){
    int x,y;
    x = 10,y = 39;
    swap(x, y);
    printf("%d\n%d\n",x,y); //it will not change the actual parameter this will only change formal parameter
}