#include<stdio.h>
#include<stdlib.h>


int main(){
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 10;
    p[1] = 120;
    p[2] = 2314;
    for(int i = 1;i <= 5;i++){
        printf("%d\n",p[i]);
    }
    free(p);

}