//https://www.hackerrank.com/challenges/s10-poisson-distribution-1/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int k)
{
    if(k<1)
    {
        return 1;
    }
    else
    {
        return k*factorial(k-1);
    }
}


float poisson(int value, float lambda)
{
    return (pow(lambda, value) * exp(-1*lambda))/factorial(value);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float lambdaA, lambdaB;
    cin >> lambdaA >> lambdaB;

    cout.precision(3);
    cout << fixed << 160 + 40*(lambdaA + pow(lambdaA, 2)) << endl;
    cout << fixed << 128 + 40*(lambdaB + pow(lambdaB, 2)) << endl;
    return 0;
}


