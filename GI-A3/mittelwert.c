#include <stdio.h>

int main(){
  printf("Geben Sie eine Zahlenfolge ein.\n");
  printf("Wenn Sie keine Zahl eingeben, beendet die Zahlenfolge.\n");
  float num, sum;
  int count;

  do {
    printf("Geben Sie die %i.Nummer ein: ", count + 1);
    sum += num;
    count++;
  } while (scanf("%f", &num) == 1);

  float avg = sum/(count-1);
  printf("Der Mittelwert ist %.2f\n", avg);

  return 0;
}
