#include <ncurses.h>

int main() {
	char *sentence[] = {"Wie", "geht", "es", "jedem", NULL};

	initscr();
	
	int i = 0;


	while(sentence[i]) {
		if (i == 2) {
			attron(A_UNDERLINE);

		}
		printw("%s ", sentence[i]);

		if (i == 2) {
			attroff(A_UNDERLINE);
		}
		i++;


	}
	refresh();

	getch();
	endwin();

	return 0;
}
