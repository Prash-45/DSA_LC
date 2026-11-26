class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if(n == 0) return;
        
        int d = k % n;

        vector<int> temp(d);

        for(int i=0; i<d; i++){
            temp[i] = nums[n-d+i];
        }
        
        for(int i= n-1; i>=d; i--) {
            nums[i] = nums[i-d] ;
        }

        for(int i=0 ; i<d; i++){
            nums[i] = temp[i];
        }
        
    }
};