#include <time.h>

//typedef int omp_int32;
typedef long long omp_int64;

typedef void *frame_pointer_t;
typedef int omp_tid;
typedef void (*omp_micro)(int , frame_pointer_t);

typedef void (*omp_task_func)(void *firstprivates, void *fp);


typedef enum {
    OMP_SCHED_UNKNOWN             = 0,
    OMP_SCHED_STATIC              = 1,
    OMP_SCHED_STATIC_EVEN         = 2,
    OMP_SCHED_DYNAMIC             = 3,
    OMP_SCHED_GUIDED              = 4,
    OMP_SCHED_RUNTIME             = 5,

    OMP_SCHED_ORDERED_STATIC      = 31,
    OMP_SCHED_ORDERED_STATIC_EVEN = 32,
    OMP_SCHED_ORDERED_DYNAMIC     = 33,
    OMP_SCHED_ORDERED_GUIDED  = 34,
    OMP_SCHED_ORDERED_RUNTIME     = 35
} omp_sched_t;


extern "C" void __ompc_fork(int num_threads, omp_micro micro_task,
                      frame_pointer_t fp);

extern "C" void __ompc_serialized_parallel(int global_tid);
extern "C" void __ompc_end_serialized_parallel(int global_tid);

extern "C" void __ompc_task_exit();

extern "C" int __ompc_can_fork();

extern "C" int __ompc_get_local_thread_num();

extern "C" void __ompc_static_init_4( int global_tid, omp_sched_t schedtype,
                                      int *plower,
                                      int *pupper, int *pstride,
                                      int incr, int chunk);

extern "C" void __ompc_ebarrier();
extern "C" void __ompc_barrier();

extern "C" int __ompc_get_num_threads();

extern "C" int __ompc_master(int global_tid);
extern "C" void __ompc_end_master(int global_tid);

extern "C" int __ompc_single(int global_tid);
extern "C" void __ompc_end_single(int global_tid);

extern "C" int omp_get_num_threads();
extern "C" int omp_get_max_threads();
extern "C" int omp_get_thread_num();

extern "C" timespec get_hpx_time();

extern "C" int __ompc_task_will_defer(int may_delay);
extern "C" void __ompc_task_create(omp_task_func taskfunc, void *frame_pointer,
                               void *firstprivates, int may_delay, 
                               int is_tied, int blocks_parent);
extern "C" void __ompc_task_wait();
extern "C" void __ompc_task_exit();

extern "C" void __ompc_task_firstprivates_alloc(void **firstprivates, int size);
extern "C" void __ompc_task_firstprivates_free(void *firstprivates);

