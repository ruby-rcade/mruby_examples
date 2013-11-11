#include <stdlib.h>
#include <stdio.h>
#include <mruby.h>

int main(void)
{
  mrb_state *mrb = mrb_open();
  FILE *f = fopen("example.rb", "r");
  mrb_load_file(mrb, f);
  return 0;
}
