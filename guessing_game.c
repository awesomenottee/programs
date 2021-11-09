#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "include/enroll.h"
#include "include/clear.h"

main() {
	clear();
        enroll();
	int num;

	printf("------------------------------------\n");
	printf("-	    Guessing Game	   -\n");
	printf("------------------------------------\n");
	printf("Guess an Integer in 0 to 10: ");
	srand(time(NULL));
	int randNum = rand() % 11;
	if (scanf("%d", &num) != 1) {
		printf("You are supposed to write an integer\n\n");
		exit(0);
	}
	else if (num > 10 || num < 0) {
		printf("You are supposed to write in 0 to 10\n\n");
		exit(0);
	}
	else if (randNum == num) {
		printf("You got me !!!\n\n");
	} else {
		printf("You are wrong, I was thinking about %d\n\n", randNum);
	}

	printf("Game will reset in 3 secs...\n\n");
	sleep(2);
	main();
}
