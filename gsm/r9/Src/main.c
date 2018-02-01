//Decode_L3Downlink
//Decode_PLENDownlink
//Decode_Downlink_RLC_MAC

//DECODE_c_Measurement_information

#include <unistd.h>
#include <stdio.h>
#include "ed_c_recog.h"

#define SIZE 65537

int main(void)
{
	
	char* buf = (char *)malloc(SIZE);
	char* out = (char *)malloc(SIZE);
	int len = 0;

	while(buf != 0 && out != 0) //读取标准输入到buf中，返回读取字节数。
	{
		len = read(0, buf, SIZE);

		Decode_L3Downlink(buf, len, (TL3Downlink_Data*)out);
		Decode_PLENDownlink(buf, len, (TPLENDownlink_Data*) out);
		Decode_Downlink_RLC_MAC(buf, len, (TDownlink_RLC_MAC_Data*)out);
	}

	free(buf);
	free(out);

	return 0;
}
