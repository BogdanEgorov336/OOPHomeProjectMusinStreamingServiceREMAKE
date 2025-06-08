#include "Album.h"

Album::Album() {}

Album::Album(Song* list, int count) {

	if (count > 0 && list != nullptr) {

		for (int i = 0; i < count; i++) {
			
			add(list[i]);
		}
	}

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

string Album::toString() {
	return list.toString();
}

string Album::getAlbumName() {
	return albumName;
}

void Album::setAlbumName(string name) {
	albumName = name;
}

int Album::getAlbumLengthInMin() {

	int length = 0;

	for (int i = 0; i < list.getSize(); i++) {

		length += list.get(i).getLengthInMin();
	}

	return length;
}