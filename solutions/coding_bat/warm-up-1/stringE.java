// CodingBat Problem Link: https://codingbat.com/prob/p173784

public boolean stringE(String str) {
  int ct=0;
  for(int i=0;i<str.length();++i){
    if(str.charAt(i)=='e'){
      ct++;
    }
  }
  if(ct>=1&&ct<=3){
    return true;
  }
  return false;
}
