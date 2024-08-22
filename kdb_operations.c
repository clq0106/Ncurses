#include <ncurses.h>

int main() {
	int counter = 0;
	initscr();
	
	nodelay(stdscr, TRUE);
	while ( getch() == ERR) {
		counter++;
		printw("Das Programm läuft seit %d Sekunden!\n", counter);
		refresh();
		napms(1000);
		clear();
		refresh();

	}
	nodelay(stdscr, FALSE);

	printw("\nYou have pressed a key after %d functions\n", counter);
	refresh();

	getch();

	endwin();

	return 0;
}
