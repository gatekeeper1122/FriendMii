#ifndef FRIENDMII_TOUCH_H
#define FRIENDMII_TOUCH_H

#define TouchInRect(x1, y1, x2, y2) ((Touch_GetX() >= (x1) && Touch_GetX() <= (x2)) && (Touch_GetY() >= (y1) && Touch_GetY() <= (y2)))

u16 Touch_GetX(void);
u16 Touch_GetY(void);

#endif
