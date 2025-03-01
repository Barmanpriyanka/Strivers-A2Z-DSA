class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
             unordered_map<int, int> prefixMap; 
            int sum = 0, count = 0;
    
            prefixMap[0] = 1; 
    
            for (int num : nums) {
                sum += num; 
    
                
                if (prefixMap.find(sum - k) != prefixMap.end()) {
                    count += prefixMap[sum - k];
                }
    
                
                prefixMap[sum]++;
            }
    
            return count;
        }
    };