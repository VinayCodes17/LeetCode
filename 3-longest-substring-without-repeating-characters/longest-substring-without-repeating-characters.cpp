class Solution {
public:
 
    int lengthOfLongestSubstring(string s) {
        int ans = 0  , count = 0 ;
        unordered_map <char , int > map ;
        for(int i = 0 ; i < s.size() ; i++){
            if(map.find(s[i])!=map.end()){
               ans = max(ans,count);
                count = 0 ;
                i = map[s[i]];
                map.clear(); 
                continue ;
            }
            map[s[i]] = i;
            count++;
        }
        ans=max(ans,count);
        return ans ;
        
    }
};