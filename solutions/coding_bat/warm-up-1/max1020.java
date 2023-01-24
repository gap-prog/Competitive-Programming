// CodingBat Problem Link: https://codingbat.com/prob/p177372

public int max1020(int a, int b) {
  if(b>a){
    int tmp=a;
    a=b;
    b=tmp;
  }
  if(a>=10&&a<=20){
    return a;
  }
  if(b>=10&&b<=20){
    return b;
  }
  return 0;
}
