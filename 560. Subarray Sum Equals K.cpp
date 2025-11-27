#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& arr1, int k) {
    int n = arr1.size(); 
    int total = 0; 
    for(int st=0; st<n; st++){
        int currSum = 0; 
        for(int end=st;  end<n; end++){
            currSum += arr1[end];  
            currSum ==k? total++: total+=0; 
        }
    }
    return total;  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    return 0;
} 