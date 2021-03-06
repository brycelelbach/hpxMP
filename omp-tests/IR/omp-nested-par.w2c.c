/*******************************************************
 * C file translated from WHIRL Wed Oct  2 19:30:30 2013
 *******************************************************/

/* Include file-level type and variable decls */
#include "omp-nested-par.w2c.h"


__inline _INT32 vprintf(
  const _INT8 * restrict __fmt,
  struct __va_list_tag * __arg)
{
  
  register _UINT64 _w2c___fmt0;
  register _UINT64 _w2c_reg5;
  register _UINT64 _w2c___arg0;
  register _UINT64 _w2c_reg6;
  register _INT64 _w2c_reg7;
  register _INT32 _w2c___comma;
  
  _w2c___fmt0 = _w2c_reg5;
  _w2c___arg0 = _w2c_reg6;
  _w2c_reg5 = (_UINT64)(stdout);
  _w2c_reg6 = (_UINT64)((const _INT8 *) _w2c___fmt0);
  _w2c_reg7 = (_INT64)((struct __va_list_tag *) _w2c___arg0);
  _w2c___comma = vfprintf(stdout, (const _INT8 *) _w2c___fmt0, (struct __va_list_tag *) _w2c___arg0);
  return _w2c___comma;
} /* vprintf */


__inline _INT32 getchar()
{
  
  register _INT64 _w2c_reg5;
  register _INT32 _w2c___comma;
  
  _w2c_reg5 = (_INT64)(stdin);
  _w2c___comma = _IO_getc(stdin);
  return _w2c___comma;
} /* getchar */


__inline _INT32 fgetc_unlocked(
  struct _IO_FILE * __fp)
{
  
  register _UINT64 _w2c___fp0;
  register _UINT64 _w2c_reg5;
  register _UINT64 _w2c_preg;
  struct _IO_FILE _tmp0;
  register _INT32 _w2c___comma;
  register _INT32 _w2c___cselect;
  
  _w2c___fp0 = _w2c_reg5;
  _tmp0 = (struct _IO_FILE)((struct _IO_FILE *) _w2c___fp0) -> _IO_read_ptr;
  _w2c_preg = *(_UINT64 *) & _tmp0;
  if(!((_INT64)((_INT64) EXPECT((_UINT64)((struct _IO_FILE)((struct _IO_FILE *) _w2c___fp0) -> _IO_read_end) <= _w2c_preg, (_INT64) 0U)) != (_INT64)(0U)))
    goto _770;
  _w2c_reg5 = (_UINT64)((struct _IO_FILE *) _w2c___fp0);
  _w2c___comma = __uflow((struct _IO_FILE *) _w2c___fp0);
  _w2c___cselect = _w2c___comma;
  goto _1026;
  _770 :;
  ((struct _IO_FILE *) _w2c___fp0) -> _IO_read_ptr = (_INT8 *)(_w2c_preg + (_UINT64)(1U));
  _w2c___cselect = (_INT32) * ((_UINT8 *) _w2c_preg);
  _1026 :;
  return _w2c___cselect;
} /* fgetc_unlocked */


__inline _INT32 getc_unlocked(
  struct _IO_FILE * __fp)
{
  
  register _UINT64 _w2c___fp0;
  register _UINT64 _w2c_reg5;
  register _UINT64 _w2c_preg;
  struct _IO_FILE _tmp0;
  register _INT32 _w2c___comma;
  register _INT32 _w2c___cselect;
  
  _w2c___fp0 = _w2c_reg5;
  _tmp0 = (struct _IO_FILE)((struct _IO_FILE *) _w2c___fp0) -> _IO_read_ptr;
  _w2c_preg = *(_UINT64 *) & _tmp0;
  if(!((_INT64)((_INT64) EXPECT((_UINT64)((struct _IO_FILE)((struct _IO_FILE *) _w2c___fp0) -> _IO_read_end) <= _w2c_preg, (_INT64) 0U)) != (_INT64)(0U)))
    goto _770;
  _w2c_reg5 = (_UINT64)((struct _IO_FILE *) _w2c___fp0);
  _w2c___comma = __uflow((struct _IO_FILE *) _w2c___fp0);
  _w2c___cselect = _w2c___comma;
  goto _1026;
  _770 :;
  ((struct _IO_FILE *) _w2c___fp0) -> _IO_read_ptr = (_INT8 *)(_w2c_preg + (_UINT64)(1U));
  _w2c___cselect = (_INT32) * ((_UINT8 *) _w2c_preg);
  _1026 :;
  return _w2c___cselect;
} /* getc_unlocked */


