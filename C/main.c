#include <stdlib.h>
#include <stdio.h>

int Fibonacci (int pos) {
	if (pos == 0) return 0;		// F[0] = 0
	else if (pos == 1) return 1;	// F[1] = 1
	else return (Fibonacci(pos-2) + Fibonacci(pos-1));		// F[n] = F[n-2] + F[n-1]
}

int main (int argc, char **argv) {
	int pos, res;

	// Input
	if (argc == 2) pos = atoi (argv[1]);
	else {
		fprintf (stdout, "Enter position: ");
		fscanf (stdin, "%d", &pos);
	}

	// Output
	res = Fibonacci (pos);
	fprintf (stdout, "F[%d] = %d \n", pos, res);

	return 0;
}
