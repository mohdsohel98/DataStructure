class Solution {
public:
    int findGCD(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int num1 = nums[0];
    int num2 = nums[size-1];
       
        return gcd(num1, num2);

        
    }
};