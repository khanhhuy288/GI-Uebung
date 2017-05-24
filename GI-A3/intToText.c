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
                      "fünf", "sechs", "sieben", "acht", "neun"};
  int num_length = bestimmeAnzahlStellen(num);

  while(num){
    printf("%s ", ausgabe[num%10]);
    num /= 10;
  }

  return 0;
}
