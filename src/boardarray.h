#include <iostream>
#include "board.h"
#define SIZE 5
using namespace std;

class BoardArray : public Board {
    Entry* array;
    int index;

    public:
        BoardArray() {
            array = new Entry[SIZE];
            index = 0;
        }

        void add(Entry* entry) {
            // TODO: IMPLEMENT THIS FUNCTION
            // ALGORITHM IS PROVIDED IN INSTRUCTIONS.TXT
        }

        void add(Entry* entry) {
            if (index >= SIZE) {
                cout << "Board is full!" << endl;
                return;
            }

            array[index] = *entry;

            int i = index;
            while (i > 0 && array[i].compare(&array[i - 1])) {
                swap(array[i], array[i - 1]);
                i--;
            }

    index++;
}

        void print() {
            for (int i = 0; i < index; i++) {
                cout << i + 1 << ". ";
                array[i].print();
            }
        }
};