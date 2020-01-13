#ifndef _ILI9341_t3_font_DroidSans_
#define _ILI9341_t3_font_DroidSans_

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

extern const ILI9341_t3_font_t DroidSans_8;
extern const ILI9341_t3_font_t DroidSans_9;
extern const ILI9341_t3_font_t DroidSans_10;
extern const ILI9341_t3_font_t DroidSans_11;
extern const ILI9341_t3_font_t DroidSans_12;
extern const ILI9341_t3_font_t DroidSans_13;
extern const ILI9341_t3_font_t DroidSans_14;
extern const ILI9341_t3_font_t DroidSans_16;
extern const ILI9341_t3_font_t DroidSans_18;
extern const ILI9341_t3_font_t DroidSans_20;
extern const ILI9341_t3_font_t DroidSans_24;
extern const ILI9341_t3_font_t DroidSans_28;
extern const ILI9341_t3_font_t DroidSans_32;
extern const ILI9341_t3_font_t DroidSans_40;
extern const ILI9341_t3_font_t DroidSans_48;
extern const ILI9341_t3_font_t DroidSans_60;
extern const ILI9341_t3_font_t DroidSans_72;
extern const ILI9341_t3_font_t DroidSans_96;

#ifdef __cplusplus
} // extern "C"
#endif

#endif