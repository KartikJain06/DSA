#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> ans;
    int n = arr1.size();
    int m = arr2.size();
    int l = 0;
    int r = 0;

    while (l < n && r < m)
    {
        if (arr1[l] < arr2[r])
        {
            if (ans.empty() || ans.back() != arr1[l])
            {
                ans.emplace_back(arr1[l]);
            }
            l++;
        }
        else if (arr2[r] < arr1[l])
        {
            if (ans.empty() || ans.back() != arr2[r])
            {
                ans.emplace_back(arr2[r]);
            }
            r++;
        }
        else
        {
            if (ans.empty() || ans.back() != arr1[l])
            {
                ans.emplace_back(arr1[l]);
            }
            l++;
            r++;
        }
    }

    while (l < n)
    {
        if (ans.empty() || ans.back() != arr1[l])
        {
            ans.emplace_back(arr1[l]);
        }
        l++;
    }

    while (r < m)
    {
        if (ans.empty() || ans.back() != arr2[r])
        {
            ans.emplace_back(arr2[r]);
        }
        r++;
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {4, 4, 5, 5};

    vector<int> arr2 = {1, 2, 3, 3, 7, 8, 9, 11};

    vector<int> ans;

    ans = unionArray(arr1, arr2);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}