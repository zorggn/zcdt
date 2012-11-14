#ifndef BUFFER_H_INCLUDED
#define BUFFER_H_INCLUDED

/*Definitions regarding the databuffers that hold Atoms*/

class Buffer
{
private:
	uint   length;
	uint   index;
	Atom* buffer;
protected:
	//
public:
	static void swapBuffers(Buffer*,Buffer*);
	Buffer(uint);
	~Buffer();
	Atom getAtom();
	Atom getAtom(uint);
	void setAtom(Atom*);
	uint getLength();
	void setLength(uint);
	uint getIndex();
	void setIndex(uint);
};

#endif // BUFFER_H_INCLUDED
