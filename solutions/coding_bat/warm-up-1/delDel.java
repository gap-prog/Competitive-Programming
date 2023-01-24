// CodingBat Problem Link: https://codingbat.com/prob/p100905

public String delDel(String str) {
  if(str.length()>=4&&str.substring(1,4).equals("del")){
    return str.replace("del","");
  }else{
    return str;
  }
}
