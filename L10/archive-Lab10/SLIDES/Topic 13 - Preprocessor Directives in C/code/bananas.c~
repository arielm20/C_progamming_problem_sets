#include<stdio.h>
#include<signal.h>
#include <unistd.h>

int finish = 0;

void handle_sigint (int signal_Value) {
	finish = 1;
}

int main() {
	signal(SIGINT, handle_sigint); 
	printf("Let me tell you a joke...\n");
    sleep(1); 
    while (1) 
    { 
    	if (finish) {
    		printf("  A: Knock Knock\n"); sleep(1); 
    	    printf("  B: Who's there?\n"); sleep(1);
    	    printf("  A: Orange.\n"); sleep(1);
    	    printf("  B: Orange who?\n"); sleep(1);
	        printf("  A: Orange you glad I didn't say Banana?\n"); sleep(1);
	        break;
    	} else {
    	    printf("  A: Knock Knock\n"); sleep(1); 
    	    printf("  B: Who's there?\n"); sleep(1);
    	    printf("  A: Banana.\n"); sleep(1);
    	    printf("  B: Banana who?\n"); sleep(1);
	        printf("  A: Ba-na\n"); sleep(1);
        	printf("        na\n"); sleep(1);
        	printf("        na\n"); sleep(1);
        	printf("        na\n"); sleep(1);
        	printf("        na-na\n"); sleep(1);
        }
    } 
    return 0; 
}
