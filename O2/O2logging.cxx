#include "O2logging.h"
#include <stdarg.h>
#include <time.h>

FILE *DEFAULT_REPORT_STREAM = NULL;
int REPORT_W_TIMESTAMPS = 0;
#ifndef _WIN32
int REPORT_W_COLORS = 1;
#else
int REPORT_W_COLORS = 0; // Windows cmd doesn't support ansi colors by default,
                         // if you want them install ansicon
                         // (http://adoxa.altervista.org/ansicon/)
#endif

static void vfreportf(FILE *stream, report_level_t level, int timestamped,
                      int colored, const char *format, va_list ap);

void report(report_level_t level, const char *format, ...) {
  va_list ap;
  va_start(ap, format);
  vfreportf(DEFAULT_REPORT_STREAM, level, REPORT_W_TIMESTAMPS, REPORT_W_COLORS,
            format, ap);
  va_end(ap);
}

void reportf(report_level_t level, int timestamped, int colored,
             const char *format, ...) {
  va_list ap;
  va_start(ap, format);
  vfreportf(DEFAULT_REPORT_STREAM, level, timestamped, colored, format, ap);
  va_end(ap);
}

void freport(FILE *stream, report_level_t level, const char *format, ...) {
  va_list ap;
  va_start(ap, format);
  vfreportf(stream, level, REPORT_W_TIMESTAMPS, REPORT_W_COLORS, format, ap);
  va_end(ap);
}

void freportf(FILE *stream, report_level_t level, int timestamped, int colored,
              const char *format, ...) {
  va_list ap;
  va_start(ap, format);
  vfreportf(stream, level, timestamped, colored, format, ap);
  va_end(ap);
}

static void vfreportf(FILE *stream, report_level_t level, int timestamped,
                      int colored, const char *format, va_list ap) {
  if (!stream)
    stream = stderr;
  const char *prefixes_colored[] = {
      "\033[1;32m[PASS]\033[0m", "\033[1;37m[INFO]\033[0m",
      "\033[0;31m[WARN]\033[0m", "\033[1;31m[FAIL]\033[0m"};
  const char *prefixes_blank[] = {"[PASS]", "[INFO]", "[WARN]", "[FAIL]"};
  if (timestamped) {
    if (colored)
      fprintf(stream, "\033[1;37m[%7.4f]", ((float)clock()) / CLOCKS_PER_SEC);
    else
      fprintf(stream, "[%7.4f]", ((float)clock()) / CLOCKS_PER_SEC);
  }

  if (colored)
    fprintf(stream, "%s", prefixes_colored[level]);
  else
    fprintf(stream, "%s", prefixes_blank[level]);
  vfprintf(stream, format, ap);
  fprintf(stream, "\n");
}
