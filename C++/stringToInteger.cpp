//Leetcode 8 - Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).
//Solution 1
//Time Complexity: O(N) where N is the length of the string
//Space Complexity: O(1)
class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int result = 0;
        int index = 0;
        int length = s.length();
        
        while(index < length and s[index] == ' ') {
            index++;
        }
        
        if(index < length and s[index] == '-') {
            sign = -1;
            index++;
        }
        else if(index < length and s[index] == '+') {
            index++;
            
        }
        
        while(index < length and isdigit(s[index])) {
            int digit = s[index]-'0';
            
            if(result > INT_MAX/10 || (result == INT_MAX / 10 && digit > INT_MAX%10)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = result * 10 + digit;
            index++;
            
        }
        
        return sign*result;  
        
    }
};
