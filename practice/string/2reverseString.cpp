#include<bits/stdc++.h>
using namespace std;


int main()
{
    char a[] = "adarsh";
    int i,j;
    for (i = 0; a[i] != '\0'; i++)
    {

    }
    i = i - 1;

    for (j = 0; j < i; j++, i--)
    {
        char temp;
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
    cout << a << endl;
}