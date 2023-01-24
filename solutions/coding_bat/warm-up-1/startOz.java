// CodingBat Problem Link: https://codingbat.com/prob/p199720

public String startOz(String str) {
  if(str.length()>=2){
    String finalString="";
    char first=str.charAt(0),second=str.charAt(1);
    if(first=='o'){
      finalString+=first;
    }
    if(second=='z'){
      finalString+=second;
    }
    return finalString;
  }
  return str;
}
