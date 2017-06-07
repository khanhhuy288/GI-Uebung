#include <stdio.h>

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
  
  // reverse number 
  int reverse = 0;
  while (num != 0){
    reverse *= 10;
    reverse += num%10;
    num     /= 10;
  }

  while(reverse){
    // print last digit of reverse 
    printf("%s ", ausgabe[reverse%10]);
    // remove last digit of reverse
    reverse /= 10;
  }

  return 0;
}