__inline _INT32 getchar_unlocked()
{
  
  register _UINT64 _w2c_stdin0;
  register _UINT64 _w2c_preg;
  struct _IO_FILE _tmp0;
  register _INT64 _w2c_reg5;
  register _INT32 _w2c___comma;
  register _INT32 _w2c___cselect;
  
  _w2c_stdin0 = (_UINT64)(stdin);
  _tmp0 = (struct _IO_FILE)((struct _IO_FILE *) _w2c_stdin0) -> _IO_read_ptr;
  _w2c_preg = *(_UINT64 *) & _tmp0;
  if(!((_INT64)((_INT64) EXPECT((_UINT64)((struct _IO_FILE)((struct _IO_FILE *) _w2c_stdin0) -> _IO_read_end) <= _w2c_preg, (_INT64) 0U)) != (_INT64)(0U)))
    goto _770;
  _w2c_reg5 = (_INT64)((struct _IO_FILE *) _w2c_stdin0);
  _w2c___comma = __uflow((struct _IO_FILE *) _w2c_stdin0);
  _w2c___cselect = _w2c___comma;
  goto _1026;
  _770 :;
  ((struct _IO_FILE *) _w2c_stdin0) -> _IO_read_ptr = (_INT8 *)(_w2c_preg + (_UINT64)(1U));
  _w2c___cselect = (_INT32) * ((_UINT8 *) _w2c_preg);
  _1026 :;
  return _w2c___cselect;
} /* getchar_unlocked */


__inline _INT32 putchar(
  _INT32 __c)
{
  
  register _INT32 _w2c___c0;
  register _INT64 _w2c_reg5;
  register _INT64 _w2c_reg6;
  register _INT32 _w2c___comma;
  
  _w2c___c0 = (_INT32) _w2c_reg5;
  _w2c_reg5 = _w2c___c0;
  _w2c_reg6 = (_INT64)(stdout);
  _w2c___comma = _IO_putc(_w2c___c0, stdout);
  return _w2c___comma;
} /* putchar */


__inline _INT32 fputc_unlocked(
  _INT32 __c,
  struct _IO_FILE * __stream)
{
  
  register _INT32 _w2c___c0;
  register _INT64 _w2c_reg5;
  register _UINT64 _w2c___stream0;
  register _UINT64 _w2c_reg6;
  register _UINT64 _w2c_preg;
  struct _IO_FILE _tmp0;
  register _INT32 _w2c___comma;
  register _INT32 _w2c___cselect;
  
  _w2c___c0 = (_INT32) _w2c_reg5;
  _w2c___stream0 = _w2c_reg6;
  _tmp0 = (struct _IO_FILE)((struct _IO_FILE *) _w2c___stream0) -> _IO_write_ptr;
  _w2c_preg = *(_UINT64 *) & _tmp0;
  if(!((_INT64)((_INT64) EXPECT((_UINT64)((struct _IO_FILE)((struct _IO_FILE *) _w2c___stream0) -> _IO_write_end) <= _w2c_preg, (_INT64) 0U)) != (_INT64)(0U)))
    goto _770;
  _w2c_reg5 = (_INT64)((struct _IO_FILE *) _w2c___stream0);
  _w2c_reg6 = (_UINT8)(_w2c___c0);
  _w2c___comma = __overflow((struct _IO_FILE *) _w2c___stream0, (_INT32)(_UINT8)(_w2c___c0));
  _w2c___cselect = _w2c___comma;
  goto _1026;
  _770 :;
  ((struct _IO_FILE *) _w2c___stream0) -> _IO_write_ptr = (_INT8 *)(_w2c_preg + (_UINT64)(1U));
  * ((_INT8 *) _w2c_preg) = _w2c___c0;
  _w2c___cselect = (_UINT8)(_w2c___c0);
  _1026 :;
  return _w2c___cselect;
} /* fputc_unlocked */


__inline _INT32 putc_unlocked(
  _INT32 __c,
  struct _IO_FILE * __stream)
{
  
