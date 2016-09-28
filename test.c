#include <stdlib.h>
#include <stdio.h>
#include "function.h"
int main()
{
	unsigned char buffer[256];
	int result;

  unsigned char res;

  unsigned char snr[4] = {0, 0, 0, 0};

  int errorno = GET_SNR(0x26, 0x00, &res, snr);
  if ( errorno >= 0 )
    {
      printf("everything looks fine res: %d errorno: %d, carnum: ", snr[0], errorno);
      int i;
      for(i=0; i<4; i++)
        printf("%x",snr[i]);
      printf("\n");
    }
  else
    {
      printf("GET_SNR error %d\n",  errorno);
    }
	return 0;
}
