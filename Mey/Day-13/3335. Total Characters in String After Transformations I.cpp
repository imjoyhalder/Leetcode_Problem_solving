#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int MOD=1e9 + 7;
    int lengthAfterTransformations(string s, int t) {
        vector<long long> count(26,0);
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
        }

        for(int i=1;i<=t;i++){
            long long st=count[0];
            for(int j=1;j<26;j++){
                long long temp=count[j];
                count[j]=st;
                st=temp;
                
            }
            count[0]=st;
            count[1]= ((count[1]) % MOD + st) % MOD;
            
        }
        int ans=0;
        for(int i=0;i<26;i++){
            ans=((ans + count[i]) % MOD)%MOD;
        }
        return ans ;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    

      
    return 0;
} 