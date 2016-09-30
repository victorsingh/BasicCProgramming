#include <stdio.h>

main(){

  int fahr, celcius;// declared variables fahr and celcius
  int lower, upper, step;//declared lowst temperature, highest temperature and step
  //what is step? Step is what we incrament fahr by until the condition in the while loop turns false
  lower = 0;
  upper = 300;
  step = 20;


  fahr = lower; 
  while( fahr <= upper) {
      celcius = 5 * (fahr-32)/9;
      printf("%d\t%d\n", fahr, celcius);
      fahr = fahr + step;
  }
}
