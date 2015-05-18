#include <stdio.h>
#include <ncurses.h>

int main(){
  initscr();
  noecho();
  cbreak();
  char ch = 0;
  while(ch != 27){
    ch = getch();
    addch(ch);
  };

  endwin();
  return 0;
}
