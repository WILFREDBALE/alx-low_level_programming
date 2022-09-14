#include "main"
/**
 * jack_bauer - function prints every minute of the day of jack Bauer, start1
 * n from 00:00 to 23:59, minute loop counts minutes, while hour loop counts hours
 * and resets minutes
 * Return: 0
 */
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int hours_remainder;
int minutes_remainder;
while (hours <= 23)
{
while (minutes <= 59)
{
av
hours_remainder = hours % 10;
putchar(hours / 10 + '0')
putchar(':');
putchar(minutes /10 + '0');
minutes++;
putchar('\n');
}
hours++;
minutes = 0;
}
}
