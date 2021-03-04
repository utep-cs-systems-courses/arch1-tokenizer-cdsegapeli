#include <stdio.h>
#include "tokenizer.h"
const int MAX = 50;

int main()
{
  char str[MAX];
  
  while (1){
    printf("> ");
    fgets(str, MAX, stdin);

    if (str[0] == 'q' && str[2] == '\0'){
      goto exit;
    }
    else{
      printf("%s", str);
      printf("\n");
      char **tokens = tokenize(&str[0]);
      print_tokens(tokens);

    }
  }
 exit:
  return 0;
}
