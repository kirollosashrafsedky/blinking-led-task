/* Basic */
#include "blinking-led-task.h"
#include "Mcal/lib/core.h"
#include "Mcal/lib/registers.h"
#include "Infrastructure/types.h"

/* MCAL */
#include "Mcal/Timer/timer.h"

/* ECUAL */
#include "Ecual/Led/led.h"

int main(void) {
	LED_init(PA0, LED_OFF, LED_POSITIVE_LOGIC);
	while(1)
	{
		LED_toggle(PA0);
		timer_delay(300);
	}
}

