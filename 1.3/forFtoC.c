#include <stdio.h>

/*print Fahrenheight-Celicus table */

main(){

  int fahr;
  
  for(fahr = 0; fahr <= 300; fahr = fahr + 20){
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    /*%3d and %6.1f focus on precision
    %3d - print as a decimal integer at least 3 characters wide
    used here becasue it aligns numbers properly
    %6.1f - print as a floating point at least 6 wide and 1 wide after decimal
    the .1 used here because we want to limit the number of decimal places and 6 so we give out output a decent amount of spaces away from our celcius
    */
  }


}
