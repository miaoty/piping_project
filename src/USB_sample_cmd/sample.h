#if defined(_WIN32)
#include <Windows.h>
#elif defined(linux) || defined(unix)
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>
#endif

#include <stdio.h>

#include "cmd.h"
#include "camera.h"
#include "display.h"

#define IR_SAMPLE_VERSION "0.1.2 alpha"


typedef enum {
	DEBUG_PRINT = 0,
	ERROR_PRINT,
	NO_PRINT,
}log_level_t;

//#define USER_FUNCTION_CALLBACK
