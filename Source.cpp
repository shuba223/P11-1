#include <iostream>
using namespace std;

const int ROWS = 13;
int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);

int main() {

}

int findRowIndex(int thisRow) {
    return thisRow - 1;
}
int findSeatIndex(char thisSeat) {
    switch (thisSeat) {
    case 'D': return 0;
    case 'C': return 1;
    case 'B': return 6;
    case 'A': return 7;
    }
    return -1;
}
void displaySeatColumn(char seats[][ROWS], int column) {
    for (int i = 0; i < ROWS; i++) {
        cout << " " << seats[column][i];
    }
    cout << endl;
}