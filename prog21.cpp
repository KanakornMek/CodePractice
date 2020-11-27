#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;
    if(a =='a' || a =='e' || a =='i' || a =='o' || a =='u' || a =='A' || a =='E'||a=='I'||a=='O'||a=='U')
    {
        cout << a << "is VOWEL";
    }
    else 
    {
        if('A' <= a <='Z'|| 'a'<= a <='z')
        {
            cout << a << "is CONSONANT";
        }  
    }
}

