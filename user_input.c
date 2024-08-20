#include <ncurses.h>

int main() {
	int ch;

	initscr();

	addstr("Press any key to see in the terminal. [Enter] to exit\n");
	refresh();

	noecho();	
	while( (ch = getch()) != '\n' ) {
		printw("You have pressed: %c\n", ch);
		refresh();

	}

	endwin();
	return 0;
}
