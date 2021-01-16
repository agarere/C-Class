/*
 *  C-Class Concept
 *  Author: ediz agarer
 *  github: https://github.com/agarere
 */
#include <stdio.h>
#include <stdlib.h>

#include "MyClass.h"

MyClass_new(myObject);
MyClass_new(myObject2);
MyClass_new(myObject3);


void test() {

	MyClass_init(myObject, 5);
	MyClass_init(myObject2, 10);
	MyClass_init(myObject3, 35);

	myObject.hello(1);
	myObject2.hello(2);
	myObject3.hello(3);

}

int main(int argc, char **argv) {

	test();

	return 0;
}
