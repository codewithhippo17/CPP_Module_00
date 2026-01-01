#include <iostream>

class A {
private:
    int x;         // private: only A can access x

public:
    void setX(int val) { x = val; }  // OK
	
};

int main() {
    A a;
    a.setX(5);    // ❌ ERROR: x is private
}

// class A {
// 	private:
// 		int priv = 20;
// 	protected:
// 		int prot = 315;
// 	public:
// 		int pub = 12;
// };
//
// class B : public A {
// public:
//     void printX() {
//         std::cout << pub << std::endl;   // ✔ allowed
//     }
// };
//
// int main() {
//     B b;
//     b.printX();     // prints 10
// }
