// CodingBat: https://codingbat.com/prob/p116624

public int diff21(int n) {
  int abs=(n-21);
  if(abs<0){
    abs*=-1;
  }
  if(n>21){
      return(abs*2);
  }else{
    return(abs);
  }
}
