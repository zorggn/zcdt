#ifndef MODULE_H_INCLUDED
#define MODULE_H_INCLUDED
//
/*Definitions regarding the base Module every other implements*/

class Module
{
private:
	//
protected:
	int argc
	Module** argv;
	clock_t exec_ticks;
public:
	Module(arguments);
	~Module();
	clock_t getSpeed();
	virtual void Process(Param**) =0;
	virtual void Revert(Param**) =0;
};

#endif // MODULE_H_INCLUDED
