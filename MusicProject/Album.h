#pragma once
#include "SongList.h"

class Album {

private:

	string albumName;
	SongList list;

public:

	Album();
	Album(Song* list, int count);
	~Album();

	void add(Song song);
	void remove(int index);
	int getSize();
	Song get(int index);
	void set(int index, Song song);

	string toString();

	string getAlbumName();
	void setAlbumName(string albumName);
	double getAlbumLengthInMin();
};