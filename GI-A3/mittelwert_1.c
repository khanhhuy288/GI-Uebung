#include <stdio.h>

int main(){
  printf("Geben Sie eine Zahlenfolge ein. Benutzen Sie 0 um die Folge zu beenden.\n");
  float num, sum;
  int count;

  do {
    printf("Geben Sie die %i.Nummer ein: ", count + 1);
    scanf("%f", &num);
    sum += num;
    count++;
  } while (num != 0);

  float avg = sum/(count-1);
  printf("Der Mittelwert ist %.2f\n", avg);

  return 0;
}
