#include<stdlib.h>

#include<stdio.h>
#include<string.h>
struct Student {
    int rollNo;
    char Name;

};

int main(){
    struct Student *p;
    p = (struct Student *)malloc(sizeof(int));
    p->Name = 'A';
    p->rollNo = 1;
    printf("%c\n%d\n",p->Name, p->rollNo);
}