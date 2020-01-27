//https://www.hackerrank.com/challenges/s10-standard-deviation/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    return (n<=1)?1:n*factorial(n-1);
}

float binomial(int x, int n, float p)
{
    return (factorial(n)/(factorial(x)*factorial(n-x)))*pow(p,x)*pow((1-p),(n-x));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float bRatio = 1.09;
    float gRatio = 1;
    cin >> bRatio >> gRatio;

    float p = bRatio/(bRatio+gRatio);
    float cdf = 0;
    for(int i=3; i<=6; i++)
    {
        cdf += binomial(i,6,p);
    }
    cout.precision(3);
    cout << fixed << cdf << endl;
    return 0;
}
