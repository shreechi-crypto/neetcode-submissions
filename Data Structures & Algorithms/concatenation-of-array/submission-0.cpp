class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> ans ;

        int n = nums.size();
        vector <int> ans(2 * n);
        for (int i =0 ; i<nums.size(); i++){
            ans[i] = nums[i];
            int j = i + n;
            ans[j]=nums[i];


        }
        return ans ;
    
    
};