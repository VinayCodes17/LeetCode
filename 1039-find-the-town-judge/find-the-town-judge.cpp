class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       if(n==1) return 1 ;
       vector<int> trustscore(n+1,0) ; 
       for(auto it : trust){
        int a = it[0];
        int b = it[1];

        trustscore[a]--;
        trustscore[b]++;
       }

       for(int i = 0 ; i <=n ; i++){
        if(trustscore[i]==n-1) return i ; 
       }

       return -1 ; 
       
    }
};