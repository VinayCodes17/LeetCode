class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int> mp;

        int l = 0, r = 0;
        int ans = 0;

        while (r < s.size()) {

            if (mp.find(s[r]) != mp.end()) {

                ans = max(ans, r - l);

                int last = mp[s[r]];

                for (int i = l; i <= last; i++)
                    mp.erase(s[i]);

                l = last + 1;
            }

            mp[s[r]] = r;
            r++;
        }

        ans = max(ans, r - l);

        return ans;
    }
};