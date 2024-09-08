class Solution {
public:
    int ans = 0;

    void merge(vector<int>& a, int l, int m, int r) {
        int leftSize = m - l + 1;
        int rightSize = r - m;

        vector<int> left(leftSize), right(rightSize);

        // Copying elements into the left and right arrays
        for (int i = 0; i < leftSize; i++) {
            left[i] = a[l + i];
        }
        for (int i = 0; i < rightSize; i++) {
            right[i] = a[m + 1 + i];
        }

        int i = 0, j = 0;
        int cnt = 0;

        // Counting reverse pairs
        for (i = 0; i < leftSize; i++) {
            while (j < rightSize && left[i] > (long) 2 * right[j]) {
                j++;
            }
            cnt += j;
        }
        ans += cnt;

        // Reset i and j for merging the sorted arrays
        i = 0;
        j = 0;
        int k = l;

        // Merging the two halves back into the original array
        while (i < leftSize && j < rightSize) {
            if (left[i] <= right[j]) {
                a[k++] = left[i++];
            } else {
                a[k++] = right[j++];
            }
        }

        // Copying the remaining elements, if any
        while (i < leftSize) {
            a[k++] = left[i++];
        }
        while (j < rightSize) {
            a[k++] = right[j++];
        }
    }

    void mergeSort(vector<int>& a, int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;
            mergeSort(a, l, m);
            mergeSort(a, m + 1, r);
            merge(a, l, m, r);
        }
    }

    int reversePairs(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return ans;
    }
};
