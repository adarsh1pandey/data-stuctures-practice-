#include<bits/stdc++.h>
using namespace std;



int main()
{
    char A[] = "how are you ";
    int i, vcount;
    for( i = 0; A[i] != '\0'; i++)
    {
        if( A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            vcount++; 
        }
        
    }
    cout << "number of vowels are " << vcount << endl;
}