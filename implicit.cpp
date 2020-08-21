#include<iostream>
class em
{
private:
	std::string name;
	int age;
public:
	em(const std::string& n) : age(-1), name(n){}
	em(int x) : age(x), name("un") {}
	int  geta() const { return age;}
	std::string getn()const { return name;}
};
void printing( const em& obj)
{
	std::cout<<obj.getn()<<obj.geta()<<std::endl;
}
int main()
{
    printing(std::string("hruthik"));
     printing(em("raksan")); // (this will also wark fine this will convert std string into standerd string )
    //  printing("hruthik"); //(in this case tow implicit  canvertion require 1.const to strign 2.string to obj but "c++ only allow single implicit convertion" )

    return 0;
}