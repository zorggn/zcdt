//implementation of the Atom buffer

#include "buffer.h";

//constructor: allocates length Atoms for a buffer

Buffer::Buffer(uint length) {
	this.length = length;
	this.index = 0;
	this.buffer = new (nothrow) Atom[this.length];
	if (this.buffer == 0)
	{
		cerr << "Error: Cannot allocate memory block length " << this.length << " for buffer." << endl;
		//call Exit() or implement a try-catch block in the routines calling this and propagate an exception to those?
	} 
	else 
	{
		cout << "Created buffer; length of " << this.length << "Atoms." << endl; //only if one of the -w flags are checked; which? that's a todo.
	}
}

//destructor: deletes the buffer

Buffer::~Buffer() {
	delete[] this.buffer;
}

//return the Atom from the list specified by the internal index

Atom Buffer::getAtom() {
	return this.buffer[this.index];
}

//return an Atom from the list specified by index

Atom Buffer::getAtom(uint index) {
	return this.buffer[index % this.length];
}

//set the current element at index as atom

void Buffer::setAtom(Atom* atom) {
	this.buffer[this.index] = atom;
}

// get the length of the buffer

void Buffer::getLength() {
	return length;
}

//set the length of the buffer

void Buffer:setLength(uint length) {
	//check if the new and current lengths are the same or not
	if (this.length != length)
	{
		Buffer temp = Buffer(length);
		Buffer::swapBuffers(this,temp);
		temp.~Buffer(); //necessary? good practice?
	}
}

// get the current index of the buffer

uint Buffer::getIndex() {
	return this.index;
}

// set the index to an integer (bounds-checked)

void Buffer::setIndex(uint index) {
	this.index = index % this.length;
}