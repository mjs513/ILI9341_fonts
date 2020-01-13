#ifndef _ILI9341_t3_font_LiberationSerif_
#define _ILI9341_t3_font_LiberationSerif_

#if __has_include(<RA8875.h>)
	#include "RA8875.h"
#elif __has_include(<ILI9488.h>)
	#include "ili9488.h"
#elif __has_include(<ILI9341_t3n.h>)
	#include "ILI9341_t3n.h"
#elif __has_include(<ILI9341.h>)
	//#include "ili9341.h"
#elif __has_include(<ST7735_t3.h>)
	#include "ST7735_t3.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern const ILI9341_t3_font_t LiberationSerif_8;
extern const ILI9341_t3_font_t LiberationSerif_9;
extern const ILI9341_t3_font_t LiberationSerif_10;
extern const ILI9341_t3_font_t LiberationSerif_11;
extern const ILI9341_t3_font_t LiberationSerif_12;
extern const ILI9341_t3_font_t LiberationSerif_13;
extern const ILI9341_t3_font_t LiberationSerif_14;
extern const ILI9341_t3_font_t LiberationSerif_16;
extern const ILI9341_t3_font_t LiberationSerif_18;
extern const ILI9341_t3_font_t LiberationSerif_20;
extern const ILI9341_t3_font_t LiberationSerif_24;
extern const ILI9341_t3_font_t LiberationSerif_28;
extern const ILI9341_t3_font_t LiberationSerif_32;
extern const ILI9341_t3_font_t LiberationSerif_40;
extern const ILI9341_t3_font_t LiberationSerif_48;
extern const ILI9341_t3_font_t LiberationSerif_60;
extern const ILI9341_t3_font_t LiberationSerif_72;
extern const ILI9341_t3_font_t LiberationSerif_96;

#ifdef __cplusplus
} // extern "C"
#endif

#endif