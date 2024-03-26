#include <stdio.h>
#include <stdlib.h>


//コマンドライン引数を表示するプログラム
int main(int argc, char **argv) {
  int i;

  printf("argc=%d\n", argc);
  
  for(int i = 0; i < argc; i++) {
    printf("%d番目の引数は%s\n", i+1, argv[i]);
  }
  exit(0);
}