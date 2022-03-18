#ifndef MULTITHREADING_C
#define MULTITHREADING_C

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdint.h>
#include <pthread.h>

#define C_SINGLETHREAD_START 68
#define C_SINGLETHREAD_END 72
#define C_MUTEX_START 20
#define C_MUTEX_END 63

void* c_first_half(void* arg);
void* c_second_half(void* arg);

pthread_mutex_t c_answer_lock;
volatile uint64_t c_answer;
uint64_t sigma_max64 = 6074000000; // Approximation for the max upper bound of summation that will fit in a 64 bit integer

void c_mutex_ex() {
    c_answer = 0;
    pthread_t first, second;

    pthread_mutex_init(&c_answer_lock, NULL); /* int pthread_mutex_init (pthread_mutex_t *__mutex, 
                                                 const pthread_mutexattr_t *__mutexattr)*/

    pthread_create(&first, NULL, c_first_half, NULL); /*int pthread_create (pthread_t *__restrict __newthread,
			                                                    const pthread_attr_t *__restrict __attr,
			                                                    void *(*__start_routine) (void *),
			                                                    void *__restrict __arg) */

    pthread_create(&second, NULL, c_second_half, NULL);

    pthread_join(first, NULL); // int pthread_join (pthread_t __th, void **__thread_return);
    pthread_join(second, NULL);
    printf("Answer: %lx", c_answer);
}

void* c_first_half(void* arg) {
    uint64_t i;
    uint64_t c_answer1 = 0;
    for (i = 1; i < (sigma_max64>>1); i++) {
        c_answer1 += i;
    }
    pthread_mutex_lock(&c_answer_lock); // int pthread_mutex_lock (pthread_mutex_t *__mutex)
    c_answer += c_answer1;
    pthread_mutex_unlock(&c_answer_lock); // int pthread_mutex_unlock (pthread_mutex_t *__mutex)
    return NULL;
}

void* c_second_half(void* arg) {
    uint64_t i;
    uint64_t c_answer2 = 0;
    for (i = sigma_max64>>1; i <= sigma_max64; i++) {
        c_answer2 += i;
    }
    pthread_mutex_lock(&c_answer_lock);
    c_answer += c_answer2;
    pthread_mutex_unlock(&c_answer_lock);
    return NULL;
}

void c_singlethread_ex() {
    c_answer = 0;
    for (unsigned long i = 1; i <= sigma_max64; i++) {
        c_answer += i;
    }
    printf("%lx\n", c_answer);
}

#ifdef __cplusplus
}
#endif

#endif
