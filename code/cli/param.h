#ifndef PARAM_H_INCLUDED
#define PARAM_H_INCLUDED
//
/*Definitions regarding a higher-level container that can hold not just Atoms, necessary for the dynamically-evaluable algorithm tree*/

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
