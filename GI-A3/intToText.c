#include <stdio.h>

int bestimmeAnzahlStellen(int zahl){
  int n = 0;
  while(zahl){
    zahl /= 10;
    n++;
  }
  return n;
}

int main(){
  // prompt an int from user
  int num;
  do {
    printf("Geben Sie einen positiven Integer: ");
    scanf("%i", &num);
  } while(num < 0);

  char* ausgabe[] = { "null", "eins", "zwei", "drei", "vier",
                      "fuenf", "sechs", "sieben", "acht", "neun"};
  // int num_length = bestimmeAnzahlStellen(num);
  // reverse number 
  int reverse = 0;
  while (num != 0){
    reverse *= 10;
    reverse += num%10;
    num     /= 10;
  }

  // get digit from right to left and assign digit to ausgabe's index
  while(reverse){
    printf("%s ", ausgabe[reverse%10]);
    reverse /= 10;
  }

  return 0;
}
