class Solution {
public:
 
    int lengthOfLongestSubstring(string s) {
    // sliding window approach 
    int ans = 0 , l = 0 , r = 0  ;
    unordered_map <char , int > map ; 

    while( r<s.size()){

        if(map.find(s[r])!=map.end()){
            ans = max(ans , r-l);
            int last = map[s[r]];
            for( int i = l   ; i<= last ; i++){
                map.erase(s[i]);
            }
            l = last+1;
        }

        map[s[r]] = r;
        r++;
    }
    ans=max(ans ,r-l);
    return ans ; 
    }
};
