// CodingBat Problem Link: https://codingbat.com/prob/p183592

public String front22(String str) {
  if(str.length()<2){
    return str+str+str;
  }else{
    return str.substring(0,2)+str+str.substring(0,2);
  }
}
