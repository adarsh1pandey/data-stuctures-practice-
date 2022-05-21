#include<bits/stdc++.h>
using namespace std;


int main()
{
    char A[] = "Adarsh";
    char B[] = "Adarsgh";
    int i, j;
    
    for(i = 0, j = 0; A[i] != '\0' && B[i] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
        {
            cout << "not equal" << endl;
            break;
        }
        else
        {
            continue;
        }
    }
   
}