 vector<int> fin(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge_arr;
        int i=0,j=0;
        double median;
        while(i<nums1.size()&&j<nums2.size())
        {
                if(nums1[i]<nums2[j])
                {
                    merge_arr.push_back(nums1[i]);
                    i++;
                }
                else
                {
                    merge_arr.push_back(nums2[j]);
                    j++;
                }
            
        }  
        
        if(j>=nums2.size())
        {
            while(i<nums1.size())
            {
                merge_arr.push_back(nums1[i]);
                i++;
            }
        }
        else if(i>=nums1.size())
        {
            while(j<nums2.size())
            {
                merge_arr.push_back(nums2[j]);
                j++;
            }
        }
        return(merge_arr);
}
