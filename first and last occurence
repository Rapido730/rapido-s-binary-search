vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>pos;
        pos.push_back(first_occur(nums,target));
        pos.push_back(last_occur(nums,target));
        return(pos);
    }
    
    int first_occur(vector<int>& nums,int target)
    {
        int start=0;
        int end=nums.size()-1;
        int res=-1;
        int mid;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return(res);
    }
    
    int last_occur(vector<int>& nums,int target)
    {
        int start=0;
        int end=nums.size()-1;
        int res=-1;
        int mid;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                start=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return(res);
    }
