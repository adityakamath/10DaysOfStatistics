//https://www.hackerrank.com/challenges/s10-standard-deviation/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int N;
    cin >> N;

    int arr[N];
    int arrSum = 0;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
        arrSum += arr[i];
    }

    double mean = arrSum/N;
    double meanSum = 0;
    for(int i=0; i<N; i++)
    {
        meanSum += pow((arr[i]-mean), 2.0);
    }

    double stdDev = sqrt(meanSum/N);
    cout.precision(1);
    cout << fixed << stdDev;
    return 0;
}
