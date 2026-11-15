class Solution {
public:
    int maximumGap(vector<int>& nums) {

        int maxx = 0;
        for (int i = 0; i < nums.size(); i++) {
            maxx = max(maxx, nums[i]);
        }
        int dig = 0;
        while (maxx != 0) {
            maxx /= 10;
            dig++;
        }

        vector<int> output(nums.size() , 0 );
        long long  exp = 1;
        while (dig--) {
        vector<int> count(10 , 0 );
            for (int i = 0; i < nums.size(); i++) {
                count[(nums[i] / exp) % 10]++;
            }

            for (int i = 1; i < 10; i++) {
                count[i] += count[i - 1];
            }

            for (int i = nums.size() - 1; i >= 0; i--) {
                int idx = count[(nums[i] / exp) % 10] - 1;
                output[idx] = nums[i];
                count[(nums[i] / exp) % 10]--;
            }

            for (int i = 0; i < nums.size(); i++) {
                nums[i] = output[i];
            }

            exp *= 10;
        }

        int ans = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            ans = max(ans, nums[i + 1] - nums[i]);
        }

        return ans;
    }
};