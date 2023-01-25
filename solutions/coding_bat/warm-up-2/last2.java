// CodingBat Problem Link: https://codingbat.com/prob/p178318

public int last2(String str) {
  if(str.length()<2){
    return 0;
  }
  int ct=0;
  for(int i=0;i<str.length()-2;++i){
    if(str.substring(i,i+2).equals(str.substring(str.length()-2))){
      ct++;
    }
  }
  return ct;
}
