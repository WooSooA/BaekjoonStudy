#include <stdio.h>

 int main() {

	 int n, a;
	 int y = 0;
	 int m = 0;

	 scanf("%d", &n);

	 for (int i = 0; i < n; i++) {
		 scanf("%d", &a);
		
		 y += 10 * ((a / 30) + 1);
		 m += 15 * ((a / 60) + 1);
	 }
	 
	 if (y > m) {
		 printf("M %d", m);
	 }
	 else if (y < m) {
		 printf("Y %d", y);
	 }
	 else
		 printf("Y M %d", m);

}