#include <bits/stdc++.h>
using namespace std;

bool ifSorted(vector<int> &arr)
{
    int n = arr.size();

    int breakPoints = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[(i + 1) % n] && ++breakPoints > 1)
            return false;
    }

    return true;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};

    bool ans = ifSorted(arr);

    cout << (ans ? "Rotated & Sorted" : "Unsorted");

    return 0;
}