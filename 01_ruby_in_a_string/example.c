#include <stdlib.h>
#include <stdio.h>
#include <mruby.h>

int main(void)
{
  mrb_state *mrb = mrb_open();
  char code[] = "p 'hello world!'";
  mrb_load_string(mrb, code);
  return 0;
}
