#ifndef __HISTOLOG_H__
#define __HISTOLOG_H__ 1

#include <glib.h>

#include "jabglue.h"

void hlog_enable(guint enable, char *root_dir, guint loadfile);
void hlog_read_history(const char *jid, GList **p_buddyhbuf, guint width);
inline void hlog_write_message(const char *jid, time_t timestamp, int sent,
        const char *msg);
inline void hlog_write_status(const char *jid, time_t timestamp,
        enum imstatus status, const char *status_msg);

#endif /* __HISTOLOG_H__ */

