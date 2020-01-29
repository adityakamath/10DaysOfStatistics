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

float calcMarginError(float sigma, float z, float n)
{
    return (sigma/sqrt(n))*z;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float n, mu, sigma, pc, z;
    cin >> n;
    cin >> mu;
    cin >> sigma;
    cin >> pc;
    cin >> z;
    
    float muSample = mu;
    float sigmaSample = sigma/sqrt(n);

    cout.precision(2);
    cout << fixed << mu - calcMarginError(sigma, z, n) << endl;
    cout << fixed << mu + calcMarginError(sigma, z, n) << endl;
    return 0;
}
