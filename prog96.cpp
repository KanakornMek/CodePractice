#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);

    printf("GCD = %d",__gcd(a,b));
}


// int GCD(int a , int b)
// {
//     if(b != 0)
//     {
//         return GCD(b , a % b);
//     }
//     else
//     {
//         return a;
//     }
// }

// int main()
// {
//     int n1,n2;
//     scanf("%d %d", &n1, &n2);

//     printf("%d", GCD(n1,n2));

    // int x1, x2, gcd,i;
    // scanf("%d %d", &x1, &x2);

    // for (int i = 1; i <= x1 && i <= x2; i++)
    // {
    //     if(x1 % i == 0 && x2 % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }
    
    // printf("%d", gcd);

//     return 0;
// }