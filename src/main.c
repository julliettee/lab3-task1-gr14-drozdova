/* hello.c */
#include <stdio.h>

#define MAX_N 100000

int pr[MAX_N];

int isSimple(int x){
  int d = 2;
  while(d * d <= x){
    if (x % d == 0){
      return 0;
    }
    d++;
  }
  return 1;
}

void main (void)
{
  int a;
  scanf("%d", &a);
  int cnt = 0;
  int ot = 0;
	for(int i = 2; i <= a; i++){
    if (isSimple(i)){
      pr[cnt] = i;
      for(int j = cnt; j >= 0; j--){
        if (i - pr[j] > 2){
          break;
        }
        if (i - pr[j] == 2){
          ot++;
        }
      }
      cnt++;
    }
  }
  printf("%d\n", ot);
  
}
