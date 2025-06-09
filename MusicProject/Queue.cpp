#include "Queue.h"

Queue::Queue() {

	queue = nullptr;
	size = 0;
}

Queue::Queue(Song* list, int size) : Queue(list, size) {};

Queue::~Queue() {

	clear();
}

void Queue::enqueue(Song song) {

	if (isEmpty()) {

		size = 1;
		queue = new Song[size];
		queue[0] = song;
	}
	else {
		
		size++;
		Song* temp = new Song[size];

		for (int i = 0; i < size; i++) {

			temp[i] = queue[i];
		}

		temp[size] = song;
		delete[] queue;
		temp = queue;
	}
}

Song Queue::dequeue() {

	if (isEmpty()) {

		return Song("No object found", "No object found", "No object found");
	}

	Song element = queue[0];

	size--;
	Song* temp = new Song[size];

	for (int i = 0; i < size; i++) {

		temp[i] = queue[i + 1];
	}

	delete[] queue;
	queue = temp;

	return element;
}

void Queue::clear() {

	if (!isEmpty()) {

		delete[] queue;
		size = 0;
	}
}

Song Queue::peek() {
	
	if (!isEmpty()) {

		return queue[0];
	}

	return Song("No object found", "No object found", "No object found");
}

bool Queue::isEmpty() {
	
	return size == 0;
}

int Queue::getSize() {

	return size;
}

string Queue::toStringFull() {

	string str = "The queue is empty.";

	if (!isEmpty()) {

		str = "";

		for (int i = 0; i < size; i++) {

			str += queue[i].toString();
		}
	}

	return str;
}

string Queue::toStringShort() {

	string str = "The queue is empty.";

	if (!isEmpty()) {

		str = "";

		for (int i = 0; i < size; i++) {

			str += queue[i].getName() + " - " + queue[i].getBandName() + "\n";
		}
	}

	return str;
}