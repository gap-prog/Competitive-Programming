// CodingBat Problem Link: https://codingbat.com/prob/p101475

public String frontTimes(String str, int n) {
  String finalString="";
  String front;
  if(str.length()>=4){
    front=str.substring(0,3);
  }else{
    front=str;
  }
  for(int i=0;i<n;++i){
    finalString+=front;
  }
  return finalString;
}
