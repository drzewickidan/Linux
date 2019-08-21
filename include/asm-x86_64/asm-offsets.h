#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 *
 */

#define tsk_state 0 /* offsetof(struct task_struct, state)	# */
#define tsk_flags 20 /* offsetof(struct task_struct, flags)	# */
#define tsk_thread 704 /* offsetof(struct task_struct, thread)	# */
#define tsk_pid 272 /* offsetof(struct task_struct, pid)	# */

#define threadinfo_flags 16 /* offsetof(struct thread_info, flags)	# */
#define threadinfo_addr_limit 32 /* offsetof(struct thread_info, addr_limit)	# */
#define threadinfo_preempt_count 28 /* offsetof(struct thread_info, preempt_count)	# */
#define threadinfo_status 20 /* offsetof(struct thread_info, status)	# */

#define pda_kernelstack 16 /* offsetof(struct x8664_pda, kernelstack)	# */
#define pda_oldrsp 24 /* offsetof(struct x8664_pda, oldrsp)	# */
#define pda_pcurrent 0 /* offsetof(struct x8664_pda, pcurrent)	# */
#define pda_irqcount 32 /* offsetof(struct x8664_pda, irqcount)	# */
#define pda_cpunumber 36 /* offsetof(struct x8664_pda, cpunumber)	# */
#define pda_irqstackptr 40 /* offsetof(struct x8664_pda, irqstackptr)	# */
#define pda_data_offset 8 /* offsetof(struct x8664_pda, data_offset)	# */

#define pbe_address 0 /* offsetof(struct pbe, address)	# */
#define pbe_orig_address 8 /* offsetof(struct pbe, orig_address)	# */
#define pbe_next 16 /* offsetof(struct pbe, next)	# */

#define TSS_ist 36 /* offsetof(struct tss_struct, ist)	# */

#define crypto_tfm_ctx_offset 96 /* offsetof(struct crypto_tfm, __crt_ctx)	# */

#define __NR_syscall_max 293 /* sizeof(syscalls) - 1	# */

#endif
