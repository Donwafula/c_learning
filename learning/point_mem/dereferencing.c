#include <stdio.h>
void go_south_east(int *lat, int *lon);

/**
 * main - program to practice dereferencing
 * Return: 0
 */
int main(void)
{
	int latitude = 32, longitude = -64;

	go_south_east(&latitude, &longitude);
	printf("lat: %d, long: %d\n", latitude, longitude);
	return (0);
}

/**
 * go_south_east - function to practice dereferencing
 * @lat: argument 1
 * @lon: argument 2
 */
void go_south_east(int *lat, int *lon)
{
	*lat -= 1, *lon += 1;
}
