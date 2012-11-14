#ifndef MODULE_H_INCLUDED
#define MODULE_H_INCLUDED

/*Definitions regarding the base Module every other implements*/

class Module
{
private:
	//
protected:
	uint argc
	Param** argv;
	clock_t exec_ticks;
public:
	Module(uint, Param***); //implies we build up the trees bottom-to-top.
	~Module();
	virtual clock_t getSpeed();
	virtual void Process(Param***) =0;
	virtual void Revert(Param***) =0;
	//getArg useless at first thought
	//void setArg(uint,Param**);
};

#endif // MODULE_H_INCLUDED
