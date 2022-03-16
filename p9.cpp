class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> digits;
        if(x<0){
            return false;
        }
        while(x>0){
            digits.push_back(x%10);
            x=x/10;
        }
        for(int i=0;i<digits.size()/2;i++){
            if(digits[i]!=digits[digits.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};
