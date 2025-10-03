#include <iostream>
using namespace std;
class Shape{
	public:
		virtual void draw() = 0;
		
};
class Circle:public Shape{
	public:
		void draw()overrirde{
		cout<<"Drawing Circle."<<endl;
	}
	
};

int main(){
Circle c;
Shape *s = &c;
s->draw();
return 0;
}
