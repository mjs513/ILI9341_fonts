#ifndef _ILI9341_t3_font_Arial_
#define _ILI9341_t3_font_Arial_

#if __has_include(<RA8875.h>)
	#include "RA8875.h"
#elif __has_include(<ILI9488.h>)
	#include "ili9488.h"
#elif __has_include(<ILI9341_t3n.h>)
	#include "ILI9341_t3n.h"
#elif __has_include(<ILI9341.h>)
	#include "ili9341.h"
#elif __has_include(<ST7735_t3.h>)
	#include "ST7735_t3.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern const ILI9341_t3_font_t Arial_8;
extern const ILI9341_t3_font_t Arial_9;
extern const ILI9341_t3_font_t Arial_10;
extern const ILI9341_t3_font_t Arial_11;
extern const ILI9341_t3_font_t Arial_12;
extern const ILI9341_t3_font_t Arial_13;
extern const ILI9341_t3_font_t Arial_14;
extern const ILI9341_t3_font_t Arial_16;
extern const ILI9341_t3_font_t Arial_18;
extern const ILI9341_t3_font_t Arial_20;
extern const ILI9341_t3_font_t Arial_24;
extern const ILI9341_t3_font_t Arial_28;
extern const ILI9341_t3_font_t Arial_32;
extern const ILI9341_t3_font_t Arial_40;
extern const ILI9341_t3_font_t Arial_48;
extern const ILI9341_t3_font_t Arial_60;
extern const ILI9341_t3_font_t Arial_72;
extern const ILI9341_t3_font_t Arial_96;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
