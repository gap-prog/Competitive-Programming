// CodingBat Problem Link: https://codingbat.com/prob/p136351

public String front3(String str) {
  String front="";
  if(str.length()<3){
    front=str;
  }else{
    front=str.substring(0,3);
  }
  return front+front+front;
}
