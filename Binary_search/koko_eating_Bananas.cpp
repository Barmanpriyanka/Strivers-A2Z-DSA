class Solution {
public:
    long long calculateTotalHours(const vector<int>& piles, int hourly) {
        long long totalH = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalH += (piles[i] + hourly - 1) / hourly;
        }
        return totalH;
    }

    int findMax(const vector<int>& piles) {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalHours = calculateTotalHours(piles, mid);

            if (totalHours <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
