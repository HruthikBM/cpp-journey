#include<bits/stdc++.h>
class expr
{
public:
	expr()
	{
			std::cout<<"created without x"<<std::endl;
	}
	expr(int x)
	{
   		std::cout<<"created with "<<x<<std::endl;
	}
};
class entity
{
private:
	std::string name;
	expr ent;
public:

	entity()
	   :ent(expr(8))
	 {
		name=std::string("un");
		//ent=expr(8); //it will create twice
	 }
	entity(std::string x)
	:name(x)
	{}

	std::string get() {return name;}
};
int main()
{
	entity e;
	
	/*
	std::cout<<e.get()<<std::endl;
	entity e1("hruthik");
	std::cout<<e1.get()<<std::endl;*/
	return 0;
}
