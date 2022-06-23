#ifndef _ILI9341_t3_font_GeorgiaBold_
#define _ILI9341_t3_font_GeorgiaBold_

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

extern const ILI9341_t3_font_t Georgia_8_Bold;
extern const ILI9341_t3_font_t Georgia_9_Bold;
extern const ILI9341_t3_font_t Georgia_10_Bold;
extern const ILI9341_t3_font_t Georgia_11_Bold;
extern const ILI9341_t3_font_t Georgia_12_Bold;
extern const ILI9341_t3_font_t Georgia_13_Bold;
extern const ILI9341_t3_font_t Georgia_14_Bold;
extern const ILI9341_t3_font_t Georgia_16_Bold;
extern const ILI9341_t3_font_t Georgia_18_Bold;
extern const ILI9341_t3_font_t Georgia_20_Bold;
extern const ILI9341_t3_font_t Georgia_24_Bold;
extern const ILI9341_t3_font_t Georgia_28_Bold;
extern const ILI9341_t3_font_t Georgia_32_Bold;
extern const ILI9341_t3_font_t Georgia_40_Bold;
extern const ILI9341_t3_font_t Georgia_48_Bold;
extern const ILI9341_t3_font_t Georgia_60_Bold;
extern const ILI9341_t3_font_t Georgia_72_Bold;
extern const ILI9341_t3_font_t Georgia_96_Bold;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
