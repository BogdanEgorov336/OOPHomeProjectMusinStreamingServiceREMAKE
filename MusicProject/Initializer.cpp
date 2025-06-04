#include "Initializer.h"

void Initializer::init(Song& song) {

	//12 songs:
	string songNames[12]{ "Sonne", "Place to be", "Symphony of destruction",
	"Walk", "Vermilion", "Last resort", "Master of puppets",
		"The man who sold the world", "The dope show", "Paranoid", "Sweet leaf",
		"Take a look around" };

	//12 artists:
	string bandNames[12]{ "Nirvana", "Slipknot", "Metallica", "Limp Bizkit",
	"Pantera", "Rammstein", "David Bowie", "Marilyn Manson", "Black Sabbath",
	"Papa Roach", "Nick Drake", "Megadeath" };

	//12 albums:
	string albumNames[12]{ "Nevermid", "Vol. 3: The Subliminal Verses", "Pink moon",
	"Countdown To Extinction", "Mutter", "Master of puppets", "Infest",
		"Mechanical Animals", "Paranoid", "Master of the reality", "Significant Other",
	"Chocolate Starfish And The Hot Dog Flavoured Water" };


	song.setName(songNames[rand() % 12]);
	song.setBandName(bandNames[rand() % 12]);
	song.setAlbumName(albumNames[rand() % 12]);
	song.setTotalPlays(rand());
	song.setLengthInMin(rand() % 7);
}