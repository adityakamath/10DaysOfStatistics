//https://www.hackerrank.com/challenges/s10-quartiles/tutorial

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


double getMedian(int x, int y, int *arr)
{
    double median = 0;
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
    int n;
    cin >> n;
    int x[n], f[n];
    for(int i=0; i<n; i++)
    {
        cin >> x[i];
    }
    
    int N = 0;
    for(int i=0; i<n; i++)
    {
        cin >> f[i];
        N += f[i];
    }
    
    int arr[N];
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<f[i]; j++)
        {
            arr[count] = x[i];
            count++;
        }
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

    double medianl, medianx, medianu;
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

    cout.precision(1);
    cout << fixed << medianu - medianl << endl;

    return 0;
}
