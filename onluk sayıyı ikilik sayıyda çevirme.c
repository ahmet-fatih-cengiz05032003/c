#include <stdio.h>
#include<locale.h>
void IntToBin(int val);

int main(void)
{
setlocale(LC_ALL, "Turkish");	
  int id;

  printf("Ýkili sayý sisteminde gösterilecek int bir deðer giriniz: ");
  scanf("%d", &id);

  IntToBin(id);

  return 0;
}

void IntToBin(int val)
{
  char cdizi[100];
  int bitsayi = sizeof(val) * 8;
  unsigned int u = *(unsigned int*)&val;
  unsigned int mask = 1 << (bitsayi-1);
  int id;

  for (id=0; id<bitsayi; id++, mask >>= 1) {
      cdizi[id] = (u & mask) ? '1' : '0';
  }
  cdizi[id] = '\0';
  printf("%d: %s\n", val, cdizi);
}
