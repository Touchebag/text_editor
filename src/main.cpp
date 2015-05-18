#include <stdio.h>
#include <backend.h>

int main(){
  backend_init();

  char ch = 0;
  while(ch != 27){
    ch = backend_get_char();
    backend_put_char(ch);
  };

  backend_exit();

  return 0;
}
