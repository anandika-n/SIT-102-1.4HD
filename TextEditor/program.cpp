#include <iostream>
#include <fstream>
#include "splashkit.h"

using namespace std;

int main() {
    open_window("Basic Text Editor", 400, 300);

    string filename;
    write_line("Basic Text Editor");
    write("Enter the filename to open: ");
    filename = read_line();

    ifstream file_in(filename);

    if (!file_in.is_open()) {
        write_line("Error: File not found.");
        delay(2000); // Wait for 2 seconds before closing the window
        close_window("Basic Text Editor");
        return 1;
    }

    clear_screen();
    write_line("File Contents:");

    int y = 20;
    string line;
    while (getline(file_in, line)) {
        write_at(line, 10, y);
        y += 20;
    }

    file_in.close();
    write_line("Press any key to exit.");
    refresh_screen();
    read_line(); // Wait for user input

    close_window("Basic Text Editor");

    return 0;
}
