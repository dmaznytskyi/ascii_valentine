/* ************************************************************************** */
/*                                                                            */
/*                                                     _____    ______        */
/*   ascii_valentine.c                                (____ \  |  ___ \       */
/*                                                     _   \ \ | | _ | |      */
/*   By: dmaznytskyi <dmaznytskyi@gmail.com>          | |   | || || || |      */
/*                                                    | |__/ / | || || |      */
/*   Created: 2017/02/14 23:19:06 by dmaznytskyi      |_____/  |_||_||_|      */
/*   Updated: 2017/02/16 00:49:24 by dmaznytskyi                              */
/*                                                                            */
/* ************************************************************************** */

#define true 1
#define false 0
#define RED "\033[0;31m" 
#define PURPLE "\033[0;35m" 
#define LGRAY "\033[0;37m" 
#define DGRAY "\033[1;30m" 
#define LRED "\033[1;31m" 
#define LPURPLE "\033[1;35m" 
#define WHITE "\033[1;37m" 
#define NC "\033[0m"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*#include <time.h>*/
/*
void	sleep(long milli)
{
	clock_t end, current = clock();
	for(end = current + milli; current < end; current = clock());
}
*/
void	usage_show(void)
{
	printf("Как это использовать:\n");
	printf("valentine 1\n");
	printf("valentine 2\n");
	printf("valentine 3\n");
	printf("valentine 4\n");
	printf("Попробуй, тебе должно понравиться) \n");
	exit(0);
}

void	frame1(char *c, char *cl1, char *cl2, char *cl3, char *cl4)
{
	printf("%s		.....           .....         		%s\n", cl1, c);
	printf("%s	    ,ad8PPPP88b,     ,d88PPPP8ba,     		%s\n", cl2, c);
	printf("%s	   d8P\"      \"Y8b, ,d8P\"      \"Y8b    	%s\n", cl3, c);
	printf("%s	  dP'           \"8a8\"           `Yd  	%s\n", cl4, c);
	printf("%s	  8(              \"              )8  		%s\n", cl1, c);
	printf("%s	  I8                             8I  		%s\n", cl2, c);
	printf("%s	   Yb,                         ,dP   		%s\n", cl3, c);
	printf("%s	    \"8a,                     ,a8\"    	%s\n", cl4, c);
	printf("%s	      \"8a,                 ,a8\"      	%s\n", cl1, c);
	printf("%s	        \"Yba             adP\"         	%s\n", cl2, c);
	printf("%s	          `Y8a         a8P'           		%s\n", cl3, c);
	printf("%s	    	    `88,     ,88'             		%s\n", cl4, c);
	printf("%s		      \"8b   d8\"               	%s\n", cl1, c);
	printf("%s		       \"8b d8\"                	%s\n", cl2, c);
	printf("%s		        `888'                 		%s\n", cl3, c);
	printf("%s		          \"                   		%s\n", cl4, c);
}

