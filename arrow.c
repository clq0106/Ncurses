#include <ncurses.h>

int main() 
{
int key, x, y;
initscr();
keypad(stdscr, TRUE);
noecho();

x = y = 5;
int a, b;
while (key != 'q')
{
	clear();
	move(0, 0);
	printw("Press left, right, up or down - exit by pressing: q\n");
for (a = 0; a < 21; a++)
{
	printw("                               |\n");
}
printw("______________________________");


move(y, x);

printw("0");
refresh();

key = getch();

if (key == KEY_LEFT)
{
	x--;
	if (x < 0) x = 0;
}
else if (key == KEY_RIGHT)
{
	x++;
	if (x > 30) x = 30;
		}
if (key == KEY_UP)
{
	y--;
	if (y <=1) y=1;

}
else if (key == KEY_DOWN)
{
	y++;
	if (y > 21) y = 21;
}
	}
	endwin();
	return 0;

}
