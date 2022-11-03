wrapper for arduino-logger
in order to use the logger, you have to include LoggerConfigurator.h and [optionally]

#define LOG_BUFFER_SIZE (default is 512)
#define LOG_LEVEL (default is warning, available levels are listed below)
 
 /// Logging is disabled
#define LOG_LEVEL_OFF 0
/// Indicates the system is unusable, or an error that is unrecoverable
#define LOG_LEVEL_CRITICAL 1
/// Indicates an error condition
#define LOG_LEVEL_ERROR 2
/// Indicates a warning condition
#define LOG_LEVEL_WARNING 3
/// Informational messages
#define LOG_LEVEL_INFO 4
/// Debug-level messages
#define LOG_LEVEL_DEBUG 5

//log by using 
logdebug()
loginfo()
logwarning()
logerror()
logcritical()

//flush with
logflush()

printf codes are supported