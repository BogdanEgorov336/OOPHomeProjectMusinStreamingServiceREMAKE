#include "Initializer.h"
#include "Queue.h"
#include "SongList.h"
#include "Album.h"

int main() {
	srand(time(0));

	int size = 3;
	Song* songlist = new Song[size]{ Song("Song1"), Song("Song2"), Song("Song3")};
	SongList list{ songlist, 3 };

	Album album{ songlist, 3};

	Initializer initializer;
	for (int i = 0; i < size; i++) {

		initializer.init(album.get(i));
	}
	
	
	

	system("pause");
	return 0;
}