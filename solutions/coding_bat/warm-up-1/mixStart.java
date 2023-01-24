// CodingBat Problem Link: https://codingbat.com/prob/p151713

public boolean mixStart(String str) {
  if(str.length()>=3&&str.charAt(1)=='i'&&str.charAt(2)=='x'){
    return true;
  }else{
    return false;
  }
}
