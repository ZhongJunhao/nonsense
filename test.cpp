
#include <iostream>

typedef  int64_t money_unit_t;
typedef  int64_t house_size_t;


class ImaginedObject{
	public:
	ImaginedObject(){}
	virtual ~ImaginedObject(){}
};


class RealObject : ImaginedObject{
	public:
	explicit RealObject(money_unit_t money,house_size_t house) 
	{
		if(money<=0 || house <= 130)
		{
			throw "error";
		}
	};
	~RealObject(){};
};


#define DEBT			10000

int main(void)
{
	//ImaginedObject ImaginedGirl = new ImaginedObject();   //compile error
	try
	{
		RealObject * RealGrilFriend = new RealObject(-DEBT,0);
	}
	catch (char const *  error)
	{
		std::cerr << error;
	}
 	return 0;
}




