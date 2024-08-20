#include <ncurses.h>

int main() {
	int size = 32;
	char fname[size];
	char lname[size];

	initscr();
	
	addstr("Your first name: ");
	refresh();
	getnstr(fname, size-1);

	addstr("Your last name: ");
	refresh();
	getnstr(lname, size-1);

	printw("Schoen sie zu treffen %s %s\n", fname, lname);

	getch();
	endwin();
	return 0;
}
