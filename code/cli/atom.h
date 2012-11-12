#ifndef ATOM_H_INCLUDED
#define ATOM_H_INCLUDED

/*Definitions regarding the base datatype the application uses*/

//easier to calculate for cycle lengths like this.
enum AtomType {
	hword=8,
	sword=4,
	dword=2,
	qword=1
};


union Atom {
	uint8_t  hword[8];
	uint16_t sword[4];
	uint32_t dword[2];
	uint64_t qword;
};

#endif // ATOM_H_INCLUDED