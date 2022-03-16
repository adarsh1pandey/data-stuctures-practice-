#include<bits/stdc++.h>
using namespace std;

int validString(char A[])
{
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        if ( !(A[i] >= 65 && A[i] <= 90) && !(A[i] >= 97 && A[i] <= 122))
        {
            return 0;
        }

    }
    return 1;
}

int main()
{
    char A[] = "Adarsh";
    if (validString(A))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << " no " << endl;
    }
 
}