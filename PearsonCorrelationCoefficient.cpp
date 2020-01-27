//https://www.hackerrank.com/challenges/s10-pearson-correlation-coefficient/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    float X[n];
    float sumX = 0;
    for(int i=0; i<n; i++)
    {
        cin >> X[i];
        sumX += X[i];
    }

    float Y[n];
    float sumY = 0;
    for(int i=0; i<n; i++)
    {
        cin >> Y[i];
        sumY += Y[i];
    }

    float meanX = sumX/n;
    float meanY = sumY/n;

    double meanSumX=0;
    double meanSumY=0;
    for(int i=0; i<n; i++)
    {
        meanSumX += pow((X[i] - meanX), 2.0);
        meanSumY += pow((Y[i] - meanY), 2.0);
    }

    double sdX = sqrt(meanSumX/n);
    double sdY = sqrt(meanSumY/n);

    double pcc = 0;
    for(int i=0; i<n; i++)
    {
        pcc += ((X[i]-meanX)*(Y[i]-meanY))/(n*sdX*sdY);
    }

    cout.precision(3);
    cout << fixed << pcc << endl;


    return 0;
}
