class Solution {
public:
    /*int binarysearch(vector<int>& nums, int low,int high,int target){
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return -1;
    }
    int pivotminindex(vector<int>& nums){
        int low=0;
        int high=nums.size()-1;
        
        int mid;
        while(low<=high){
           mid=low+(high-low)/2;
           if(nums[mid]>nums[nums.size()-1]){
              low=mid+1;
           }
           else{
               high=mid-1;
           }
           
        }
        return low;

    }*/
    int search(vector<int>& v, int target) {
        /*int p=pivotminindex(v);
        if(v[p]<=target && target<=v[v.size()-1]){
            return binarysearch(v,p,v.size()-1,target);
        }
        else
        {  return binarysearch(v,0,p-1,target);
        }*/
        int l=0,r=v.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(v[m]==target)return m;
            if(v[m]>=v[l]){
                if(target>=v[l] && v[m]>=target)r=m-1;
                else l=m+1;
            }
            else {
                if(v[r]>=target && v[m]<=target)l=m+1;
                else r=m-1;
            }
        }
        return -1;
    }
};
