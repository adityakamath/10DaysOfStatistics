//https://www.hackerrank.com/challenges/s10-spearman-rank-correlation-coefficient/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //Get size n of datasets X and Y
    int n;
    cin >> n;

    //Get dataset X
    float X[n];
    float sumX = 0;
    for(int i=0; i<n; i++)
    {
        cin >> X[i];
        sumX += X[i];
    }

    //Get dataset Y
    float Y[n];
    float sumY = 0;
    for(int i=0; i<n; i++)
    {
        cin >> Y[i];
        sumY += Y[i];
    }

    //Compute ranks of X and Y and store in rX and rY
    //Compute difference, square and add in loop
    int rX[n];
    int rY[n];
    float sumDiffSquared = 0;
    for(int i=0; i<n; i++)
    {
        int rankX = 0;
        int rankY = 0;
        for(int j=0; j<n; j++)
        {
            if(X[j]<X[i])
            {
                rankX++;
            }
            if(Y[j]<Y[i])
            {
                rankY++;
            }
        }
        rX[i] = rankX;
        rY[i] = rankY;
        int diffSquared = pow(rankX-rankY, 2);
        sumDiffSquared += diffSquared;
    }

    //Print spearman's rank correlation coefficient
    cout.precision(3);
    cout << fixed << (1 - (sumDiffSquared*6)/(n*(pow(n,2)-1))) << endl;

    return 0;
}
