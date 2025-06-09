#pragma once
#include "Song.h"

class SongList {

private:

	Song* list;
	int size;

public:

	SongList();
	SongList(Song* list, int size);
	~SongList();

	void add(Song song);
	void add(int index, Song song);
	Song get(int index);
	void set(int index, Song song);
	void clear();
	void remove();
	void remove(int index);

	bool isEmpty();
	int getSize();
	string toString();

};