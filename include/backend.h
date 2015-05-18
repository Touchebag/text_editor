#ifndef BACKEND_H_
#define BACKEND_H_

#include <ncurses.h>

// Initiation/exit
int backend_init();
int backend_exit();

// Character interface
int backend_get_char();
int backend_put_char(int);

#endif
