#ifndef ZCDT_H_INCLUDED
#define ZCDT_H_INCLUDED

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

#endif // ZCDT_H_INCLUDED
