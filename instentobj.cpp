#include<iostream>
#include<string>
 
 using str=std::string;

class ent
{
private:
	str name;
public:
	ent() : name("un") {}
	ent(const str& na) :name(na) {}
    const str& get() {
    	return name;
    }
};
int main()
{
	ent *e;
	{
		ent *en= new ent("hruthik");
		e=en;
		std::cout<<en->get()<<std::endl;
	}

	std::cout<<e->get()<<std::endl; 
	delete e;
	return 0;
} 