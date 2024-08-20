#include <ncurses.h>

int main() {
	initscr();
	if(! has_colors()) {
		endwin();
		return 0;
	}

	if (start_color() != OK) {
		endwin();
		return 0 ;
	}
	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	init_pair(2, COLOR_RED, COLOR_YELLOW);
	init_pair(3, COLOR_MAGENTA, COLOR_WHITE);

	bkgd('.');

	attron(COLOR_PAIR(1) | A_BOLD);
	addstr("This is a white text\n");

	attron(COLOR_PAIR(2)|  A_BLINK);
	addstr("This is a red text\n");

	refresh();

	getch();


	endwin();
	return 0;
}