void	frame2(char *c1, char *c2, char *c3, char *c4)
{
	printf("	%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX\n"NC,
			c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1);
	printf("	%sO"NC":::::::::::::::::::::::::::::::::::::::::::::::::::::::%sO\n"NC,c4,c2);
	printf("	%sX"NC":::::::::::::::::::::::::::::::::::::::::::::::::::::::%sX\n"NC,c3,c3);
	printf("	%sO"NC"::::::::::::           :::::::::           ::::::::::::%sO\n"NC,c2,c4);
	printf("	%sX"NC":::::::::                :::::                :::::::::%sX\n"NC,c1,c1);
	printf("	%sO"NC":::::::       "RED"*********"NC"    :    "RED"*********"NC"       :::::::%sO\n"NC,c4,c2);
	printf("	%sX"NC":::::      *****     *****   *****     *****      :::::%sX\n"NC,c3,c3);
	printf("	%sO"NC"::::     ****           *******           ****     ::::%sO\n"NC,c2,c4);
	printf("	%sX"NC":::     ****              ***              ****     :::%sX\n"NC,c1,c1);
	printf("	%sO"NC":::     ****               *               ****     :::%sO\n"NC,c4,c2);
	printf("	%sX"NC"::::     ****                             ****     ::::%sX\n"NC,c3,c3);
	printf("	%sO"NC":::::     ****                           ****     :::::%sO\n"NC,c2,c4);
	printf("	%sX"NC":::::::     ****                       ****     :::::::%sX\n"NC,c1,c1);
	printf("	%sO"NC":::::::::     ****                   ****     :::::::::%sO\n"NC,c4,c2);
	printf("	%sX"NC":::::::::::     ****               ****     :::::::::::%sX\n"NC,c3,c3);
	printf("	%sO"NC"::::::::::::::     ****         ****     ::::::::::::::%sO\n"NC,c2,c4);
	printf("	%sX"NC":::::::::::::::::     ****   ****     :::::::::::::::::%sX\n"NC,c1,c1);
	printf("	%sO"NC"::::::::::::::::::::     *****     ::::::::::::::::::::%sO\n"NC,c4,c2);
	printf("	%sX"NC":::::::::::::::::::::::    *    :::::::::::::::::::::::%sX\n"NC,c3,c3);
	printf("	%sO"NC":::::::::::::::::::::::::     :::::::::::::::::::::::::%sO\n"NC,c2,c4);
	printf("	%sX"NC"::::::::::::::::::::::::::: :::::::::::::::::::::::::::%sX\n"NC,c1,c1);
	printf("	%sO"NC":::::::::::::::::::::::::::::::::::::::::::::::::::::::%sO\n"NC,c4,c2);
	printf("	%sX"NC":::::::::::::::::::::::::::::::::::::::::::::::::::::::%sX\n"NC,c3,c3);
	printf("	%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO%sX%sO\n"NC,
			c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4,c1,c2,c3,c4);
}

void	mode1(void)
{
	while (true)
	{
		system("clear");
		frame1(NC, RED, LRED, LGRAY, WHITE);
		usleep(200000);
		system("clear");
		frame1(NC, WHITE, RED, LRED, LGRAY);
		usleep(200000);
		system("clear");
		frame1(NC, LGRAY, WHITE, RED, LRED);
		usleep(200000);
		system("clear");
		frame1(NC, LRED, LGRAY, WHITE, RED);
		usleep(200000);
	}
}

void	mode2(void)
{
	while (true)
	{
		system("clear");
		frame1(NC, PURPLE, LPURPLE, LGRAY, WHITE);
		usleep(200000);
		system("clear");
		frame1(NC, WHITE, PURPLE, LPURPLE, LGRAY);
		usleep(200000);
		system("clear");
		frame1(NC, LGRAY, WHITE, PURPLE, LPURPLE);
		usleep(200000);
		system("clear");
		frame1(NC, LPURPLE, LGRAY, WHITE, PURPLE);
		usleep(200000);
	}
}

void	mode3(void)
{	
	while (true)
	{
		system("clear");
		frame2(PURPLE, LPURPLE, LGRAY, WHITE);
		usleep(200000);
		system("clear");
		frame2(WHITE, PURPLE, LPURPLE, LGRAY);
		usleep(200000);
		system("clear");
		frame2(LGRAY, WHITE, PURPLE, LPURPLE);
		usleep(200000);
		system("clear");
		frame2(LPURPLE, LGRAY, WHITE, PURPLE);
		usleep(200000);
	}
}

void	mode4(void)
{}

int		main(int ac, char **av)
{
	if (ac != 2)
		usage_show();
	switch (atoi(av[1]))
	{
		case 1: mode1(); break ;
		case 2: mode2(); break ;
		case 3: mode3(); break ;
		case 4: mode4(); break ;
		default: usage_show(); break ;
	}
	return (0);
}
