#include<iostream>
class vector
{
public:
  float x,y;
  vector(float v1,float v2) :x(v1),y(v2){}
  vector add(const vector& op) { return vector(x+op.x , y+op.y); }
  vector mult(const vector& op) { return vector(x*op.x,y*op.y);}
  vector operator+(const vector& op) {  return add(op);}
  vector operator*(const vector& op) { return mult(op);}
  bool operator==(const vector& op){ return x==op.x&& y==op.y;}
  bool operator!=(const vector& op){ return !operator==(op);}
  float rex(){ return x;}
  float rey(){ return y;}
};
std::ostream& operator<<(std::ostream& ostream,const vector& obj )
{
   ostream <<obj.x<<','<<obj.y;
   return ostream;
}
int main()
{
	vector obj(1.2f,3.5f);
	vector obj2(3.4f,5.6f);
	vector obj3(3.4f,5.6f);
	vector result=obj+obj2*obj3;
	std::cout<<result.rex()<<'+'<<result.rey()<<std::endl;

	std::cout<<result<<std::endl;
	if(obj==obj2)
	{
		std::cout<<"maching "<<std::endl;
	}
	if(obj!=obj2)
		std::cout<<"not maching"<<std::endl;
	return 0;
}


