#include <ncurses.h>
int main() 
{
	int x, y;

	initscr();
	printw("Geben sie zwei Koordinaten ein: ");
	refresh();
	x = getch();
	y = getch();
	

}
