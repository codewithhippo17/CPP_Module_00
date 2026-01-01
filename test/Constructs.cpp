#include <iostream>
using namespace std;
class Game
{
	private:
		int Width;
		int Height;
		int x;
		int y;
	public:
		Game() {
			Width = 1920;
			Height = 720;
			x = 1920 / 2;
			y = 720 / 2;
		}
		int getHeight() {
        	return Height;
    	}

    	int getX() {
        	return x;
    	}
		int getWidth() {
        	return Width;
    	}

    	int getY() {
        	return y;
    	}
};

class C{
	
	private:
		
	public:
	
}
 
 
int main()
{
	{
	Game g1;
	cout << "game width: " << g1.getWidth() << endl;

	cout << "game height: " << g1.getHeight() << endl;
	cout  << "player x: " << g1.getX() << endl;
	cout  << "player y: " << g1.getY() << endl;
	}

	{
		
	}
	return 0;
}
