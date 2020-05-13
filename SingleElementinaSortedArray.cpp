class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int checar = 1;
        while(checar < nums.size() && nums[checar] != nums[checar+1]){
            checar+=2;
        }
        if(checar-1 > 0)
            return nums[checar-1];
        return nums[0];
    }
};
