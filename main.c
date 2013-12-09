

#include "stdio.h"
#include "string.h"

void test() {
	int *p = 0;
 
    *p = 100; // Segmentation fault
  
   printf("%d\n", *p);
}

int main(void) {
	test();
}