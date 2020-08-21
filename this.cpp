#include<iostream>
#include<string>
void printing(ent& e);
class ent
{
public:
	int x,y;

	ent(int x,int y){
		/*ent *e=this;  (this will also work)
		e->x=x  */
       this->x=x;
       this->y=y;
     
	}
	  printing(*this);
};
void printing(ent* e)
{
	printf("this called me");
}
int main()
{
	ent e(1,2);
	return 0;
}