#ifndef _DSD_DEBUG_H
#define _DSD_DEBUG_H

enum dsd_log_levels {
  DSD_ERR = 1 << 0,
  DSD_WARN = 1 << 1,
  DSD_NOTICE = 1 << 2,
  DSD_INFO = 1 << 3,
  DSD_DEBUG = 1 << 4,

  DSD_COUNT =  6/* set to count of valid flags */
};

/**
 *  * set debug level, which level debug information can be print
 *   */
void dsd_set_log_level(int level);
int dsd_log_filter(int filter);

#define dsdl_notice(format, args...) \
	do {\
		if (dsd_log_filter(DSD_NOTICE)) {\
			fprintf(stderr, "[%s->%s->%d] ",__FILE__,__func__,__LINE__);\
			fprintf(stderr, format, ##args);\
		}\
	}while(0)

#define dsdl_warn(format, args...) \
	do {\
		if (dsd_log_filter(DSD_WARN)) {\
			fprintf(stderr, "[%s->%s->%d] ",__FILE__,__func__,__LINE__);\
			fprintf(stderr, format, ##args);\
		}\
	}while(0)

#define dsdl_info(format, args...) \
	do {\
		if (dsd_log_filter(DSD_INFO)) {\
			fprintf(stderr, "[%s->%s->%d] ",__FILE__,__func__,__LINE__);\
			fprintf(stderr, format, ##args);\
		}\
	}while(0)

#define dsdl_debug(format, args...) \
	do {\
		if (dsd_log_filter(DSD_DEBUG)) {\
			fprintf(stderr, "[%s->%s->%d] ",__FILE__,__func__,__LINE__);\
			fprintf(stderr, format, ##args);\
		}\
	}while(0)

#define dsdl_err(format, args...) \
	do {\
		if (dsd_log_filter(DSD_ERR)) {\
			fprintf(stderr, "[%s->%s->%d] ",__FILE__,__func__,__LINE__);\
			fprintf(stderr, format, ##args);\
		}\
	}while(0)

#endif
