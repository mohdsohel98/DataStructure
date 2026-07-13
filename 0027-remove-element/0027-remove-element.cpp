class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         std::vector<int> arr;
         for (int i=0; i<nums.size(); i++){
            if(nums[i] == val){
               nums.erase(nums.begin() + i);
              i--;
            }

            else arr.push_back(nums[i]);
         }
         
          return nums.size();
    }
};