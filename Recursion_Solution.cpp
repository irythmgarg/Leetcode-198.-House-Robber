class Solution {
public:

int hlo(vector<int>& nums,int i)
{
    if(i>=nums.size())
    return 0;
    int first=nums[i]+hlo(nums,i+2);
     int second=hlo(nums,i+1);
     return max(first,second);
}
    int rob(vector<int>& nums) {
       
           return hlo(nums,0);
    }
};
