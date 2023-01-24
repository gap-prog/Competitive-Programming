// CodingBat Problem Link: https://codingbat.com/prob/p191914

public String notString(String str) {
  if(str.startsWith("not")){
    return str;
  }else{
    return ("not"+' '+str);
  }
}
