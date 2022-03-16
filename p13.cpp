class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        int l=s.length()-1;
        for(int i=0;i<l;i++){
            string tmp="";
            tmp+=s[i];
            tmp+=s[i+1];
            if(tmp=="IV") {
                n += 4;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="IX") {
                n += 9;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="XL") {
                n += 40;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="XC") {
                n += 90;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="CD") {
                n += 400;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="CM") {
                n += 900;
                s.erase(i, 2);
                i--;
            }
            l=s.length()-1;
        }
        l=s.length();
        for(int i=0;i<l;i++){
            switch (s[i]) {
                case 'I' :
                    n+=1;
                    break;
                case 'V' :
                    n+=5;
                    break;
                case 'X' :
                    n+=10;
                    break;
                case 'L' :
                    n+=50;
                    break;
                case 'C' :
                    n+=100;
                    break;
                case 'D' :
                    n+=500;
                    break;
                case 'M' :
                    n+=1000;
                    break;
            }
            l=s.length();
        }
        return n;
    }
};