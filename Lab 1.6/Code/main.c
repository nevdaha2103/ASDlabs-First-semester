#include <stdio.h>
#include <windows.h>
#include <unistd.h>

void printChar(int x, int y, char ch) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    printf("%c", ch);
}
void traverseSpiral(int rows, int cols) {
    int centerX = cols / 2;
    int centerY = rows / 2;
    int x = centerX;
    int y = centerY;
    int increment = 0;

    while (y < rows && x < cols) {
        for (x; x > centerY - increment - 1; x--) {
            printChar(x, y, '*');
            usleep(10000);
        }
        for (y; y > centerY - increment - 1; y--) {
            printChar(x, y, '*');
            usleep(10000);
        }
        for (x; x < centerX + increment + 1; x++) {
            printChar(x, y, '*');
            usleep(10000);
        }
        for (y; y < centerY + increment + 1; y++) {
            printChar(x, y, '*');
            usleep(10000);
        }
        increment++;
    }
}

int main() {
    int rows = 24;
    int cols = 80;
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hout, 1);
    system("mode 80,25");
    traverseSpiral(rows, cols);
    getchar();
    return 0;
}
