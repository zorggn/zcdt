#ifndef PARAM_H_INCLUDED
#define PARAM_H_INCLUDED

enum ParamType {  
	Atom, Module*, Buffer*
};

struct Param
{
	ParamType paramtype;
	//ParamData, useful as an anonymous union.
	union {
		Atom atom;
		Module* module;
		Buffer* buffer;
	};
};

#endif // PARAM_H_INCLUDED
