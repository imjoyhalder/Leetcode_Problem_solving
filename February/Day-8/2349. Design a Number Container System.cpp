#include<bits/stdc++.h>
using namespace std;

class NumberContainers {
    private:
        unordered_map<int, int> indexToNumber;  
        map<int, set<int>> numberToIndices;     
    
    public:
        NumberContainers() {} // Constructor
    
        void change(int index, int number) {
            if (indexToNumber.count(index)) {
                int oldNumber = indexToNumber[index];
                numberToIndices[oldNumber].erase(index);
                if (numberToIndices[oldNumber].empty()) {
                    numberToIndices.erase(oldNumber);
                }
            }
    
            indexToNumber[index] = number;
            numberToIndices[number].insert(index);
        }
    
        int find(int number) {
            if (numberToIndices.count(number) && !numberToIndices[number].empty()) {
                return *numberToIndices[number].begin();
            }
            return -1;
        }
    }; 
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    return 0;
} 