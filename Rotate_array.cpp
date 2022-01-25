/*
Given an array with N elements, the task is to rotate the array to the left by K steps, where K is non-negative.
Input Format:
The first line contains an integer N representing the size of the array.

The second line contains N space-separated integers representing the elements of the array.

The last line contains an integer K representing the number of times the array has to be rotated in the left direction. 
Output Format:
The only line of the output prints N space-separated integers representing the Rotated array elements.
Constraints:
1 <= N <= 10^3
1 <= arr[i] <= 10^9
1 <= K < N
Sample Input:
8
7 5 2 11 2 43 1 1
2
Sample Output:
2 11 2 43 1 1 7 5
Explanation Of Sample Input:
Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n;
        int a[n+k];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        cin>>k;
        int i;
        for(i=0;i<k;i++){
            a[i+n]=a[i];
        }
        
        for (int i = k; i < n+k; i++)
        cout<<a[i];
    }
    return 0;
}