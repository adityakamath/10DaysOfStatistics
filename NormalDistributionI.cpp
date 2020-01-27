//https://www.hackerrank.com/challenges/s10-normal-distribution-1/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float cumulativeProb(float mean, float sd, float x)
{
    return  0.5*(1+erf((x-mean)/(sd*sqrt(2))));
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float meanX, sdX, val1, lower2, upper2;
    cin >> meanX >> sdX;
    cin >> val1;
    cin >> lower2 >> upper2;

    cout.precision(3);
    cout << fixed << cumulativeProb(meanX, sdX, val1) << endl;
    cout << fixed << cumulativeProb(meanX, sdX, upper2) - cumulativeProb(meanX, sdX, lower2) << endl;   
    return 0;
}

