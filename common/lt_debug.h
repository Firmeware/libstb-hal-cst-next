#ifndef __LT_DEBUG_H
#define __LT_DEBUG_H

#define TRIPLE_DEBUG_AUDIO	0
#define TRIPLE_DEBUG_VIDEO	1
#define TRIPLE_DEBUG_DEMUX	2
#define TRIPLE_DEBUG_PLAYBACK	3
#define TRIPLE_DEBUG_PWRMNGR	4
#define TRIPLE_DEBUG_INIT	5
#define TRIPLE_DEBUG_CA		6
#define TRIPLE_DEBUG_RECORD	7
#define TRIPLE_DEBUG_ALL	((1<<8)-1)

#define HAL_DEBUG_AUDIO		0
#define HAL_DEBUG_VIDEO		1
#define HAL_DEBUG_DEMUX		2
#define HAL_DEBUG_PLAYBACK	3
#define HAL_DEBUG_PWRMNGR	4
#define HAL_DEBUG_INIT		5
#define HAL_DEBUG_CA		6
#define HAL_DEBUG_RECORD	7
#define HAL_DEBUG_ALL		((1<<8)-1)

extern int debuglevel;

void hal_set_threadname(const char *name);
void _lt_debug(int facility, const void *, const char *fmt, ...) __attribute__ ((format (printf, 3, 4)));
void _lt_info(int facility, const void *, const char *fmt, ...)  __attribute__ ((format (printf, 3, 4)));
void lt_debug_init(void);
#endif
