#include <iostream>

int gl_var = 1;
int f() {return 2;}

namespace Foo {
	int gl_var = 3;
	int f() {return 4;}
}

namespace Bar {
	int gl_var = 5;
	int f() {return 6;}
}

namespace Muf = Bar;

int main()
{
    std::cout 
        << gl_var << ' '      // 1
        << f() << ' '         // 2
        << Foo::gl_var << ' ' // 3
        << Foo::f() << ' '    // 4
        << Bar::gl_var << ' ' // 5
        << Bar::f() << ' '    // 6
        << Muf::gl_var << ' ' // 5 (alias of Bar)
        << Muf::f()           // 6 (alias of Bar)
        << std::endl;
}
