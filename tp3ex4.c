#include<stdio.h>
int main() {
	int N, i, som;
	for(N=1; N<1000;N++)
	{
	som = 0;
	for (i = 1; i <= N / 2; i++) {

		if (N % i == 0) {

			(som += i);
		}
	}
	if (som == N) {
		printf("%d est parfait\n", N);
	} else {
		printf("%d n'est pas parfait\n", N);

	}
	}
	return 0;
}

