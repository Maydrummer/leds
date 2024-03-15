#include "leds.h"

#define LED_OFFSET  1
#define BIT_HIGH    1
#define SET_ZERO    0x00
static uint16_t * puntero;

static uint16_t led_to_mask(int led)
{
    return (BIT_HIGH << (led - LED_OFFSET));
}


void leds_init(uint16_t * puerto)
{
    puntero = puerto;
    * puerto = SET_ZERO;
}

void leds_turn_on(int led)
{
    * puntero |= led_to_mask(led);
}

void leds_turn_off(int led)
{
    * puntero &= ~(led_to_mask(led));
}