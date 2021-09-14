#include <stdio.h>

float convert(float fahr){
  float celsius;
  celsius = 5 * (fahr-32)/9; //Executes the conversion with the user input
  return celsius; //Returns the calculation to the main method's printf
}

int main() { 
  float fahr, celsius;
  scanf("%f", &fahr); //Asks for user input of Fahrenheight
  printf("Celsius:");
  printf("%f", convert(fahr));//Calls the conversion method and inputs the user's answer
  return(0);
}
