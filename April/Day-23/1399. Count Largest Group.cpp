#include<bits/stdc++.h>
using namespace std;

int digitSum(int digit){
    int sum = 0; 
    while(digit !=0){
        sum += digit % 10; 
        digit /= 10; 
    }
    return sum; 
}

class Solution {
    public:
        int countLargestGroup(int n) {
            unordered_map<int,int> mp; 

            int cnt = 0; 
            int maxsize = 0; 

            for(int i=1; i<=n; i++){
                int sum = digitSum(i); 

                mp[sum]++; 
                if(mp[sum]==maxsize){
                    cnt++; 
                }
                else if(mp[sum] >maxsize){
                    maxsize = sum ; 
                    cnt = 1;  
                }
            }
        }
    }; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    cout<<digitSum(10400)<<endl;  
    return 0;
} 