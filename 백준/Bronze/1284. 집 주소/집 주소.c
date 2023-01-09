#include <stdio.h>

int plus(int num);

 int main(void) {

	 int n, a;
	 

	 while (1) {

		 int size = 1;

		 scanf("%d", &n);

		 if (n == 0)
			 break;

		 while (n != 0) {
			 a = n % 10;
			 size += plus(a);
			 n /= 10;

		}

		 printf("%d\n", size);
		
	 }
	
}

 int plus(int num) {
	 if (num == 0)
		 return 5;
	 else if (num == 1)
		 return 3;
	 else
		 return 4;
 }