;--------------------------------------------------------
; File Created by SDCC : free open source ISO C Compiler
; Version 4.5.0 #15242 (Linux)
;--------------------------------------------------------
	.module my_c
	
	.optsdcc -mmcs51 --model-small
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _SUBUINTC_IDATA
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
;--------------------------------------------------------
; overlayable items in internal ram
;--------------------------------------------------------
;--------------------------------------------------------
; Stack segment in internal ram
;--------------------------------------------------------
	.area SSEG
__start__stack:
	.ds	1

;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
_main_mynum1_10000_81:
	.ds 3
_main_mynum2_10000_81:
	.ds 3
_main_mynum3_10000_81:
	.ds 3
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; uninitialized external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; initialized external ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; interrupt vector
;--------------------------------------------------------
	.area HOME    (CODE)
__interrupt_vect:
	ljmp	__sdcc_gsinit_startup
; restartable atomic support routines
	.ds	5
sdcc_atomic_exchange_rollback_start::
	nop
	nop
sdcc_atomic_exchange_pdata_impl:
	movx	a, @r0
	mov	r3, a
	mov	a, r2
	movx	@r0, a
	sjmp	sdcc_atomic_exchange_exit
	nop
	nop
sdcc_atomic_exchange_xdata_impl:
	movx	a, @dptr
	mov	r3, a
	mov	a, r2
	movx	@dptr, a
	sjmp	sdcc_atomic_exchange_exit
sdcc_atomic_compare_exchange_idata_impl:
	mov	a, @r0
	cjne	a, ar2, .+#5
	mov	a, r3
	mov	@r0, a
	ret
	nop
sdcc_atomic_compare_exchange_pdata_impl:
	movx	a, @r0
	cjne	a, ar2, .+#5
	mov	a, r3
	movx	@r0, a
	ret
	nop
sdcc_atomic_compare_exchange_xdata_impl:
	movx	a, @dptr
	cjne	a, ar2, .+#5
	mov	a, r3
	movx	@dptr, a
	ret
sdcc_atomic_exchange_rollback_end::

sdcc_atomic_exchange_gptr_impl::
	jnb	b.6, sdcc_atomic_exchange_xdata_impl
	mov	r0, dpl
	jb	b.5, sdcc_atomic_exchange_pdata_impl
sdcc_atomic_exchange_idata_impl:
	mov	a, r2
	xch	a, @r0
	mov	dpl, a
	ret
sdcc_atomic_exchange_exit:
	mov	dpl, r3
	ret
sdcc_atomic_compare_exchange_gptr_impl::
	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
	mov	r0, dpl
	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
	sjmp	sdcc_atomic_compare_exchange_idata_impl
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
	.globl __sdcc_gsinit_startup
	.globl __sdcc_program_startup
	.globl __start__stack
	.globl __mcs51_genXINIT
	.globl __mcs51_genXRAMCLEAR
	.globl __mcs51_genRAMCLEAR
	.area GSFINAL (CODE)
	ljmp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
__sdcc_program_startup:
	ljmp	_main
;	return from main will return to caller
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
;__200000007   Allocated to registers 
;__200000008   Allocated to registers 
;__200000009   Allocated to registers 
;out           Allocated to registers 
;inp1          Allocated to registers 
;inp2          Allocated to registers 
;mynum1        Allocated with name '_main_mynum1_10000_81'
;mynum2        Allocated with name '_main_mynum2_10000_81'
;mynum3        Allocated with name '_main_mynum3_10000_81'
;------------------------------------------------------------
;	/home/baibhavdebian/Documents/tinytool52/ttl52api/ttl52int/my_c.c:3: void main(){
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
;	/home/baibhavdebian/Documents/tinytool52/ttl52api/ttl52int/my_c.c:4: uint24t __idata mynum1 = UINT24(12234);
	mov	r0,#_main_mynum1_10000_81
	mov	@r0,#0xca
	mov	r0,#(_main_mynum1_10000_81 + 0x0001)
	mov	@r0,#0x2f
	mov	r0,#(_main_mynum1_10000_81 + 0x0002)
	mov	@r0,#0x00
;	/home/baibhavdebian/Documents/tinytool52/ttl52api/ttl52int/my_c.c:5: uint24t __idata mynum2 = UINT24(12234);
	mov	r0,#_main_mynum2_10000_81
	mov	@r0,#0xca
	mov	r0,#(_main_mynum2_10000_81 + 0x0001)
	mov	@r0,#0x2f
	mov	r0,#(_main_mynum2_10000_81 + 0x0002)
	mov	@r0,#0x00
;	/home/baibhavdebian/Documents/tinytool52/ttl52api/ttl52int/my_c.c:6: uint24t __idata mynum3 = UINT24(12234);
	mov	r0,#_main_mynum3_10000_81
	mov	@r0,#0xca
	mov	r0,#(_main_mynum3_10000_81 + 0x0001)
	mov	@r0,#0x2f
	mov	r0,#(_main_mynum3_10000_81 + 0x0002)
	mov	@r0,#0x00
;	/home/baibhavdebian/Documents/tinytool52/ttl52api/ttl52int/my_c.c:9: SUBUINT24_IDATA(&mynum1,&mynum2,&mynum3);
;	/home/baibhavdebian/Documents/tinytool52/ttl52api/ttl52int/ttl52int.h:297: SUBUINTC_IDATA(out->bytes , inp1->bytes , inp2->bytes,UINT24T_SIZE);
	mov	_SUBUINTC_IDATA_PARM_2,#_main_mynum2_10000_81
	mov	_SUBUINTC_IDATA_PARM_3,#_main_mynum3_10000_81
	mov	_SUBUINTC_IDATA_PARM_4,#0x03
	mov	dpl, #_main_mynum1_10000_81
;	/home/baibhavdebian/Documents/tinytool52/ttl52api/ttl52int/my_c.c:9: SUBUINT24_IDATA(&mynum1,&mynum2,&mynum3);
;	/home/baibhavdebian/Documents/tinytool52/ttl52api/ttl52int/my_c.c:11: }
	ljmp	_SUBUINTC_IDATA
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
