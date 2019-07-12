#include "global.h"

extern u16 gUnknown_20251F0[0x400 / 2];
extern u8 gUnknown_20251D0[0x20];

void InitBGPaletteBuffer() {
  u16 r2;
  u16 * r1;
  u32 r0;
  u8 * secondDumbArray;

  r2 = 0;
  r1 = gUnknown_20251F0;
  r0 = 0x80 << 2;

  do {
    *r1 = r2;
    r1 += 2;
    r0--;
  } while(r0 != 0);

  secondDumbArray = gUnknown_20251D0;
  r2 = 1;
  secondDumbArray += 0x1F;

  do {
    *secondDumbArray = r2;
    secondDumbArray--;
  } while(secondDumbArray>=gUnknown_20251D0);
  return;
}
