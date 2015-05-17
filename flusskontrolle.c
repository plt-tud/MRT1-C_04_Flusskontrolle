/* Flusskontrolle in C
 */
#include <stdio.h>
int main() {
	int i = 0, j=0;
	// Kopfgesteuerte Schleife
	while (i < 10) {
		i++;
	}
	// Fußgesteuerte Schleife
	do {
		i++;
	} while (i < 10);
	
	// for-schleife
	for (i=0; i<10; i++) {
		j += i;
	}
	
	if (i == 0) {
		printf("i gleich 0\n");
	} else if (i < 0) {
		printf("i kleiner 0\n");
	} else {
		printf("i größer 0\n");
	}
	return 0;
}    
