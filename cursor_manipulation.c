#include <ncurses.h>

void print_cursor_psoition() {
	int row, col;
	getyx(stdscr, row, col);
	printw("Current cursor position: %d %d \n", row, col);

	refresh();
}

int main() {
	initscr();
	
	print_cursor_psoition(); 
	print_cursor_psoition();

	getch();

	endwin();
	return 0;
}
