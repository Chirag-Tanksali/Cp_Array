/*
You are given an array 'ARR' of integers of length N. Your task is to find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can have negative numbers as well.
For example, the input [3, 4, -1, 1] should give output 2 because it is the smallest positive number that is missing in the input array.
Input Format:
The first line of input contains a single integer T, representing the number of test cases or queries to be run. 
Then the T test cases follow.

The first line of each test case contains a positive integer N which represents the length of the array.

The second line of each test case contains N integers representing the elements of the array 'ARR'.
Output Format :
For each test case, print a single integer denoting the minimum positive integer that is missing from the given input array.

Th output of each test case will be printed in a separate line.
Note:
You do not need to print anything. It has already been taken care of. Just implement the given function.
Constraint :
1 <= T <= 10
1 <= N <= 10^5
-10^5 <= ARR[i] <= 10^5

Time Limit: 1 sec
Sample Input 1 :
1
5
3 2 -6 1 0
Sample Output 1:
4
Explanation For Input 1:
The first positive number is 1 and it is present in the array similarly 2 and 3 are also present in the array. 4 is missing from the array. Thus, the minimum positive integer that is missing is 4.
Sample Input 2 :
1
5
0 1 2 3 4
Sample Output 2:
5

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
        int n,m;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    
    sort(a,a+n);
    
    for(int i=n-1;i<n;i++)
        cout<<a[i]+1;
    
    }
    return 0;
}