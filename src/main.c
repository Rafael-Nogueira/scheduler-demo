/*Rafael R. da Silva Nogueira  RA 147704*/


#include <stdio.h>

int main() {
  int a[5];
  int n;
  int a0, a1, a2, a3, a4;		

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<=n; i++) {
	
	a0 = i % a[0];
	a1 = i % a[1];
	a2 = i % a[2];
	a3 = i % a[3];
	a4 = i % a[4];
	
	if (a0 == 0){
		printf("0");
	}    
	
	if (a1 == 0){

		printf("1");
	}

	if (a2 == 0){

		printf("2");
	}

	if (a3 == 0){

		printf("3");
	}	

	if (a4 == 0){

		printf("4");
	}	


	if(a0!=0 && a1!=0 && a2!=0 && a3!=0 && a4!=0){
		
		printf("-");
	}

	printf("\n");
  }

  return 0;
}
