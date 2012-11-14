//implementation of the definiable module functions
#include "module.h";

//constructor for a module

Module::Module(uint argc, Param*** argv) {
	this.exec_ticks = 0;
	this.argc = argc;
	if (this.argc != 0)
	{
		this.argv = *argv;
	}
	else
	{
		this.argv = 0;
	}
}

// destructor for a module

Module::~Module() {
	//go through the params, and call their destructors if they have them
	for (int i = 0; i < this.argc; ++i)
	{
		switch (argv[i].paramtype) {
			case t_Atom:
				break;
			case t_pModule:
				argv[i].~Module();
				break;
			case t_pBuffer:
				argv[i].~Buffer();
				break;
		}
	}
	//then finally delete the array
	delete[] argv;
}

//get the speed of the particular module

clock_t Module::getSpeed() {
	return this.exec_ticks;
}