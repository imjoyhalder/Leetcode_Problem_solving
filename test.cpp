#include <bits/stdc++.h>
using namespace std;

vector<int> prefix(vector<int> &arr1)
{
    int n = arr1.size();
    vector<int> arr2(n);

    arr2[0] = arr1[0];
    for (int i = 1; i < n; i++)
    {
        arr2[i] = arr2[i - 1] + arr1[i];
    }
    return arr2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr1 = {13, 5, 6, 7};

    vector<int> arr = prefix(arr1);
    for(auto it: arr){
        cout<<it<<' '; 
    }

    return 0;
}