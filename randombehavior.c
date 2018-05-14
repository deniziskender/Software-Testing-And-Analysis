#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> 

bool isTrueOrFalse() {
    int r = rand() % 2;
    if(r == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    srand( (unsigned)time( NULL ) );    

    int s = 0;
	int d = 0;
    int N = 10;
    
	for (int i = 0; i < N; i++) {
		// state 0 handled.
		if (s == 0) {
            printf("State 0 \n");
			if (isTrueOrFalse()) {
				s = 1;
			} else {
				s = 2;
			} 
		}

		// state 1 handled.
		else if (s == 1) {
            printf("State 1 \n");
			if (isTrueOrFalse()) {
				s = 3;
			} else {
				s = 4;
			}
		}

		// state 2 handled.
		else if (s == 2) {
            printf("State 2 \n");
			if (isTrueOrFalse()) {
				s = 5;
			} else {
				s = 6;
			}
		}

		// state 3 handled.
		else if (s == 3) {
            printf("State 3 \n");
			if (isTrueOrFalse()) {
				s = 1;
			} else {
				s = 7;
				d = 1;
			}
		}

		// state 4 handled.
		else if (s == 4) {
            printf("State 4 \n");
			if (isTrueOrFalse()) {
				s = 7;
				d = 2;
			} else {
				s = 7;
				d = 3;
			}
		}

		// state 5 handled.
		else if (s == 5) {
            printf("State 5 \n");
			if (isTrueOrFalse()) {
				s = 7;
				d = 4;
			} else {
				s = 7;
				d = 5;
			}
		}

		// state 6 handled.
		else if (s == 6) {
            printf("State 6 \n");
			if (isTrueOrFalse()) {
				s = 2;
			} else {
				s = 7;
				d = 6;
			}
		}

		// state 7 handled.
		else if (s == 7) {
            printf("State 7 \n");
			s = 7;
		}
	}
    printf("Number of transitions: %d\n", N);
    printf("The last value of state: %d\n", s);
    printf("The last value of d: %d\n", d);
	return 0;
}



