#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
        vector<int> arr1 = {3,-4,5,4,-1,7,-8}; 
        int n = arr1.size(); 

        // broute force approach

        // for(int st=0; st<n; st++){
        //     for(int end=st;  end<n; end++){
        //         for(int i=st; i<end; i++){
        //             cout<<arr1[i]; 
        //         }
        //         cout<<' '; 
        //     }
        //     cout<<endl; 
        // }


        // broute force some optimized approach but not best 
        // int maxSum = INT_MIN; 
        // for(int st=0; st<n; st++){
        //     int currSum = 0; 
        //     for(int end=st;  end<n; end++){
        //         currSum += arr1[end]; 
        //         maxSum = max(currSum, maxSum); 
        //     }
        // }
        // cout<<maxSum<<endl; 

        int maxSum = INT_MIN; 
        int currSum = 0; 
        for(int i=0; i<n; i++){
            currSum += arr1[i]; 
            maxSum = max(currSum, maxSum); 
            if(currSum<0){
                currSum=0; 
            }
        }
        cout<<maxSum<<endl;
    return 0;
} 