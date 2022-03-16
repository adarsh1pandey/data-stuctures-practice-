#include<bits/stdc++.h>
using namespace std;


int main()
{
    char A[] = " hey! how are you ";
    
    int i, wordCount = 0;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i-1] != ' ')
        {
            wordCount++;
        }
    }
    if (A[0] == ' ')
    {
        wordCount -= 1;
    }
    cout << wordCount << endl;
}