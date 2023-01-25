// CodingBat Problem Link: https://codingbat.com/prob/p186759

boolean doubleX(String str) {
  int idx = str.indexOf('x');
  if(idx!=str.length()-1){
    if(str.charAt(idx+1)=='x'){
      return true;
    }
  }
  return false;
}
