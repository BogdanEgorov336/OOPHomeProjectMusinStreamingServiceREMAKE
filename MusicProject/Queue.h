#pragma once
#include "Songlist.h"

class Queue {

private: 

	Song* queue;
	int size;

public: 

	Queue();
	Queue(Song* queue, int size);
	~Queue();

	void enqueue(Song song);
	Song dequeue();
	void clear();
	Song peek();
	bool isEmpty();
	int getSize();
	string toStringFull();
	string toStringShort();
};