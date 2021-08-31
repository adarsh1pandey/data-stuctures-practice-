#include<stdio.h>

struct rectangle{
    int length;
    int breadth;
    char a;

};
int main(){
    struct rectangle r={10,5};
   
    printf("the value of area of rectangle id %d \n",r.length*r.breadth);
}