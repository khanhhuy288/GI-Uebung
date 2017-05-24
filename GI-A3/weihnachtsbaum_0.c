#include <stdio.h>

int main(){
  int height;

  // prompt user for input
  do {
    printf("Wie hoch ist das Weihnachtsbaum?\n");
    printf("Geben Sie einen ungeraden Integer ein: ");
    scanf("%d", &height);
  } while (height < 1 || height % 2 == 0);

  // tree vars
  int width = height*2 - 1;
  int dots_num = height - 1;

  // body vars
  int body_height = height/3;
  if(body_height % 2 == 0){
    body_height++;
  }

  int body_width = width/3;
  if(body_width % 2 == 0){
    body_width--;
  }

  int body_dots_num = (width-body_width) / 2;

  // change vars to add 2 left and right border
  width += body_dots_num * 2;
  dots_num += body_dots_num;
  body_dots_num *=2;

  // print border top
  for (int i = 0; i < body_height; i++) {
    for(int i = 0; i < width; i++){
      printf(".");
    }
    printf("\n");
  }

  // print leaves
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

  // print body
  for(int i = 0; i < body_height; i++){
    for(int i = 0; i < body_dots_num; i++){
      printf(".");
    }

    for (int i = 0; i < body_width; i++) {
      printf("*");
    }

    for(int i = 0; i < body_dots_num; i++){
      printf(".");
    }

    printf("\n");
  }

  // print border bottom
  for (int i = 0; i < body_height; i++) {
    for(int i = 0; i < width; i++){
      printf(".");
    }
    printf("\n");
  }

  return 0;
}
