#include <iostream>
#include <iomanip>
#include <limits>
#include<stdio.h>
using namespace std;
int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a;
    double b=2.0;
    string str;

    cin>>a>>b;
    cin.ignore();
    getline(cin,str);
    cout<<i+a<<endl;
    printf("%0.1lf\n",d+b);
    cout<<s+str;


    return 0;
}