  register _INT32 _w2c___c0;
  register _INT64 _w2c_reg5;
  register _UINT64 _w2c___stream0;
  register _UINT64 _w2c_reg6;
  register _UINT64 _w2c_preg;
  struct _IO_FILE _tmp0;
  register _INT32 _w2c___comma;
  register _INT32 _w2c___cselect;
  
  _w2c___c0 = (_INT32) _w2c_reg5;
  _w2c___stream0 = _w2c_reg6;
  _tmp0 = (struct _IO_FILE)((struct _IO_FILE *) _w2c___stream0) -> _IO_write_ptr;
  _w2c_preg = *(_UINT64 *) & _tmp0;
  if(!((_INT64)((_INT64) EXPECT((_UINT64)((struct _IO_FILE)((struct _IO_FILE *) _w2c___stream0) -> _IO_write_end) <= _w2c_preg, (_INT64) 0U)) != (_INT64)(0U)))
    goto _770;
  _w2c_reg5 = (_INT64)((struct _IO_FILE *) _w2c___stream0);
  _w2c_reg6 = (_UINT8)(_w2c___c0);
  _w2c___comma = __overflow((struct _IO_FILE *) _w2c___stream0, (_INT32)(_UINT8)(_w2c___c0));
  _w2c___cselect = _w2c___comma;
  goto _1026;
  _770 :;
  ((struct _IO_FILE *) _w2c___stream0) -> _IO_write_ptr = (_INT8 *)(_w2c_preg + (_UINT64)(1U));
  * ((_INT8 *) _w2c_preg) = _w2c___c0;
  _w2c___cselect = (_UINT8)(_w2c___c0);
  _1026 :;
  return _w2c___cselect;
} /* putc_unlocked */


__inline _INT32 putchar_unlocked(
  _INT32 __c)
{
  
  register _INT32 _w2c___c0;
  register _INT64 _w2c_reg5;
  register _UINT64 _w2c_stdout0;
  register _UINT64 _w2c_preg;
  struct _IO_FILE _tmp0;
  register _INT64 _w2c_reg6;
  register _INT32 _w2c___comma;
  register _INT32 _w2c___cselect;
  
  _w2c___c0 = (_INT32) _w2c_reg5;
  _w2c_stdout0 = (_UINT64)(stdout);
  _tmp0 = (struct _IO_FILE)((struct _IO_FILE *) _w2c_stdout0) -> _IO_write_ptr;
  _w2c_preg = *(_UINT64 *) & _tmp0;
  if(!((_INT64)((_INT64) EXPECT((_UINT64)((struct _IO_FILE)((struct _IO_FILE *) _w2c_stdout0) -> _IO_write_end) <= _w2c_preg, (_INT64) 0U)) != (_INT64)(0U)))
    goto _770;
  _w2c_reg5 = (_INT64)((struct _IO_FILE *) _w2c_stdout0);
  _w2c_reg6 = (_UINT8)(_w2c___c0);
  _w2c___comma = __overflow((struct _IO_FILE *) _w2c_stdout0, (_INT32)(_UINT8)(_w2c___c0));
  _w2c___cselect = _w2c___comma;
  goto _1026;
  _770 :;
  ((struct _IO_FILE *) _w2c_stdout0) -> _IO_write_ptr = (_INT8 *)(_w2c_preg + (_UINT64)(1U));
  * ((_INT8 *) _w2c_preg) = _w2c___c0;
  _w2c___cselect = (_UINT8)(_w2c___c0);
  _1026 :;
  return _w2c___cselect;
} /* putchar_unlocked */


__inline _INT32 feof_unlocked(
  struct _IO_FILE * __stream)
{
  
  register _UINT64 _w2c___stream0;
  register _UINT64 _w2c_reg5;
  
  _w2c___stream0 = _w2c_reg5;
  return((_INT32)((struct _IO_FILE)((struct _IO_FILE *) _w2c___stream0) -> _flags) & (_INT32)(16U)) != (_INT32)(0U);
} /* feof_unlocked */


__inline _INT32 ferror_unlocked(
  struct _IO_FILE * __stream)
{
  
  register _UINT64 _w2c___stream0;
  register _UINT64 _w2c_reg5;
  
  _w2c___stream0 = _w2c_reg5;
  return((_INT32)((struct _IO_FILE)((struct _IO_FILE *) _w2c___stream0) -> _flags) & (_INT32)(32U)) != (_INT32)(0U);
} /* ferror_unlocked */


