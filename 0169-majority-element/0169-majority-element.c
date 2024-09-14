int majorityElement(int* nums, int numsSize) {
    int cnt=0,el;
    for(int i=0;i<numsSize;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el=nums[i];
        }
        else if(el==nums[i])
            cnt++;
        else
            cnt--;
    }
    return el;
}