
# include <string>
#include <iostream>

class Cat {

	private:
		std::string name;
		std::string color;
		std::string favToy;
	public:
	void print_cat(){
		std::cout << "Name: " << name <<  std::endl;
		std::cout << "Color: " << color <<  std::endl;
		std::cout << "Favtoy: " << favToy << std::endl;
	}
	Cat(std::string n, std::string c, std::string ft)
	{
		name = n;
		color = c;
		favToy = ft;
	}
};


int
main() {
	Cat Cat1( "qtita", "k7la", "qten" );
	std::cout << "Cat.." << std::endl;
	Cat1.print_cat();
	std::cout << std::endl;
}
