// CodingBat Problem Link: https://codingbat.com/prob/p165666

public String stringBits(String str) {
  String finalString="";
  for(int i=0;i<str.length();i+=2){
    finalString+=str.charAt(i);
  }
  return finalString;
}
