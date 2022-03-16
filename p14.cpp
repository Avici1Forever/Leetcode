class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int flag=1;
        int index=0;
        string prefix="";
        int size=strs.size();
        if(size==0) return prefix;
        if(size==1) return strs[0];
        while(flag){
            for(int i=0;i<size-1;i++){
                if(index>=strs[i].length() or index>=strs[i+1].length()
                   or strs[i][index]!=strs[i+1][index]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                prefix=prefix+strs[0][index];
                index++;
            }
        }
        return prefix;
    }
};