//https://www.hackerrank.com/challenges/s10-basic-statistics/tutorial

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
    double arr[N];
    double sum = 0;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
        sum+= arr[i];
    }

    //mean
    double mean = sum/N;

    //median
    double temp;
    for(int j=0; j<N; j++)
    {
        for(int k=0; k<N-1; k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    double median = 0;
    if(N%2==0)
    {
        median = (arr[(N-1)/2]+arr[N/2])/2.0;
    }
    else {
        median = arr[N/2];
    }

    //mode
    double number = arr[0];
    double mode = number;
    int count = 1;
    int countMode = 1;

    for(int l=1; l<N; l++)
    {
        if(arr[l] == number)
        {
            //count occurences of current number
            ++count;
        }
        else {
            if(count > countMode)
            {
                countMode = count;
                mode = number;
            }
            count = 1; //reset counter for number
            number = arr[l];
        }
    }


    cout.precision(1);
    cout << fixed << mean << endl;
    cout << fixed << median << endl;
    cout << fixed << mode << endl;


    return 0;
}
