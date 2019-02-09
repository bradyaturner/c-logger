#include "logger.h"

#ifdef LOG_LEVEL
#undef LOG_LEVEL
#define LOG_LEVEL LOG_TRACE
#endif

int main( int argc, char* argv[] ){
	log_trace("%s", "This is a log at level TRACE");
	log_debug("%s", "This is a log at level DEBUG");
	log_info("%s", "This is a log at level INFO");
	log_warn("%s", "This is a log at level WARN");
	log_error("%s", "This is a log at level ERROR");
	log_fatal("%s", "This is a log at level FATAL");
}

