/**
 * @file Ptr.cpp
 *
 * @version 01.01 2020-08-15
 *
 * @brief Puntators example in c
 *
 * @ingroup Ptr
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */
#include <stdio.h>

int main() {
	int a;
	int *aPtr = &a;

	printf("The address of a is %p\nThe value of aPtris %p", &a, aPtr);
	printf("\n\nThe value of a is %d\nThe value of *aPtris %d", a, *aPtr);
	printf("\n\nShowing that * and & are complements of each other \n&*aPtr = %p\n", *&aPtr);

	return 0;
}