// Solution.h
#ifndef SOLUTION_H
#define SOLUTION_H

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
    vector<vector<int>> memo(s.size(), vector<int>(s.size(), -1));
    return isValidString(0, 0, memo, s);
}

private:
    bool isValidString(int index, int count, vector<vector<int>>& memo, string str) {
    if(index == str.size()) return count == 0;

    if(memo[index][count] != -1) return memo[index][count];

    bool isValid = false;

    if(str[index] == '*') {
        isValid |= isValidString(index + 1, count + 1, memo, str);

        if(count > 0) {
            isValid |= isValidString(index + 1, count - 1, memo, str);
        }

        isValid |= isValidString(index + 1, count, memo, str);
    } else {
        if(str[index] == '(') {
            isValid = isValidString(index + 1, count + 1, memo, str);
        } else if(count > 0) {
            isValid = isValidString(index + 1, count - 1, memo, str);
        }
    }

    return memo[index][count] = isValid;
}
};

#endif // SOLUTION_H
