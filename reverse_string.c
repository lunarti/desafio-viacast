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
  int N = strlen(in);
  for (i = 0; i < N/2; ++i) {
    char c = in[i];
    in[i] = in[N - i];
    in[N - i] = c;
  }
}

int main(int argc, char **argv) {
  char string_in[50];
  char stringReversed[50];

  printf("Enter the string to be reversed:\n>>");
  fgets(string_in, sizeof(string_in), stdin);
  // ignore '\n' sent from stdin
  string_in[strlen(string_in) - 1] = '\0';

  reverseString(string_in, stringReversed);
  printf("reversed = '%s'\n", stringReversed);

  reverseStringInPlace(string_in);
  printf("reversed in place = '%s'\n", string_in);

  return 0;
}