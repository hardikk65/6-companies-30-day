class Solution {
public:
    int minMoves2(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int median= nums.size()/2;
        int ans=0;

        for(int i=0;i<nums.size();i++){
            

            if((nums[median]<0&&nums[i]>0 )||(nums[median]>0&&nums[i]<0)){
                ans= ans + abs(abs(nums[median])+abs(nums[i]));
                
            }
            else{
                ans= ans + abs(nums[median] -nums[i]);
            }
        }
        return ans;

            
            
        
    }
};