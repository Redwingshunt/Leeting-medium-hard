#include <iostream>
#include <string>
#include <algorithm> 
#include <climits>   
class Solution {
public:
    int reverse(int x) {
        bool isNegative = x < 0;
       std::string str = std::to_string((long long) std::abs((long long)x));

        std::reverse(str.begin(), str.end()); 

        long long reversedNum = std::stoll(str); 

        if (isNegative) reversedNum = -reversedNum;

        
        if (reversedNum > INT_MAX || reversedNum < INT_MIN) return 0;

        return static_cast<int>(reversedNum);
    }
};

