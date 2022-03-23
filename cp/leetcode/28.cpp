//https://leetcode.com/problems/implement-strstr/

// O(?) - using strstr() in library
class Solution {
public:
    int strStr(string haystack, string needle) {
        const char *a = haystack.c_str();
        const char *b = needle.c_str();
        
        const char *it = strstr(a, b);
        if (it != NULL) {
            return it - a;
        }
        return -1;
    }
};