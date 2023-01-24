// CodingBat Problem Link: https://codingbat.com/prob/p191022

public boolean startHi(String str) {
  if(str.length()<2){
    return false;
  }else{
    if(str.charAt(0)=='h'&&str.charAt(1)=='i'){
      return true;
    }else{
      return false;
    }
  }
}
