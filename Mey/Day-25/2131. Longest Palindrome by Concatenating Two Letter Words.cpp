#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans=0;
        unordered_map<string,int>mp;

        for(string &word:words){
            string reversedWord=word;
            swap(reversedWord[0],reversedWord[1]);

            if(mp[reversedWord]>0){
                ans+=4;
                mp[reversedWord]--;
            } else{
                mp[word]++;
            }
        }

        for(auto &it:mp){
            string word=it.first;
            int count=it.second;

            if(word[0]==word[1] && count>0){
                ans+=2;
                break;
            }
        }
        return ans;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 