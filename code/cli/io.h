#ifndef IO_H_INCLUDED
#define IO_H_INCLUDED

/*Definitions regarding Input/Output; affected by -w* compiler flags*/

class IO
{
private:
	FILE* f;
protected:
	//
public:
	IO();
	~IO();
	void Open(char*);
	void Close();
	void Read(Buffer*, uint, uint);
	void Write(Buffer*, uint, uint);
};

#endif // IO_H_INCLUDED
