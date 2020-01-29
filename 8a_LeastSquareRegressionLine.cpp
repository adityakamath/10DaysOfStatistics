//https://www.hackerrank.com/challenges/s10-least-square-regression-line/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 5;
    int maths[n], stats[n];
    int sumMaths{0}, sumStats{0}, sumMathsSquared{0}, sumMathsStats{0};
    for(int i=0; i<n; i++)
    {
        cin >> maths[i] >> stats[i];
        sumMaths += maths[i];
        sumStats += stats[i];
        sumMathsSquared += pow(maths[i], 2);
        sumMathsStats += maths[i]*stats[i];
    }

    float b = (n*sumMathsStats - sumMaths*sumStats)/(n*sumMathsSquared - pow(sumMaths, 2));
    float a = sumStats/n - b*sumMaths/n;

    cout.precision(3);
    cout << fixed << a + b*80 << endl;

    return 0;
}
