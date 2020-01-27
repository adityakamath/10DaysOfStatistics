//https://www.hackerrank.com/challenges/s10-binomial-distribution-1/tutorial

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
    float pcRejection;
    float batchSize;
    cin >> pcRejection >> batchSize;

    float p = pcRejection/100;
    float cdf1 = 0;
    float cdf2 = 0;

    //no more than 2 rejects
    for(int i=0; i<=2; i++)
    {
        cdf1 += binomial(i,batchSize,p);
    }

    //at least 2 rejects
    for(int j=2; j<=batchSize; j++)
    {
        cdf2 += binomial(j,batchSize,p);
    }

    cout.precision(3);
    cout << fixed << cdf1 << endl;
    cout << fixed << cdf2 << endl;
    return 0;
}
