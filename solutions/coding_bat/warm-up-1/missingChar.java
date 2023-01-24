// CodingBat Problem Link: https://codingbat.com/prob/p190570

public String missingChar(String str, int n) {
  String finalString = "";
  for(int i=0;i<str.length();++i){
    if(i!=n){
      finalString+=str.charAt(i);
    }
  }
  return finalString;
}
