#include <iostream>
#include <string>
#include <sstream>
using namespace std;

enum notes {
    C = 1,
    D = 2,
    E = 4,
    F = 8,
    G = 16,
    A = 32,
    B = 64
};

int main() {
    string notesCombinations[12];
    stringstream song;
    for (int i = 0; i < 12; ++i) {
        cin >> notesCombinations[i];
        for (int j = 0; j < notesCombinations[i].length(); ++j) {
            int n = notesCombinations[i][j] - '0';
            switch (1 << n) {
                case C:
                    song << "C ";
                    break;
                case D:
                    song << "D ";
                    break;
                case E:
                    song << "E ";
                    break;
                case F:
                    song << "F ";
                    break;
                case G:
                    song << "G ";
                    break;
                case A:
                    song << "A ";
                    break;
                case B:
                    song << "B ";
                    break;
            }
        }
        song << " ";
    }
    cout << song.str();
}
