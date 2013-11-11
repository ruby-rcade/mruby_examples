#include <stdlib.h>
#include <stdio.h>

#include <mruby.h>
#include <mruby/compile.h>

static mrb_value my_c_method(mrb_state *mrb, mrb_value value)
{
  puts("Called my C method");
  return value;
}

int main(void)
{
  mrb_state *mrb = mrb_open();

  struct RClass *mymodule = mrb_define_module(mrb, "MyModule");
  mrb_define_class_method(mrb, mymodule, "my_c_method", my_c_method, MRB_ARGS_NONE());

  FILE *f = fopen("example.rb", "r");
  mrb_load_file(mrb, f);

  return 0;
}
