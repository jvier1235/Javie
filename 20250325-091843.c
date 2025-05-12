#include <stdio.h>

int main() {
int miarreglo[10];
int i=0;
while (i < 10){
miarreglo[i] = 2 *(i + 1);
i++;

}
i= 0;
while (i < 10){
printf ("2 * %d = %d \n", i + 1, miarreglo[i]);
i++;
}
  return 0;
  }