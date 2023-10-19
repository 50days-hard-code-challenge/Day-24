class Solution {
public:
    /*bool binarysearch(vector<int>& nums, int l,int h,int target){
        int mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]==target)
            {  
                return true;
            }
            else if(nums[mid]>target)
            { 
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
    int pivotmin(vector<int>& nums){
        int l=0;
        int h=nums.size()-1;
        int n=nums.size()-1;
        int mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]<nums[n]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        return l;
    }*/
    bool search(vector<int>& nums, int target) {
       int l=0;
       int h=nums.size()-1;
       while(l<=h)
       {  int mid=l+(h-l)/2;
          if(nums[mid]==target){
              return true;
          }
          if((nums[l] == nums[mid]) && (nums[h] == nums[mid]))//shrinking condition
          {
                l++;
                h--;
          }
        //first pa
          else if(nums[l]<=nums[mid]){
              if((nums[mid]>target) && (nums[l]<=target)){
                      h=mid-1;
              }
              else{
                     l=mid+1;
              }
          }
          else
          {   if((nums[mid]<target)&&(nums[h]>=target))
              {
                  l=mid+1;
              }
              else{
                  h=mid-1;
              }

          }

       }
       return false;
        
    }
};
