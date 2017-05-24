#include <stdio.h>

int main()
{
  float arr[] = {13.56, -256.2356, 4578.0, -19.98};
  float avg, sum;
  int arr_length = sizeof(arr)/sizeof(float);

  for(int i = 0; i < arr_length; i++){
    sum += arr[i];
  }

  avg = sum / arr_length;

  printf("Der Mittelwert von ");
  for(int i = 0; i < arr_length - 1; i++){
    printf("%.2f, ", arr[i]);
  }
  printf("%.2f ", arr[arr_length - 1]);
  printf("ist %.2f.\n", avg);

  return 0;
}
