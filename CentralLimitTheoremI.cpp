//https://www.hackerrank.com/challenges/s10-the-central-limit-theorem-1/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float cdf(float x, float mu, float sigma)
{
    float z = (x-mu)/sigma;
    return 0.5*(1+erf(z/sqrt(2)));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float x, n, mu, sigma;
    cin >> x;
    cin >> n;
    cin >> mu;
    cin >> sigma;

    float muSum = n*mu;
    float sigmaSum = sqrt(n)*sigma;

    cout.precision(4);
    cout << fixed << cdf(x, muSum, sigmaSum) << endl;
    return 0;
}
