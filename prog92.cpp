#include <bits/stdc++.h>

using namespace std;

double distance(int x1,int y1, int x2, int y2)
{
    double d =  sqrt((x1-x2)*(x1-x2) + (y1 - y2)*(y1 - y2));
    return d;
}
int main()
{
    int xa,xb,xc,ya,yb,yc;
    double dAB, dAC, dBC;
    scanf("%d %d %d %d %d %d",&xa,&ya,&xb,&yb,&xc,&yc);
    dAB = distance(xa,ya,xb,yb);
    dAC = distance(xa,ya,xc,yc);
    dBC = distance(xb,yb,xc,yc);

    double alpha, beta, gamma;
    gamma = acos((dBC*dBC + dAC*dAC - dAB*dAB)/(2*dBC*dAC));
    beta = acos((dBC*dBC + dAB*dAB - dAC*dAC)/(2*dBC*dAB));
    alpha = acos((dAB*dAB + dAC*dAC - dBC*dBC)/(2*dAB*dAC));

    gamma = gamma*180/3.141592;
    beta = beta*180/3.141592;
    alpha = alpha*180/3.141592;

    double Sort[]={gamma,beta,alpha};
    sort(Sort,Sort+3);
    printf("%.5f\n%.5f\n%.5f", Sort[0], Sort[1], Sort[2]);

    return 0;
}