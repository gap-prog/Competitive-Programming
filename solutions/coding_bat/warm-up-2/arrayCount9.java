// CodingBat Problem Link: https://codingbat.com/prob/p184031

public int arrayCount9(int[] nums) {
  int ct=0;
  for(int i=0;i<nums.length;++i){
    if(nums[i]==9){
      ct++;
    }
  }
  return ct;
}
