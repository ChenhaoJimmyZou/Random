#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand ( time(NULL) );
  int rand_num;
  int zero_count = 0;
  int one_count = 0;
  int two_count = 0;
  int three_count = 0;
  int four_count = 0;
  int five_count = 0;
  int six_count = 0;
  int seven_count = 0;
  int eight_count = 0;
  int nine_count = 0;
  int ten_count = 0;
  for (int i = 0; i < 10000; i ++){
    rand_num = rand() % 11;
    printf("%d, ", rand_num);
    if (rand_num == 0){
      zero_count ++;
    }
    else if (rand_num == 1){
      one_count ++;
    }
    else if (rand_num == 2){
      two_count ++;
    }
    else if (rand_num == 3){
      three_count ++;
    }
    else if (rand_num == 4){
      four_count ++;
    }
    else if (rand_num == 5){
      five_count ++;
    }
    else if (rand_num == 6){
      six_count ++;
    }
    else if (rand_num == 7){
      seven_count ++;
    }
    else if (rand_num == 8){
      eight_count ++;
    }
    else if (rand_num == 9){
      nine_count ++;
    }
    else{
      ten_count ++;
    }
  }

  printf("\n");

  printf("The number of 0: %d\n", zero_count);
  printf("The number of 1: %d\n", one_count);
  printf("The number of 2: %d\n", two_count);
  printf("The number of 3: %d\n", three_count);
  printf("The number of 4: %d\n", four_count);
  printf("The number of 5: %d\n", five_count);
  printf("The number of 6: %d\n", six_count);
  printf("The number of 7: %d\n", seven_count);
  printf("The number of 8: %d\n", eight_count);
  printf("The number of 9: %d\n", nine_count);
  printf("The number of 10: %d\n", ten_count);
}
