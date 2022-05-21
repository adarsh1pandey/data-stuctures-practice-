#include<bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "Adarsh";
    char b[7];
    int i,j;
    for(i = 0; A[i] != '\0'; i++)
    {

    }
    i = i-1;
    for (j = 0; i >= 0; j++, i--)
    {
        b[j] = A[i];

    }
    cout << b << endl;
}