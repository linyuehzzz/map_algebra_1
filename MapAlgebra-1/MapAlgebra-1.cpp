// MapAlgebra-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "BMPBasics.h"

int main()
{
	BMPBasics *bmpBasics = new BMPBasics("src1.bmp", "src2.bmp", "dst1.bmp", "dst2.bmp", "dst3.bmp");
	bmpBasics->ProcessBMP();

    return 0;
}

