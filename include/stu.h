/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int add(int i, int j, char *buffer);
int size_int(char *buffer);
void algo(int *liste_a, int sizea);
void stu_convert(int i, char *buffer);

void ra(int *listeA,int nbnbA);
void rb(int *listeB, int nbnbB);
void rc(int *listeA, int *listeB, int nbnbA, int nbnbB);
void pa(int *listeA,int *listeB,int nbnbA,int nbnbB);
void pb(int *listeA,int *listeB,int nbnbA,int nbnbB);
void rra(int *listeA, int nbnbA);
void rrb(int *listeB,int nbnbB);
void rrc(int *listeA, int *listeB, int nbnbA, int nbnbB);
void sa(int *listeA);
void sb(int *listeB);
void sc(int *listeA, int *listeB);
void sd(int *listeA, int *listeB);

#endif
