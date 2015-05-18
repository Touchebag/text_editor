#ifndef BACKEND_H_
#define BACKEND_H_

/**
 * Backend interface
 * Used to abstract it away from the rest of the code
 *
 * Many functions have similar names to lirary functions
 * hence the decision to use namespace
 */

#include <ncurses.h>

namespace backend {

  struct dim {
    int x;
    int y;
  };

  // Initiation/exit
  void init();
  void exit();

  // Character interface
  int  get_char();
  void put_char(int);

  dim get_window_size();

}

#endif
