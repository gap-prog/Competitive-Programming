// CodingBat Problem Link: https://codingbat.com/prob/p186031

public boolean arrayFront9(int[] nums) {
  int length=Math.min(4,nums.length);
  for (int i=0;i<length;++i) {
    if (nums[i]==9) {
      return true;
    }
  }
  return false;
}
