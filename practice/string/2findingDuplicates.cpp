#include<bits/stdc++.h>
using namespace std;


int main()
{
    char A[] = "finding";
    int H[26] = {0}, i;

    for (i = 0; A[i] != '\0'; i++)
    {
       H[A[i]-97]++;
    }
    for (i = 0; i < 26; i++)
    {
        cout << H[i] << endl;
        if (H[i] > 0)
        {
            cout << 
        }
    }
    
}