class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefixGcd;
        prefixGcd.reserve(n);

        int mx = 0;

        // Construct prefixGcd
        for (int num : nums) {
            mx = max(mx, num);
            prefixGcd.push_back(gcd(num, mx));
        }

        // Sort the array
        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans = 0;

        // Pair smallest with largest
        int left = 0;
        int right = n - 1;

        while (left < right) {
            ans += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }

        return ans;
    }
};