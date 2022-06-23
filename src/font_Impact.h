#ifndef _ILI9341_t3_font_Impact_
#define _ILI9341_t3_font_Impact_

#if __has_include(<RA8875.h>)
	#include "RA8875.h"
#elif __has_include(<ILI9488_t3.h>)
	#include "ILI9488_t3.h"
#elif __has_include(<ILI9341_t3n.h>)
	#include "ILI9341_t3n.h"
#elif __has_include(<ILI9341_t3.h>)
	#include "ILI9341_t3.h"
#elif __has_include(<ST7735_t3.h>)
	#include "ST7735_t3.h"
#elif __has_include(<HX8357_t3n.h>)
	#include "HX8357_t3n.h"
#elif __has_include(<GC9A01A_t3n.h>)
	#include "GC9A01A_t3n.h"
#else
	#include "def_ili9341_fonts.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern const ILI9341_t3_font_t Impact_8;
extern const ILI9341_t3_font_t Impact_9;
extern const ILI9341_t3_font_t Impact_10;
extern const ILI9341_t3_font_t Impact_11;
extern const ILI9341_t3_font_t Impact_12;
extern const ILI9341_t3_font_t Impact_13;
extern const ILI9341_t3_font_t Impact_14;
extern const ILI9341_t3_font_t Impact_16;
extern const ILI9341_t3_font_t Impact_18;
extern const ILI9341_t3_font_t Impact_20;
extern const ILI9341_t3_font_t Impact_24;
extern const ILI9341_t3_font_t Impact_28;
extern const ILI9341_t3_font_t Impact_32;
extern const ILI9341_t3_font_t Impact_40;
extern const ILI9341_t3_font_t Impact_48;
extern const ILI9341_t3_font_t Impact_60;
extern const ILI9341_t3_font_t Impact_72;
extern const ILI9341_t3_font_t Impact_96;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
