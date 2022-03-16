#include<bits/stdc++.h>
using namespace std;


int main()
{
    char A[] = "madam";
    int i, j; 
    for ( i = 0; A[i] != '\0'; i++)
    {

    }
    i -= 1;
    for (j = 0; j < i; i--, j++)
    {
        if (A[i] != A[j])
        {
            cout << "Not Palindrome" << endl;
            break;
        }
        else
        {
            cout << "Palindrome" << endl;
        }

    }

}