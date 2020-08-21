#include<iostream>
#include<string>
class printing
{
public:
  virtual std::string printvalu() =0;//pu
};
class entry :public printing{
public:
  virtual std::string get(){return "iam_entry";}
  std::string printvalu() override {return "iam_entry";}
};
class a :public printing
{
	public :
		std::string printvalu() override {return "my_a";}
};
class newc :public entry{
private:
  std::string name;

public:
  newc(const std::string& my_name) : name(my_name) {}
  std::string get() override {return name;}
  std::string printvalu() override {return name;}

};
void print(printing* ent){
  std::cout<<ent->printvalu()<<std::endl;
}
int main()
{
  entry *obj1=new entry();
//  std::cout<<obj1->get()<<std::endl;
print(obj1);

  newc *obj=new newc("hruthik");
//  std::cout<<obj->get()<<std::endl;
print(obj);
print(new a());
  return 0;
}
