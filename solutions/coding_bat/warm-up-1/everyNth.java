// CodingBat Problem Link: https://codingbat.com/prob/p196441

public String everyNth(String str, int n) {
  String finalString="";
  for(int i=0;i<str.length();i+=n){
    finalString+=str.charAt(i);
  }
  return finalString;
}
