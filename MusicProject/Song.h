#pragma once
#include "Main.h"

class Song {

protected:

	//parameters
	string name;
	string bandName;
	string albumName;
	double lengthInMin;
	unsigned long long totalPlays;

public: 

	//constructors
	Song();
	Song(string name);
	Song(string name, double lengthInMin);
	Song(string name, double lengthInMin, unsigned long long totalPlays);
	Song(string name, string bandName, string albumName,
		double lengthInMin, unsigned long long totalPlays);
	Song(const Song& song);
	~Song();

	//Getters/setters, string-reforming etc.
	void setName(string name);
	string getName();
	void setBandName(string bandName);
	string getBandName();
	void setAlbumName(string albumName);
	string getAlbumName();
	void setLengthInMin(double lengthInMin);
	double getLengthInMin();
	void setTotalPlays(unsigned long long totalPlays);
	unsigned long long getTotalPlays();

	string toString();
};