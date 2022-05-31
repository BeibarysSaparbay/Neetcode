class Solution {
public:
    bool isPalindrome(string s) {
     string x = "";
        for(int i=0;i<s.size();i++){
            if((s[i] >= 97 && s[i] <=122) || (s[i] >= 48 && s[i] <=57)){
                x += s[i];
            }
            else if(s[i] >= 65 && s[i] <=90){
                s[i] =s[i] - 'A' + 'a';
                x += s[i];
            }
            else{
                continue;
            }
        }
        for(int i=0;i<x.size()/2;i++){
            if(x[i] != x[x.size() - i -1])
                return false;
        }
        return true;
    }
};
