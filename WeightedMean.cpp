//https://www.hackerrank.com/challenges/s10-weighted-mean/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int numbers[N];
    int weights[N];
    
    for(int i=0; i<N; i++)
    {
        cin >> numbers[i];
    }

    float sumOfWeights=0;
    float sumOfNumbers=0;
    for(int j=0; j<N; j++)
    {
        cin >> weights[j];
        sumOfWeights += weights[j];
        numbers[j] *= weights[j];
        sumOfNumbers += numbers[j];
    }

    float mean = sumOfNumbers/sumOfWeights;

    cout.precision(1);
    cout << fixed << mean;


    return 0;
}
