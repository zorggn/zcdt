/*
	ZCDT
*/

/*
this is the core application, which is also the cli one.
acceptable parameters:

	// used in this cpp (unless there's a need to make a Parser Class for arguments too, besides the one for the algorithm tree)

	-g				-	gui mode (?)
	-c				-	cli mode (default, unnecessary to add)
	-s				-	sound mode (after the processing finished, it gets copied into BASS' buffer and played back; underruns may occur, as well as overruns)

	// forwarded to IO

	-w0				-	suppress all console messages
	-w1				-	-"-, except (detailed) errors
	-w2				-	-"-, except errors and overview progress
	-w3				-	show all console messages (detailed progress for debugging purposes)
	-wd <path>		-	barf out the log to a file (would be unnecessary since most shells are capable of this fx.)

	/in <path>		-	the input file
	/out <path>		-	the output file
	/algo <path>	-	the algorithm file to use

*/

#include "zcdt.h";

int main(int argc, char*[] argv){

	//ide jönnének az argumentum parseoló dolgok esetleg

	return 0;
};