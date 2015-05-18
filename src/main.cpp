#include <stdio.h>
#include <backend.h>

int main(){
  backend::init();

  char ch = 0;
  while(ch != 27){
    ch = backend::get_char();

    backend::put_char(ch);
  };

  backend::exit();

  return 0;
}
