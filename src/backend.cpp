#include <backend.h>

namespace backend {

  void init() {
    // Clear and prepare screen
    initscr();

    // Do not echo while typing
    noecho();

    // Do not wait for enter
    cbreak();
  };

  void exit() {
    endwin();
  };

  int get_char() {
    return getch();
  };

  void put_char(int ch) {
    addch(ch);
  };

  dim get_window_size() {
    dim xy;
    xy.x = 0;
    xy.y = 0;
    getmaxyx(stdscr, xy.y, xy.x);

    return xy;
  };

}
