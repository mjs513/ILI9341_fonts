#ifndef _ILI9341_t3_font_GeorgiaBoldItalic_
#define _ILI9341_t3_font_GeorgiaBoldItalic_

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

extern const ILI9341_t3_font_t Georgia_8_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_9_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_10_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_11_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_12_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_13_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_14_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_16_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_18_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_20_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_24_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_28_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_32_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_40_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_48_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_60_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_72_Bold_Italic;
extern const ILI9341_t3_font_t Georgia_96_Bold_Italic;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
