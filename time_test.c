#include <time.h>
#include <stdio.h>
#include <unistd.h>


#define AVG 1000000

int main()
{
	double avg_time_1 = 0;
	double avg_time_2 = 0;

	struct timespec begin, test, end;

	while(1)
	{
		clock_gettime(CLOCK_MONOTONIC_RAW, &begin);
		for (int i = 0; i < AVG; ++i)
		{
		/* ---------------Place your code to test here--------------*/

		time_t timer;
		time(&timer);



		/* ---------------------------------------------------------*/
		}
		clock_gettime(CLOCK_MONOTONIC_RAW, &end);
		avg_time_1 = (end.tv_nsec - begin.tv_nsec)/1000000000.0 + 
					(end.tv_sec - begin.tv_sec);



		clock_gettime(CLOCK_MONOTONIC_RAW, &begin);
		for (int i = 0; i < AVG; ++i)
		{
		/* ------------------And here to compare-------------------*/
		
			
   			clock_gettime(CLOCK_MONOTONIC_RAW, &test);


		/* --------------------------------------------------------*/
		}
		clock_gettime(CLOCK_MONOTONIC_RAW, &end);
		avg_time_2 = (end.tv_nsec - begin.tv_nsec)/1000000000.0 + 
					(end.tv_sec - begin.tv_sec);

		if (avg_time_1 < avg_time_2)
		{
			printf("First faster in: %f times 1: %f 2: %f \r", 
				avg_time_2/avg_time_1, avg_time_1, avg_time_2);
		}
		else
		{
			printf("Second faster in: %f times 1: %f 2: %f \r", 
				avg_time_1/avg_time_2, avg_time_1, avg_time_2);
		}
		
		fflush(stdout);
	}
	return 0;
}