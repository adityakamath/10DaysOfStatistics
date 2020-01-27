// https://www.hackerrank.com/challenges/s10-quartiles/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int getMedian(int x, int y, int *arr)
{
    int median = 0;
    int N = y-x+1;
    int tempArr[N];
    for(int i=0; i<N; i++)
    {
        tempArr[i] = arr[i+x];
    }
    if(N%2==0)
    {
        median = (tempArr[(N-1)/2]+tempArr[N/2])/2.0;
    }
    else {
        median = tempArr[N/2];
    }
    return median;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    //sort array
    int temp;
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

    int medianl, medianx, medianu;
    medianx = getMedian(0, N-1, arr);
    if(N%2 == 0)
    {
        medianl = getMedian(0, N/2-1, arr);
        medianu = getMedian(N/2, N-1, arr);
    }
    else
    {
        medianl = getMedian(0, (N-3)/2, arr);
        medianu = getMedian((N+1)/2, N-1, arr);
    }

    cout << medianl << endl;
    cout << medianx << endl;
    cout << medianu << endl;


    return 0;
}
