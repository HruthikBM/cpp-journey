#include<iostream>
#include<string>
int main()
{
	int arr[5];
	int i,*p=arr;
	for(i=0;i<5;i++)
	{
		arr[i]=0;
	}
	*(int*)((char*)p + 16)=6;// also *(p+4)=6;     
	for(i=0;i<5;i++)
	{
           std::cout<<*(p+i)<<std::endl;
	}
	
	std::string name="hruthik"+std::string("raksan");
	name+="bm";
	std::cout<<name<<std::endl;
	int  co=name.find("ik"); //!=std::string::npos;
	std::cout<<int(co)<<std::endl;
     bool  cco=name.find("rak")!=std::string::npos;
	std::cout<<cco<<std::endl;
	return 0;
}
