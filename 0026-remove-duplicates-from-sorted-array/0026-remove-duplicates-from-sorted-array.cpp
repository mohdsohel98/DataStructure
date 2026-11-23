class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
              int i =0;
        int size = nums.size();
        cout<<"sizeis"<<size;
           while(i+1 <nums.size() ){
            if (nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
            
            }
            else{
                i++;
            }
         }
         return nums.size();
    }
};