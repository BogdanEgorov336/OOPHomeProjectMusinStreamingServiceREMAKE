#include "ArrayList.h"

ArrayList::ArrayList() {

	array = nullptr;
	size = 0;
}

ArrayList::~ArrayList() {}

void ArrayList::add(int value) {

	if (isEmpty()) {

		size = 1;
		array = new int[size];
		array[0] = value;
	}

	else {

		int* temp = new int[size + 1];

		for (int i = 0; i < size; i++) {

			temp[i] = array[i];
		}

		temp[size] = value;
		delete[] array;
		array = temp;
		size++;
	}
}

void ArrayList::add(int index, int value) {

	if (isEmpty()) {

		size = 1;
		array = new int[size];
		array[0] = value;
	}

	else {

		int* temp = new int[size+1];


		for (int i = 0; i < size; i++) {

			if (i != index) {

				temp[i] = array[i];
			}

			else {
				temp[i] = value;
			}
		}

		delete[] array;
		array = temp;
		size++;
	}
}

void ArrayList::addAll(int* values, int size) {

	if (isEmpty()) {

		array = new int [size];
		this->size = size;
	}

	for (int i = 0; i < size; i++) {

		add(values[i]);
	}
}

void ArrayList::addAll(int index, int* values, int size) {

	if (isEmpty()) {

		array = new int[size];
		this->size = size;

		addAll(values, size);
	}

	else {

		int* temp = new int[this->size + size];

		for (int i = 0; i < size; i++) {

			if (i != index) {

				temp[i] = array[i];
			}

			else {

				addAll(values, size);
			}
		}
	}
}

void ArrayList::remove(int index) {

	if (isEmpty()) {

		return;
	}

	else {

		int* temp = new int[size-1];

		for (int i = 0; i < size; i++) {

			if (i != index) {

				temp[i] = array[i];
			}

			else {

				i++;
			}
		}

		delete[] array;
		array = temp;
		size--;
	}
}

void ArrayList::remove() {

	size--;

	int* temp = new int[size];

	for (int i = 0; i < size; i++) {

		array[i] = temp[i];
	}

	delete[] array;
	array = temp;
}

int ArrayList::getSize() {
	return size;
}

int ArrayList::get(int index) {

	return array[index];
}

void ArrayList::set(int index, int value) {

	array[index] = value;
}

void ArrayList::clear() {

	delete[] array;
	size = 0;
}

bool ArrayList::isEmpty() {
	return size == 0;
}

string ArrayList::toString() {

	string s = "No elements";

	if (!isEmpty()) {

		s = "";

		for (int i = 0; i < size; i++) {

			s += to_string(array[i]) + " ";
		}
	}

	return s;
}