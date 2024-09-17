int sumFourDivisors(int* nums, int numsSize) {
    int cnt=0,sum=0,s=0,c=0;
    for(int j=0;j<numsSize;j++)
    {
        sum=0;
        cnt=0;
    for(int i=1;i*i<=nums[j];i++)
    {
        if(nums[j]%i==0)
        {
            cnt++;
            sum=sum+i;
            if(nums[j]/i!=i)
            {
                cnt++;
                sum=sum+(nums[j]/i);
            }
        }
    }
    if(cnt==4)
    {
        c=1;
        s=s+sum;
    }
    }
    if(c==1)
        return s;
    return 0;
}