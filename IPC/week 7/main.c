#include <stdio.h>
int flower(int colour);
int stem(int leaf);
void printArray(int array[]);
int main(void) {
  int planter[4];
  int garden[4] = {2, 3, 1, 7};
  int i = 0;
  planter[0] = (3 * 3 + 2) / 3;
  planter[1] = 9 % 4;
  planter[2] = 2 + 2 * 3 / 6;
  planter[3] = 6;
  planter[3] += 2;
  planter[3] *= 2;
  printArray(planter);
  printArray(garden);
  for (i = 0; i < 4; i++) {
    garden[i] += flower(garden[i]);
  }
  printArray(garden);
  return 0;
}
// this function prints all values in
// array on one line, separated by spaces
void printArray(int array[]) {
  int i;
  for (i = 0; i < 4; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
int stem(int leaf) {
  int rc = leaf++;
  printf("rc-s: %d leaf: %d\n", rc, leaf);
  return rc + leaf;
}
int flower(int colour) {
  int petals[4] = {5, 2, 6, 1};
  int bee = petals[colour % 4];
  printf("%d\n", bee);
  int rc = stem(bee);
  printf("rc-f: %d\n", rc);
  return rc;
}