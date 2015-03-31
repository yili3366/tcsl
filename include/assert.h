#ifndef ASSERT_H_INCLUDED
#define ASSERT_H_INCLUDED

#undef assert

#ifndef  NDEBUG
#define assert(test)  ((void)0)
#else
    void _Assert(char *);
    #define _STR(x) _VAL(x)
    #define _VAL(x) #x
    #define assert(test)    ((test) ? (void) 0 \
        : _Assert (__FILE__ ":" _STR(__LINE__) " " #test))
#endif // NDEBUG



#endif // ASSERT_H_INCLUDED
