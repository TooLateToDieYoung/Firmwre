#ifndef _COMMON_H_
#define _COMMON_H_

/* **********
	Useful Tools Def.
*/
#define _BIT(offset)      ( 1 << offset )
#define _MASK(flag, bits) ( ( flag ) & ( bits ) )

/* **********
  Types Def.
*/
typedef unsigned char  uint8_t ;
typedef unsigned short uint16_t;
typedef unsigned int   uint32_t;

typedef signed char    sint8_t ;
typedef signed short   sint16_t;
typedef signed int     sint32_t;

typedef unsigned char  flag8_t;
typedef unsigned short flag16_t;
typedef unsigned int   flag32_t;

typedef unsigned int   size_t;

typedef enum { False = 0, True = !False } bool_t;
typedef enum { Success, Fail = !Success } task_t;

/* **********
  APIs
*/

#endif // _COMMON_H_