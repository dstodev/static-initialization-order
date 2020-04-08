#include <iostream>
using std::cout;
using std::endl;

#include <my_class.h>
#include <my_other_class.h>

int main()
{
	cout << "-dbg- MyClass: " << MyClass::scMem << endl;
	cout << "-dbg- MyOtherClass: " << MyOtherClass::scOtherMem << endl;

	return 0;
}