extern _INT32 main()
{
  
  register _INT64 _w2c_reg1;
  register _INT32 _w2c___ompv_ok_to_fork;
  register _INT64 _w2c_reg5;
  register _INT64 _w2c_reg6;
  register _INT64 _w2c_reg7;
  register _UINT64 _w2c_reg3;
  
  /*Begin_of_nested_PU(s)*/
  
  _w2c_reg1 = 0;
  _w2c___ompv_ok_to_fork = __ompc_can_fork();
  if(!(_w2c___ompv_ok_to_fork))
    goto _514;
  _w2c_reg5 = 0U;
  _w2c_reg6 = (_INT64)(&__omprg_main_1);
  _w2c_reg7 = _w2c_reg3;
  _w2c_reg1 = 0;
  __ompc_fork((_INT32) 0U, &__omprg_main_1, _w2c_reg3);
  goto _770;
  _514 :;
  _w2c_reg1 = 0;
  __ompc_get_local_thread_num();
  _w2c_reg1 = 0;
  __ompc_serialized_parallel();
  _w2c_reg5 = (_INT64)("Hello World\n");
  _w2c_reg1 = 0;
  printf("Hello World\n");
  _w2c_reg1 = 0;
  __ompc_get_local_thread_num();
  _w2c_reg1 = 0;
  __ompc_serialized_parallel();
  _w2c_reg5 = (_INT64)("nested parallel region\n");
  _w2c_reg1 = 0;
  printf("nested parallel region\n");
  _w2c_reg1 = 0;
  __ompc_get_local_thread_num();
  _w2c_reg1 = 0;
  __ompc_end_serialized_parallel();
  _w2c_reg1 = 0;
  __ompc_end_serialized_parallel();
  _770 :;
  return 0U;
} /* main */


static void __omprg_main_1(__ompv_gtid_a, __ompv_slink_a)
  _INT32 __ompv_gtid_a;
  _UINT64 __ompv_slink_a;
{
  
  register _UINT64 _w2c_reg6;
  register _INT64 _w2c_reg5;
  register _INT32 _w2c_reg1;
  register _INT32 _w2c___ompv_ok_to_fork;
  register _INT64 _w2c_reg7;
  register _UINT64 _w2c_reg3;
  _UINT64 _temp___slink_sym0;
  
  /*Begin_of_nested_PU(s)*/
  
  _temp___slink_sym0 = _w2c_reg6;
  _w2c_reg5 = (_INT64)("Hello World\n");
  _w2c_reg1 = 0;
  printf("Hello World\n");
  _w2c_reg1 = 0;
  _w2c___ompv_ok_to_fork = __ompc_can_fork();
  if(!(_w2c___ompv_ok_to_fork))
    goto _515;
  _w2c_reg5 = 0U;
  _w2c_reg6 = (_UINT64)(&__omprg___omprg_main_1_1);
  _w2c_reg7 = _w2c_reg3;
  _w2c_reg1 = 0;
  __ompc_fork((_INT32) 0U, &__omprg___omprg_main_1_1, _w2c_reg3);
  goto _771;
  _515 :;
  _w2c_reg1 = 0;
  __ompc_get_local_thread_num();
  _w2c_reg1 = 0;
  __ompc_serialized_parallel();
  _w2c_reg5 = (_INT64)("nested parallel region\n");
  _w2c_reg1 = 0;
  printf("nested parallel region\n");
  _w2c_reg1 = 0;
  __ompc_end_serialized_parallel();
  _771 :;
  _w2c_reg1 = 0;
  __ompc_task_exit();
  return;
} /* __omprg_main_1 */


static void __omprg___omprg_main_1_1(__ompv_gtid_a, __ompv_slink_a)
  _INT32 __ompv_gtid_a;
  _UINT64 __ompv_slink_a;
{
  
  register _UINT64 _w2c_reg6;
  register _INT64 _w2c_reg5;
  register _INT32 _w2c_reg1;
  _UINT64 _temp___slink_sym2;
  
  /*Begin_of_nested_PU(s)*/
  
  _temp___slink_sym2 = _w2c_reg6;
  _w2c_reg5 = (_INT64)("nested parallel region\n");
  _w2c_reg1 = 0;
  printf("nested parallel region\n");
  _w2c_reg1 = 0;
  __ompc_task_exit();
  return;
} /* __omprg___omprg_main_1_1 */

