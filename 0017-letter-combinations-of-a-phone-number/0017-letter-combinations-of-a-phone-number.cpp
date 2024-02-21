#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void combo(int index, string digits, vector<string> pad, vector<string> &output, string &temp) {
        if (index == digits.size()) {
            output.push_back(temp);
            return; // Added to stop recursion when index reaches end of digits
        }
        
        string value = pad[digits[index] - '0'];
        for (int i = 0; i < value.size(); i++) {
            temp.push_back(value[i]);
            combo(index + 1, digits, pad, output, temp);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> output;
        
        if (digits.empty()) {
            return {};
        }
        
        string temp;
        combo(0, digits, pad, output, temp);
        return output;
    }
};
