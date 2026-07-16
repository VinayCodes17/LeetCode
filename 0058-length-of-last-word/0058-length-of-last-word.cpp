class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0  , lengg = 0 ; 
        for(int i = 0  ; i < s.size() ; i++){
            if(s[i]==' ') {
                len = 0; 
                continue ;
            }
            len++;
            lengg = len ;
        }
        if(len!=0) return len;
        else return lengg ;
        
    }
};