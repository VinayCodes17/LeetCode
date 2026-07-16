class Solution {
public:
    int strStr(string haystack, string needle) {
        int occur = -1; 
        if(haystack.size()>=needle.size()){
        for(int i = 0 ; i <=(haystack.size()-needle.size()); i++){
            if(haystack.substr(i,needle.size())==needle){
                occur = i ;
                break ;
            }
        }
        }
        return occur ;
        
    }
};