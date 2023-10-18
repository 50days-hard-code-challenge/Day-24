class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0, r=nums.size()-1, result;
        //
        while(l<=r) {
            if (l==r) {
                result=nums[l];
                break;
            }
            //min size is 3
            int mid=(l+r)/2;
            if (nums[mid-1]==nums[mid]) {
                if (mid%2==0) {
                    r=mid-2;
                }
                else {
                    l=mid+1;
                }
            }
            else if (nums[mid+1]==nums[mid]){
                if (mid%2==0) {
                    l=mid+2;                                        
                }
                else {
                    r=mid-1;                                        
                }
            }
            else {
                l=r=mid;
            }
        }
        return result;        
    }
};
