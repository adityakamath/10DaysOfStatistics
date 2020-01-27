//https://www.hackerrank.com/challenges/s10-geometric-distribution-1/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float geometric(int n, float p)
{
    return pow((1-p),(n-1))*p;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float num, den;
    cin >> num >> den;
    float prob = num/den;

    int numInsp;
    cin >> numInsp;

    
    float cumulative = 0;
    for(int i=1; i<=5; i++)
    {
        cumulative += geometric(i, prob);
    }

    cout.precision(3);
    cout << fixed << cumulative << endl; 
    return 0;
}
