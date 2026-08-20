#include <bits/stdc++.h>
using namespace std;

// Question :
// Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

int linrSrch(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 5, 1, 9, 100, 10};
    int target = 3;

    int trgti;
    trgti = linrSrch(arr, target);

    cout << "Index is " << trgti;

    return 0;
}