#ifndef _ILI9341_t3_font_CourierNewItalic_
#define _ILI9341_t3_font_CourierNewItalic_

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

extern const ILI9341_t3_font_t CourierNew_8_Italic;
extern const ILI9341_t3_font_t CourierNew_9_Italic;
extern const ILI9341_t3_font_t CourierNew_10_Italic;
extern const ILI9341_t3_font_t CourierNew_11_Italic;
extern const ILI9341_t3_font_t CourierNew_12_Italic;
extern const ILI9341_t3_font_t CourierNew_13_Italic;
extern const ILI9341_t3_font_t CourierNew_14_Italic;
extern const ILI9341_t3_font_t CourierNew_16_Italic;
extern const ILI9341_t3_font_t CourierNew_18_Italic;
extern const ILI9341_t3_font_t CourierNew_20_Italic;
extern const ILI9341_t3_font_t CourierNew_24_Italic;
extern const ILI9341_t3_font_t CourierNew_28_Italic;
extern const ILI9341_t3_font_t CourierNew_32_Italic;
extern const ILI9341_t3_font_t CourierNew_40_Italic;
extern const ILI9341_t3_font_t CourierNew_48_Italic;
extern const ILI9341_t3_font_t CourierNew_60_Italic;
extern const ILI9341_t3_font_t CourierNew_72_Italic;
extern const ILI9341_t3_font_t CourierNew_96_Italic;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
