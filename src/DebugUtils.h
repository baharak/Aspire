#pragma once

#include <chrono>

static int tic=0,toc=0,debugOn=0;
#define step() if(debugOn)    {  toc=tic; \
using namespace std::chrono; \
tic=duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count(); \
printf("Elapsed: %d\n",tic-toc); }
#define pauseReadChar() if(debugOn)   { scanf("%*c"); }
#define pri(_ii)  if(debugOn) { printf("%d\n",_ii); }
#define prf(_dd)  if(debugOn) { printf("%f\n",_dd); }
#define prs(_ss)  if(debugOn) { printf(_ss); }
#define PILL_DEBUG extern int tic,toc,debugOn;
#define debugMode(__open)  debugOn=__open;
