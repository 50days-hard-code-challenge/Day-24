public class Solution {
    public static int count(int arr[], int n, int x) {
        //Your code goes here
        int start=0;
        int end=n-1;
        int first=0;
        int last=0;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr[mid]==x)
            {
                first=mid;
                end=mid-1;
            }
            else if(x>arr[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        start=0;
        end=n-1;
         while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr[mid]==x)
            {
                last=mid;
                start=mid+1;
            }
            else if(x>arr[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        if(first==0 && last==0)
        {
            return 0;
        }
        return (last-first)+1;
    }
}
