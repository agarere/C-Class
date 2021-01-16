/*
 *  C-Class Concept
 *  Author: ediz agarer
 *  github: https://github.com/agarere
 */
#ifndef MYCLASS_H_
#define MYCLASS_H_

#define Class \
struct

/*~ Set the class name you will use.
 * ~*/
typedef struct MyClass MyClass;


/*********************************************/


/*~ Define your class.
 *  Public
 * ~*/
Class MyClass {

	void (*hello)(int arg); 	/*~ @function: MyClass_hello ~*/

	int data;

};


/*********************************************/

/*~ Set the constructor function signature.
 * ~*/
extern void MyClass_initialize(MyClass *this, int data);
void MyClass_hello(MyClass *this, int arg);

/*~ Set default values for your class.
 * ~*/
#define MyClass_empty 	{ 0 }


/*~ Define a new object from your class and
 *  prepare the wrap function for methods of your class.
 *  You should not call in any function.
 * ~*/
#define MyClass_new(object) \
\
MyClass object = MyClass_empty; \
\
void object##__hello__(int arg) { \
	MyClass_hello(&object, arg); \
}


/*~ This macro call your initialize function and
 *  relates methods of your object with your wrapped functions(defined above).
 *  You should call in any function.
 * ~*/
#define MyClass_init(object, data) \
\
MyClass_initialize(&object, data); \
\
object.hello = &object##__hello__;


#endif /* MYCLASS_H_ */
