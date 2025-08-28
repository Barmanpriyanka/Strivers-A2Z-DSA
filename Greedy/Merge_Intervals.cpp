class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);

        for (int i=1;i<intervals.size();i++) {
             vector<int>&last =ans.back();
             vector<int>current=intervals[i];
            if(last[1]>=current[0]){
                   last[1]=max(last[1],current[1]);
            }
            else{
            
           ans.push_back(current);
            }

        }
        return ans;

    }
};