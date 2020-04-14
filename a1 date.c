#include <time.h>
#include <stdio.h>

int main(void)
{
	time t my time;
	struct tm *ptr time;
	char buffer[15];
	time(&my time); // get the current time
	ptr time = localtime(&my time); // point to a tm structure
	// convert time to a specific string, and then output for display
	strftime(buffer, 15, "%m/%1d/%Y", ptr time);
	printf("Today is %s.\nHave a nice day!\n", buffer);

	return 0;
}
