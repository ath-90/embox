/**
 * @file
 *
 * @date Mar 20, 2020
 * @uthor Anton Bondarev
 */
#include <stdint.h>

#include <asm/mipsregs.h>

#include <hal/arch.h>

extern void global_control_block_init(void);

void arch_init(void) {
	uint32_t status;
	uint32_t cause;
	uint32_t intctl;
	uint32_t config3;

	status = mips_read_c0_status();
	if (status & ST0_BEV) {

	}
	cause = mips_read_c0_cause();
	if (cause & CAUSE_IV) {

	}
	intctl = mips_read_c0_intctl();
	if (intctl & INTCTL_VS){

	}
	config3 = mips_read_c0_congig3();
	if (config3 & CONFIG3_VEXIC){
		config3 = CONFIG3_VINT;
	}

}

void arch_idle(void) {

}

void _NORETURN arch_shutdown(arch_shutdown_mode_t mode) {
	while (1) {}
}
