#include "Song.h"

Song::Song() : Song("No Name", "Unknown", "Is not defined", 0.0, 0) {};

Song::Song(string name) : Song(name, "Unknown", "Is not defined", 0.0, 0) {};

Song::Song(string name, double lengthInMin) 
	: Song(name, "Unknown", "Is not defined", lengthInMin, 0) {};

Song::Song(string name, string bandName, string albumName)
	: Song(name, bandName, albumName, 0.0, 0) {};

Song::Song(string name, double lengthInMin, unsigned long long totalPlays)
	: Song(name, "Unknown", "Is not defined", lengthInMin, totalPlays) {};

Song::Song(string name, string bandName, string albumName,
	double lengthInMin, unsigned long long totalPlays) {

	this->name = name;
	this->bandName = bandName;
	this->albumName = albumName;
	this->lengthInMin = lengthInMin;
	this->totalPlays = totalPlays;
};

Song::Song(const Song& song) : Song(song.name, song.bandName, song.albumName,
	song.lengthInMin, song.totalPlays) {};

Song::~Song() {};

void Song::setName(string name) {
	this->name = name;
}

string Song::getName() {
	return name;
}

void Song::setBandName(string bandName) {
	this->bandName = bandName;
}

string Song::getBandName() {
	return bandName;
}

void Song::setAlbumName(string albumName) {
	this->albumName = albumName;
}

string Song::getAlbumName() {
	return albumName;
}

void Song::setLengthInMin(double lengthInMin) {
	this->lengthInMin = lengthInMin;
}

double Song::getLengthInMin() {
	return lengthInMin;
}

void Song::setTotalPlays(unsigned long long totalPlays) {
	this->totalPlays = totalPlays;
}

unsigned long long Song::getTotalPlays() {
	return totalPlays;
}

string Song::toString() {

	return "Song name: " + name
		+ "\nAlbum name: " + albumName
		+ "\nBand name: " + bandName
		+ "\nLength: " + to_string(lengthInMin)
		+ "\nTotal plays: " + to_string(totalPlays);
}