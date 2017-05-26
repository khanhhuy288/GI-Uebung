#include <stdio.h>

void print_symbol(char* symbol, int times){
  for(int i = 0; i < times; i++){
    printf("%s", symbol);
  }
}

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

    print_symbol(".", dots_num);
    print_symbol("*", leaves_num);
    print_symbol(".", dots_num);

    dots_num--;
    printf("\n");
  }

  return 0;
}
