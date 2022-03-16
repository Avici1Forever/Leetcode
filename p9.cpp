class Solution {
public:
    bool isPalindrome(int x) {       
        string str1,str2;
        str1=to_string(x);
        str2=to_string(x);
        reverse(str1.begin(),str1.end());
        if(str1==str2)
            return true;
        else
            return false;
    }
};