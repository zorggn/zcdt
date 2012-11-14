#ifndef PARAM_H_INCLUDED
#define PARAM_H_INCLUDED

/*Definitions regarding the algorithm tree that gets built up (and manipulated in gui mode)*/

class Algotree
{
private:
	uint index;
	uint length;
	Module* list;
protected:
	Module* prev;
	Module* next;
public:
	Algotree(Param***);
	~Algotree();
	Module* current;
	void InsertBefore(Module*);
	void InsertAfter(Module*);
	void Remove();
};

#endif // PARAM_H_INCLUDED