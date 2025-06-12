#include "Initializer.h"
#include "Queue.h"
#include "SongList.h"
#include "Album.h"

int main() {
	srand(time(0));

	int size = 3;
	Song* list = new Song[size];

	Initializer initializer;
	for (int i = 0; i < size; i++) {

		initializer.init(list[i]);
	}

	SongList songlist{ list, 3 };
	//Initializer initializer;

	//for (int i = 0; songlist.getSize(); i++) {

	//	initializer.init(songlist.get(i));
	//}

	Album album{ songlist };

	cout << "SHORT INFO VERSION:\n\n" << album.toStringShort() << endl;

	cout << "FULL INFO VERSION:\n\n" << album.toStringFull() << endl;

	system("pause");
	return 0;
}