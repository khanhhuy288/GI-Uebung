#include <stdio.h>

int main() {
  int height;

  // prompt user for input
  do {
    printf("Wie hoch ist das Weihnachtsbaum?\n");
    printf("Geben Sie einen ungeraden Integer ein: ");
    scanf("%d", &height);
  } while (height < 1 || height % 2 == 0);

  int width = height*2 - 1;
  int dots_num = height - 1;

  // print tree
  for(int i = 0; i < height; i++){
    int leaves_num = width - dots_num*2;

    for(int i = 0; i < dots_num; i++){
      printf(".");
    }

    for(int i = 0; i < leaves_num; i++){
      printf("*");
    }

    for(int i = 0; i < dots_num; i++){
      printf(".");
    }

    dots_num--;
    printf("\n");
  }

  return 0;
}
