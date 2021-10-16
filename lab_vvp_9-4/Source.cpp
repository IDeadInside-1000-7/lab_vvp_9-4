#include <stdio.h>
#include <math.h>
int main()
{
	int A, B, C, s_AB, s_C, s_ostat, kol_C;
	printf("A = ");
	scanf("%i", &A);
	printf("B = ");
	scanf("\n%i", &B);
	printf("C = ");
	scanf("\n%i", &C);
	s_AB = A * B;
	printf("\nS of AB = ");
	printf("%i\n", s_AB);
	s_C = pow(C, 2);
	printf("\nS of C-square = ");
	printf("%i\n", s_C);
	kol_C = s_AB / s_C;
	printf("\nAmount of C-squares in AB = ");
	printf("%i\n", kol_C);
	s_ostat = s_AB % s_C;
	printf("\nFree S of AB = ");
	printf("%i\n", s_ostat);

}