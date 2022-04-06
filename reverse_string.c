#include <stdio.h>
#include <string.h>

void reverseString(char *in, char *out) {
  int i, j;
  int N = strlen(in);
  for (i = 0, j = N - 1; j >= 0; ++i, --j) {
    out[i] = in[j];
  }
  out[N] = '\0';
}

void reverseStringInPlace(char *in) {
  int i;
  int N = strlen(in)-1; // '-1' garante que não se troque o final da string '/0'
  for (i = 0; i <= N/2; ++i) // '<=' garante que toda string seja invertida
  { 
    char c = in[i];
    in[i] = in[N - i];
    in[N - i] = c;
  }
}

int main(int argc, char **argv) {
  char string_in[50];
  char stringReversed[50];

  printf("Enter the string to be reversed:\n>>");
  gets(string_in);

  reverseString(string_in, stringReversed);
  printf("reversed = '%s'\n", stringReversed);

  reverseStringInPlace(string_in);
  printf("reversed in place = '%s'\n", string_in);

  return 0;
}
