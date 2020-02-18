#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    double a,m,n,s;
    int b,c;
    cin>>a>>b>>c;
    m=(a*b)/100;
    n=(a*c)/100;
    s=a+m+n;
    cout<<round(s);
    return 0;
}
