class Solution {
    public:
        bool canShipInDays(vector<int>& weights, int days, int capacity) {
        int dayCount = 1, currentLoad = 0;
    
        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                dayCount++;  // Move to the next day
                currentLoad = 0;
            }
            currentLoad += weight;
        }
    
        return dayCount <= days;  // Return true if within given days
    }
        int shipWithinDays(vector<int>& weights, int days) {
            int n=weights.size();
            int s=*max_element(weights.begin(), weights.end());
            int e=accumulate(weights.begin(), weights.end(), 0);
            while(s<=e)
            {
                int mid=s+(e-s)/2;
                if(canShipInDays(weights,days,mid)){
                   e=mid-1;
                }
                
                else{
                   s=mid+1;
                }
            }
            return s;
        }
    };