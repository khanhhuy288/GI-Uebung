#include <stdio.h>
#include <math.h>

int bestimmeAnzahlStellen(int zahl){
  int n = 0;
  while(zahl){
    // remove last digit 
    zahl /= 10;
    n++;
  }
  return n;
}

int main(){
  // prompt user for an int
  int num;
  do {
    printf("Geben Sie einen positiven Integer: ");
    scanf("%i", &num);
  } while(num < 0);

  char* ausgabe[] = { "null", "eins", "zwei", "drei", "vier", "fuenf", "sechs", "sieben", "acht", "neun"};

  // get number's length 
  int num_length = bestimmeAnzahlStellen(num);

  int digit;
  for (int factor = pow(10, num_length - 1); factor > 0; factor /= 10){
    // get first digit 
    digit = num / factor; 
    // remove first digit
    num %= factor; 
    // find string in ausgabe[] with digit
    printf("%s ", ausgabe[digit]);
  }  

  return 0;
}
