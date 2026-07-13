class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
         vector<int> ans;
         string s = "123456789";
         int lowlen  = to_string(low).size();
         int higlen = to_string(high).size();

         for (int i = lowlen ; i <= higlen; i++){
            for (int j =0; j+i<=9; j++){
                string temp  = s.substr(j,i);
                int num  = stoi(temp);
                if (num >= low && num <= high) {
                    ans.push_back(num);
                }
            }

         }
         return ans;
    }
};