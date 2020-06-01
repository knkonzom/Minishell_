#include <sys/cdefs.h>
#include <string.h>
#include <stdio.h>

#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)strsep.c	8.1 (Berkeley) 6/4/93";
#endif

char *ft_strsep(stringp, delim)
	register char **stringp;
	register const char *delim;
{
	register char *s;
	register const char *spanp;
	register int c, sc;
	char *tok;

	if ((s = *stringp) == NULL)
		return (NULL);
	for (tok = s;;) {
		c = *s++;
		spanp = delim;
		do {
			if ((sc = *spanp++) == c) {
				if (c == 0)
					s = NULL;
				else
					s[-1] = 0;
				*stringp = s;
				return (tok);
			}
		} while (sc != 0);
	}
	/* NOTREACHED */
}