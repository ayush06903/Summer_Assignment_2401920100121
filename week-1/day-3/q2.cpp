class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>result;
        for(int i=0; i<nums.size(); i++){
            //result[i]=nums[i]*nums[i];--->ye nhi chalega kyuki array initially empty hai to result[i] out of bounds hoga
            result.push_back(nums[i]*nums[i]);
        }
        sort(result.begin(),result.end());
        return result;

    }
};