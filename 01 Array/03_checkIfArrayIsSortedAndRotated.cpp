#include<bits/stdc++.h>
using namespace std;

// Question :
// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.



bool checkArray(vector<int> &a)
{
    int n = a.size();
    int rotates = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > a[(i+1)%n] && ++rotates > 1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    vector<int> a = {2, 3, 4, 5, 1};

    bool result;
    result = checkArray(a); 

    cout << ((result) ? "true" : "false");

    return 0;
}