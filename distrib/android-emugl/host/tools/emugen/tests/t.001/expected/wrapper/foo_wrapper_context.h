// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#ifndef __foo_wrapper_context_t_h
#define __foo_wrapper_context_t_h

#include "foo_wrapper_base.h"


struct foo_wrapper_context_t : foo_wrapper_base_t {

	 virtual ~foo_wrapper_context_t() {}

	typedef foo_wrapper_context_t *CONTEXT_ACCESSOR_TYPE(void);
	static void setContextAccessor(CONTEXT_ACCESSOR_TYPE *f);
	int initDispatchByName( void *(*getProc)(const char *name, void *userData), void *userData);
};

#endif
