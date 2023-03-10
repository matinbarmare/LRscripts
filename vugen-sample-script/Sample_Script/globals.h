#ifndef _GLOBALS_H
#define _GLOBALS_H

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))


//--------------------------------------------------------------------
// Include Files
#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"




//--------------------------------------------------------------------
// Global Variables

int ITERATION_NUM=0,anomalyrandom=0;
double stime;
int intTime;
double scale;
char  *os;
double mystime,transtime;
double IterStime,RThinkTime;
int	nUserIndex=0 ;
char *vuser_group;

long starttime;
long currenttime;
long timediff;
long delay = 300;
long reset = 120;
long transcount,basereset,basedelay,randdelay,randerror;
int IterTransNum;

#endif // _GLOBALS_H
