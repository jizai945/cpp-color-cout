#ifndef _HEAD_H
#define _HEAD_H
#include "color.h"

#ifdef _D
#define DBG(fmt, args...) printf(fmt, ##args)
#else
#define DBG(fmt, args...)
#endif

#endif
