#include "SongList.h"

SongList::SongList() {

	list = nullptr;
	size = 0;
}

SongList::SongList(Song* list, int size) {
	
	this->list = list;
	this->size = size;
}

SongList::~SongList() {

	clear();
}

void SongList::add(Song song) {

	if (isEmpty()) {

		size = 1;
		list = new Song[size];
		list[0] = song;
	}

	else {

		Song* temp = new Song[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = song;
		delete[] list;
		list = temp;
		size++;
	}
}

void SongList::add(int index, Song song) {

	if (isEmpty()) {

		size = 1;
		list = new Song[size];
		list[0] = song;
	}
	else {

		size++;
		Song* temp = new Song[size];

		for (int i = 0, j = 0; j < size; j++) {

			if (i != index) {

				temp[j] = list[i];
				i++;
			}
			else {

				temp[j] = song;
			}
		}

		delete[] list;
		list = temp;
		size++;
	}
}

Song SongList::get(int index) {

	if (!isEmpty() && index >= 0 && index < size) {
		return list[index];
	}

	return Song("Error");
}

void SongList::set(int index, Song song) {

	if (!isEmpty() && index >= 0 && index) {

		list[index] = song;
	}
}

void SongList::clear() {

	if (list != nullptr) {

		delete[] list;
		size = 0;
	}
}

bool SongList::isEmpty() {
	return size == 0;
}

int SongList::getSize() {
	return size;
}

void SongList::remove() {

	remove(size - 1);
}

void SongList::remove(int index) {

	if (!isEmpty()) {
		size--;
		Song* temp = new Song[size];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}

		delete[] list;
		list = temp;
	}
}

string SongList::toString() {

	string s = "No members";

	if (!isEmpty()) {

		s = "";

		for (int i = 0; i < size; i++) {

			s += list[i].toString() + " ";
		}
	}

	return s;
}