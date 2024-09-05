class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int t1=m-1;
        int t2=n-1;
        int end=(m+n)-1;
        while(t1>=0 && t2>=0)
        {
            if(nums1[t1]>nums2[t2])
            {
                nums1[end]=nums1[t1];
                t1--;
            }
            else{
                nums1[end]=nums2[t2];
                t2--;
            }
            end--;

        }
        while(t2>=0)
        {
                  nums1[end]=nums2[t2];
                  t2--;
                  end--;
        }
    }
};