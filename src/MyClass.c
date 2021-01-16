/*
 *  C-Class Concept
 *  Author: ediz agarer
 *  github: https://github.com/agarere
 */
#include <stdio.h>
#include <stdlib.h>

#include "MyClass.h"

/**
 * @class 	MyClass
 * @method 	hello
 * @param 	this: your object, derived from @class
 * @param 	arg
 */
void MyClass_hello(MyClass *this, int arg) {
	printf("Hello, data: %d,  arg: %d\n\r", this->data, arg);
}

/**
 * @class 	MyClass
 * @param 	this: your object, derived from @class
 * @param 	data
 */
void MyClass_initialize(MyClass *this, int data) {
	this->data = data;
}

