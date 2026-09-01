class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int m=0;
        int con=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                m++;
            }
            else{
                con=max(con,m);
                m=0;
            }   
        }
        con=max(con,m);
        return con;
        
    }
};
