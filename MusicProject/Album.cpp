#include "Album.h"

Album::Album() {}

Album::Album(Song* list, int count, string albumName) {

	if (count > 0 && list != nullptr) {

		for (int i = 0; i < count; i++) {

			add(list[i]);
		}
	}

	this->albumName = albumName;
}

Album::Album(SongList list) {

	if (list.getSize() > 0 && !list.isEmpty()) {

		for (int i = 0; i < list.getSize(); i++) {

			add(list.get(i));
		}
	}
}

Album::Album(SongList list, string albumName) {

	if (list.getSize() > 0 && !list.isEmpty()) {

		for (int i = 0; i < list.getSize(); i++) {

			add(list.get(i));
		}
	}

	this->albumName = albumName;
}

Album::Album(string albumName) {

	this->albumName = albumName;
}

Album::~Album() {}

Song Album::get(int index) {
	return list.get(index);
}

void Album::set(int index, Song song) {
	list.set(index, song);
}

void Album::add(Song song) {
	list.add(song);
}

void Album::remove(int index) {
	list.remove(index);
}

string Album::toStringShort() {

	string s = "There's no any songs there.";

	if (!list.isEmpty()) {

		s = "";

		int size = list.getSize();

		for (int i = 0; i < size; i++) {

			s += "Name: " + list.get(i).getName()
				+ "\nTotal plays: " + to_string(list.get(i).getTotalPlays())
				+ "\n\n";

		}
	}

	return s;
}

string Album::toStringFull() {

	string s = "There's no any songs there.";

	if (!list.isEmpty()) {

		s = "";

		int size = list.getSize();

		for (int i = 0; i < size; i++) {

			s += list.get(i).toString();
		}

	}

	return s;
}

string Album::getAlbumName() {
	return albumName;
}

void Album::setAlbumName(string name) {
	albumName = name;
}

double Album::getAlbumLengthInMin() {

	double length = 0;

	for (int i = 0; i < list.getSize(); i++) {

		length += list.get(i).getLengthInMin();
	}

	return length;
}