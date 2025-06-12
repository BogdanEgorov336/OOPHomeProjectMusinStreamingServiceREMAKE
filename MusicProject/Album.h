#pragma once
#include "SongList.h"

class Album {

private:

	string albumName;
	SongList list;

public:

	Album();
	Album(string albumName);
	Album(Song* list, int count, string albumName);
	Album(SongList list);
	Album(SongList list, string albumName);
	~Album();

	void add(Song song);
	void remove(int index);
	int getSize();
	Song get(int index);
	void set(int index, Song song);

	string toStringShort();
	string toStringFull();

	string getAlbumName();
	void setAlbumName(string albumName);
	double getAlbumLengthInMin();
};