class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0;
        int maxsum=INT_MIN;

        for(int i=0; i<nums.size(); i++){
            currsum+=nums[i];
            maxsum=max(maxsum,currsum);

            if(currsum<0){
                currsum=0;
            }
        }

        return maxsum;




       /* int maxsum=0;
        for(int i=0; i<nums.size(); i++){
            
            for(int j=i; j<nums.size(); j++){
                int currsum=0;
                for(int k=i; k<=j; k++){
                    currsum+=nums[k];
                    maxsum=max(currsum,maxsum);
                }
            }
        }

        return maxsum;*/
    }