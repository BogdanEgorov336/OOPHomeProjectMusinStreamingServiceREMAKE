#include "Initializer.h"

int main() {
	srand(time(0));

	Song song;

	Initializer initializer;

	initializer.init(song);

	cout << song.toString() << endl;

	system("pause");
	return 0;
}