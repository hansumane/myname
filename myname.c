#include <stdio.h>
#include <string.h>

static char *program_path;
static size_t i;

int main(int argc, char **argv)
{
  program_path = argv[0];

  if (program_path[0] == '.' && program_path[1] == '/')
    program_path += 2;
  else if (program_path[0] == '/')
    {
      for (i = strlen(program_path) - 1; i >= 0; --i)
        if (program_path[i] == '/')
            break;
      program_path += ++i;
    }

  puts(program_path);

  return 0;
}
