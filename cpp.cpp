#include <iostream>

class Base
{
	public:
		int num;
		Base()
		{
			std::cout<<"i'm  the default constractor in base class\n";
		}
		void setNum(int const num)
		{
			this->num = num;
		}
		int getNum()
		{
			return(num);
		}
		 ~Base()
		{
			std::cout<<"i'm  the default destractor in base class\n";
		}
};

class Derived : public Base
{
	private:
		int *tab;
	public:
		Derived()
		{
			tab = new int[2];
			tab[0] = 4;
			tab[1] = 10;
			std::cout<<"i'm the default constractor in Derived class\n";
		}
		~Derived()
		{
			delete tab;
			std::cout<<"i'm  the default destractor in Derived class\n";
		}
		void print()
		{
			std::cout<<this->getNum();
		}
};


int main()
{
	Base *p[] = {new Base(), new Derived()};
	for (size_t i = 0; i < 2; i++)
	{
		delete p[i];
	}
	
}
// class Derived2 : virtual public Base
// {
// 	public:
// 		Derived2()
// 		{
// 			std::cout<<"i'm a default derived2\n";
// 		}
// 		~Derived2()
// 		{

// 		}
// };

// class Derived3: public Derived, public Derived2
// {
// 	public:
// 		Derived3()
// 		{
// 			std::cout<<"i'm a default derived3\n";
// 		}
// 		Derived3(const Derived3& ob1)
// 		{
// 			*this = ob1;
// 			std::cout<<"i'm a copy constractor derived3\n";
// 		}
// 		~Derived3()
// 		{

// 		}
// };

