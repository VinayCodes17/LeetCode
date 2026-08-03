class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows >= s.size()) return s ; 
        unordered_map<int , string > map ; 
        int k = 1 ; 
        bool direc = true ;
        for(int i = 0 ; i < s.size() ; i++){
            if(direc){
                map[k]+=s[i];
                k++;
            }
            if(k>numRows){
                k-=2;
                direc = false ;
                continue ;
            }
            if(!direc){
                map[k]+=s[i];
                k--;
            }
            if(k==0){
                k+=2;
                direc = true ;
                continue ;
            }
        }
        string ans ; 
        for(int i = 1 ; i <= numRows ; i++){
            ans += map[i];
        }
        return ans ; 
        
    }
};