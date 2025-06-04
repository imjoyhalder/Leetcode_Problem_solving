#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string answerString(string word, int numFriends) 
    {
       
        if (numFriends == 1) 
	{
		return word;
	}

        int n = word.size();
    
        int maxLen = n - numFriends + 1;
        string res = "";

       
        for (int i = 0; i < n; ++i) 
        {
            int len = min(n - i, maxLen);
            string substr = word.substr(i, len);

            if (substr > res) 
            {
                res = substr;
            }
        }

        return res;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 