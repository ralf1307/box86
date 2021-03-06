#ifndef __X86_TLS_H__
#define __X86_TLS_H__

typedef struct thread_area_s thread_area_t;

uint32_t my_set_thread_area(thread_area_t* td);

void* fillTLSData(box86context_t *context);
void* resizeTLSData(box86context_t *context, void* oldptr);
void* GetSegmentBase(uint32_t desc);

#endif //__X86_TLS_H__