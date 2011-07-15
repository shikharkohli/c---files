#include <ncurses.h>
#include<iostream>

using namespace std;

int main()
{	
	initscr();			/* Start curses mode 		  */
	printw("Hello World !!!",30,10);	/* Print Hello World		  */
	
        refresh();			/* Print it on to the real screen */
	char ch=getchar();			/* Wait for user input */
	if(ch== KEY_LEFT)
		cout<<"Left key";
	refresh();
	getch();
	endwin();			/* End curses mode		  */

	return 0;
}
