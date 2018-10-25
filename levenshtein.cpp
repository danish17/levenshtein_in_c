#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
	char str1[100],str2[100];
	puts("Enter first string: ");
	gets(str1);
	puts("Enter second string: ");
	gets(str2);
  unsigned int length = strlen(str1);
  unsigned int length_2 = strlen(str2);
  unsigned int *cache = (unsigned int*)calloc(length, sizeof(unsigned int));
  unsigned int index = 0;
  unsigned int index_2 = 0;
  unsigned int distance;
  unsigned int distance_2;
  unsigned int changes;
  char code;

  if (str1 == str2) {
    return 0;
  }

  if (length == 0) {
  	printf("%d",length_2);
  }

  if (length_2 == 0) {
  	printf("%d",length);
  }

  /* initialize the vector. */
  while (index < length) {
    cache[index] = index + 1;
    index++;
  }

  /* Loop. */
  while (index_2 < length_2) {
    code = str2[index_2];
    changes = distance = index_2++;
    index = -1;

    while (++index < length) {
      distance_2 = code == str1[index] ? distance : distance + 1;
      distance = cache[index];

      cache[index] = changes = distance > changes
        ? distance_2 > changes
          ? changes + 1
          : distance_2
        : distance_2 > distance
          ? distance + 1
          : distance_2;
    }
  }

  free(cache);
  printf("%d",changes);
}
