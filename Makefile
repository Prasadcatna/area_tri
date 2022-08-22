all: main.c equi.c iso.c ra.c sc.c
	gcc main.c equi.c iso.c ra.c sc.c -o ap -lm -I.
