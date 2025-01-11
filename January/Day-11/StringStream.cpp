#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// vector<int> parseInts(string str) {
//     vector<int> result;
//     string new_st = "";

//     for (int i = 0; i < str.size(); i++) {
//         if (str[i] == ',') {
//             int a = stoi(new_st);   // Convert collected string to integer
//             result.push_back(a);    // Add to result vector
//             new_st = "";            // Clear the string for the next number
//         } else {
//             new_st.push_back(str[i]); // Collect characters of the current number
//         }
//     }

//     // Process the last number (after the loop ends)
//     if (!new_st.empty()) {
//         int a = stoi(new_st);
//         result.push_back(a);
//     }

//     return result;
// }

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);  // Create a stringstream object
    int num;
    char ch;

    while (ss >> num) {  // Extract integers
        result.push_back(num);
        ss >> ch;        // Extract the comma (if present)
    }

    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
 
    return 0;
}