class Solution {
    public void sortColors(int[] nums) {
        int redcount=0;
        int whitecount=0;
        int bluecount=0;
        for(int a:nums){
            if(a==0){
                redcount++;
            }else if(a==1){
                whitecount++;
            }else
                bluecount++;
        }
        int in=0;
        for(int i=0;i<redcount;i++){
            nums[in++]=0;
        }
        for(int j=0;j<whitecount;j++){
            nums[in++]=1;
        }
        for(int k=0;k<bluecount;k++){
            nums[in++]=2;
        }
    }
}