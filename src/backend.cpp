/**
 * Backend interface
 * Used to abstract it away from the rest of the code
 */
#include <backend.h>

int backend_init() {
  // Clear and prepare screen
  initscr();

  // Do not echo while typing
  noecho();

  // Do not wait for enter
  cbreak();
};

int backend_exit() {
  endwin();
};

int backend_get_char() {
  getch();
};

int backend_put_char(int ch) {
  addch(ch);
};
