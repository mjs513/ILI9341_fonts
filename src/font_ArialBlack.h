#ifndef _ILI9341_t3_font_ArialBlack_
#define _ILI9341_t3_font_ArialBlack_

#if __has_include(<RA8875.h>)
	#include "RA8875.h"
#elif __has_include(<ILI9488_t3.h>)
	#include "ILI9488_t3.h"
#elif __has_include(<ILI9341_t3n.h>)
	#include "ILI9341_t3n.h"
#elif __has_include(<ILI9341_t3.h>)
	#include "ILI9341_t3.h"
#elif __has_include(<ST7735_t3.h>)
	#include "HX8357_t3n.h"
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

extern const ILI9341_t3_font_t ArialBlack_8;
extern const ILI9341_t3_font_t ArialBlack_9;
extern const ILI9341_t3_font_t ArialBlack_10;
extern const ILI9341_t3_font_t ArialBlack_11;
extern const ILI9341_t3_font_t ArialBlack_12;
extern const ILI9341_t3_font_t ArialBlack_13;
extern const ILI9341_t3_font_t ArialBlack_14;
extern const ILI9341_t3_font_t ArialBlack_16;
extern const ILI9341_t3_font_t ArialBlack_18;
extern const ILI9341_t3_font_t ArialBlack_20;
extern const ILI9341_t3_font_t ArialBlack_24;
extern const ILI9341_t3_font_t ArialBlack_28;
extern const ILI9341_t3_font_t ArialBlack_32;
extern const ILI9341_t3_font_t ArialBlack_40;
extern const ILI9341_t3_font_t ArialBlack_48;
extern const ILI9341_t3_font_t ArialBlack_60;
extern const ILI9341_t3_font_t ArialBlack_72;
extern const ILI9341_t3_font_t ArialBlack_96;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
