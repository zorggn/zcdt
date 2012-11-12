#ifndef BUFFER_H_INCLUDED
#define BUFFER_H_INCLUDED

/*Definitions regarding the databuffers that hold Atoms*/

class Buffer
{
private:
	int   length;
	Atom* buffer;
protected:
	//
public:
	static void swapBuffers(Buffer*,Buffer*);
	Buffer(int);
	~Buffer();
	Atom getAtom();
	void setAtom(Atom*);
	void setLength(int);
	int  getLength();
};

#endif // BUFFER_H_INCLUDED
