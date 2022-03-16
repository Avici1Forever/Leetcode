class Solution {
public:
    int romanToInt(string s) {
        int integer=0;
        int l=s.length()-1;
        for(int i=0;i<l;i++){
            string tmp="";
            tmp+=s[i];
            tmp+=s[i+1];
            if(tmp=="IV") {
                integer += 4;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="IX") {
                integer += 9;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="XL") {
                integer += 40;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="XC") {
                integer += 90;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="CD") {
                integer += 400;
                s.erase(i, 2);
                i--;
            }
            else if(tmp=="CM") {
                integer += 900;
                s.erase(i, 2);
                i--;
            }
            l=s.length()-1;
        }
        l=s.length();
        for(int i=0;i<l;i++){
            switch (s[i]) {
                case 'I' :
                    integer+=1;
                    break;
                case 'V' :
                    integer+=5;
                    break;
                case 'X' :
                    integer+=10;
                    break;
                case 'L' :
                    integer+=50;
                    break;
                case 'C' :
                    integer+=100;
                    break;
                case 'D' :
                    integer+=500;
                    break;
                case 'M' :
                    integer+=1000;
                    break;
            }
            l=s.length();
        }
        return n;
    }
};
