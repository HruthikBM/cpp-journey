#include<iostream>
#include<string>

class entry{
public:
  virtual std::string get(){return "iam_entry";}
};
class newc :public entry{
private:
  std::string name;

public:
  newc(const std::string& my_name) : name(my_name) {}
  std::string get() override {return name;}

};
void print(entry* ent){
  std::cout<<ent->get()<<std::endl;
}
int main()
{
  entry *obj1=new entry();
//  std::cout<<obj1->get()<<std::endl;
print(obj1);

  newc *obj=new newc("hruthik");
//  std::cout<<obj->get()<<std::endl;
print(obj);
  return 0;
}
