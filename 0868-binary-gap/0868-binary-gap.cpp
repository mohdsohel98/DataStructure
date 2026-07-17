class Solution {
public:
    int binaryGap(int n) {
        
         string binary = bitset<32>(n).to_string();
         int currIndex = 0;
         int prevIndex = -1;
         int maxDistance = 0;
     
          while(currIndex< binary.length()){

          if (binary[currIndex] == '1'){
            if (prevIndex != -1){
            maxDistance  = max(maxDistance, currIndex-prevIndex);
            }
            prevIndex = currIndex;
          }
          currIndex++;

          }
            return maxDistance;
         }
    
};