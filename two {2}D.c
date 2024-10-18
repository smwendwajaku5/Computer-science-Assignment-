#include<stdio.h>
int main(){
  int m,n;
  int charge[2][3]={{1,5,87},{4,7,11}};
  for(m=0;m<3;m++){
    for(n=0;n<2;n++){
      printf("charge[%d][%d]=%d\n",m,n,charge[m][n]) ;
      
    }
  }
  return 0;
}
