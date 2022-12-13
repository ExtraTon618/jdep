/****************************************************************************/
/*                                                                          */
/*                                                                          */
/*  This code and any software associated is covered by                     */
/*  GNU Lesser Public License (LGPL)                                        */
/*                                                                          */
/*  Author: Gopal Ananthraman                                               */
/*                                                                          */
/*  Desc  :                                                                 */
/*                                                                          */
/****************************************************************************/

#ifndef __BYTECODE_HDR_INCLUDE__
#define __BYTECODE_HDR_INCLUDE__


void * skip_calc( void * sp_info );

enum { nop,	aconst_null,	iconst_m1,	iconst_0,	iconst_1,	iconst_2,	iconst_3,
	iconst_4,	iconst_5,	lconst_0,	lconst_1,	fconst_0,	fconst_1,	fconst_2,
	dconst_0,	dconst_1,	bipush, 	sipush, 	ldc, 	ldc_w,	ldc2_w,	iload,
	lload,	fload,	dload,	aload,	iload_0,	iload_1,	iload_2,	iload_3,	lload_0,
	lload_1,	lload_2,	lload_3,	fload_0,	fload_1,	fload_2,	fload_3,
	dload_0,	dload_1,	dload_2,	dload_3,	aload_0,	aload_1,	aload_2,
	aload_3,	iaload,	laload,	faload,	daload,	aaload,	baload,	caload,	saload,	istore,
	lstore,	fstore,	dstore,	astore,	istore_0,	istore_1,	istore_2,	istore_3,	lstore_0,
	lstore_1,	lstore_2,	lstore_3,	fstore_0,	fstore_1,	fstore_2,	fstore_3,	dstore_0,
	dstore_1,	dstore_2,	dstore_3,	astore_0,	astore_1,	astore_2,	astore_3,	iastore,
	lastore,	fastore,	dastore,	aastore,	bastore,	castore,	sastore,	pop,
	pop2,	dup,	dup_x1,	dup_x2,	dup2,	dup2_x1,	dup2_x2,	swap,	iadd,	ladd,	fadd,
	dadd,	isub,	lsub,	fsub,	dsub,	imul,  /** TODO from here **/	lmul,	fmul,	dmul,
	idiv,	Ldiv,	fdiv,	ddiv,	irem,	lrem,	frem,	drem,	ineg,	lneg,	fneg,
	dneg,	ishl,	lshl,	ishr,	lshr,	iushr,	lushr,	iand,	land,	ior,	lor,
	ixor,	lxor,	iinc,	i2l,	i2f,	i2d,	l2i,	l2f,	l2d,	f2i,	f2l,
	f2d,	d2i,	d2l,	d2f,	i2b,	i2c,	i2s,	lcmp,	fcmpl,	fcmpg,	dcmpl,
	dcmpg,	ifeq,	ifne,	iflt,	ifge,	ifgt,	ifle,	if_icmpeq,	if_icmpne,	if_icmplt,
	if_icmpge,	if_icmpgt,	if_icmple,	if_acmpeq,	if_acmpne,	Goto,	jsr,	ret,	tableswitch,
	lookupswitch,	ireturn,	lreturn,	freturn,	dreturn,	areturn,	Return,	getstatic,
	putstatic,	getfield,	putfield,	invokevirtual,	invokespecial,    invokestatic,	
	invokeinterface, DUMMY,	new,	newarray,	anewarray,	arraylength,	athrow,	checkcast,
	instanceof,	moniterenter,	moniterexit,	wide,    multianewarray,	ifnull,	ifnonnull,
	goto_w,	jsr_w, MAX_OPCODES
};

typedef void* ( * PFN_HANDLER )(void *);

typedef struct OP_TAB {
	char * name;
	int    skip;
	PFN_HANDLER pfn;
}OP_TAB;

OP_TAB op_tab[MAX_OPCODES] = {
{ "nop",          1, NULL }, 
{ "aconst_null",  1, NULL },
{"iconst_m1", 1, NULL} , 
{"iconst_0", 1, NULL},
{"iconst_1", 1, NULL},
{"iconst_2", 1, NULL},
{"iconst_3", 1, NULL},
{"iconst_4", 1, NULL},
{"iconst_5", 1, NULL},
{"lconst_0", 1, NULL},
{"lconst_1", 1, NULL},
{"fconst_0", 1, NULL},
{"fconst_1", 1, NULL},
{"fconst_2", 1, NULL},
{"dconst_0", 1, NULL },
{"dconst_1", 1, NULL },
{"bipush", 2,   NULL },
{"sipush", 3, NULL},
{"ldc", 2, NULL},
{"ldc_w", 3, NULL},
{"ldc2_w", 3, NULL},
{"iload", 2, NULL},
{"lload", 2, NULL},
{"fload", 2, NULL},
{"dload", 2, NULL},
{"aload", 2, NULL},
{"iload_0", 1,NULL}, 
{"iload_1", 1,NULL},
{"iload_2", 1,NULL}, 
{"iload_3", 1,NULL}, 
{"lload_0", 1, NULL},
{"lload_1", 1, NULL},
{"lload_2", 1, NULL},
{"lload_3", 1, NULL},
{"fload_0", 1, NULL},
{"fload_1", 1, NULL},
{"fload_2", 1, NULL},
{"fload_3", 1, NULL},
{"dload_0", 1, NULL},
{"dload_1", 1, NULL},
{"dload_2", 1, NULL},
{"dload_3", 1, NULL},
{"aload_0", 1, NULL },
{"aload_1", 1, NULL },
{"aload_2", 1, NULL },
{"aload_3", 1, NULL },
{"iaload", 1, NULL},
{"laload", 1, NULL},
{"faload", 1, NULL},
{"daload", 1, NULL},
{"aaload" ,1, NULL},
{"baload", 1, NULL},
{"caload", 1, NULL},
{"saload", 1, NULL},
{"istore", 2, NULL},
{"lstore", 2, NULL},
{"fstore",  2, NULL},
{"dstore",  2, NULL},
{"astore",  2, NULL},
{"istore_0", 1, NULL},
{"istore_1", 1, NULL},
{"istore_2", 1, NULL},
{"istore_3", 1, NULL},
{"lstore_0", 1, NULL},
{"lstore_1", 1, NULL},
{"lstore_2", 1, NULL},
{"lstore_3", 1, NULL},
{"fstore_0", 1, NULL},
{"fstore_1", 1, NULL},
{"fstore_2", 1, NULL},
{"fstore_3", 1, NULL},
{"dstore_0", 1, NULL},
{"dstore_1", 1, NULL},
{"dstore_2", 1, NULL},
{"dstore_3", 1, NULL},
{"astore_0", 1, NULL },
{"astore_1", 1, NULL },
{"astore_2", 1, NULL },
{"astore_3", 1, NULL },
{"iastore",  1, NULL },
{"lastore",  1, NULL},
{"fastore", 1, NULL},
{"dastore", 1, NULL },
{"aastore", 1, NULL },
{"bastore", 1, NULL },
{"castore", 1, NULL },
{"sastore", 1, NULL},
{"pop", 1, NULL},
{"pop2", 1, NULL},
{"dup", 1, NULL},
{"dup_x1", 1, NULL},
{"dup_x2", 1, NULL},
{"dup2", 1, NULL},
{"dup2_x1", 1,NULL},
{"dup2_x2", 1, NULL},
{"swap", 1, NULL},
{"iadd", 1, NULL},
{"ladd", 1, NULL},
{"fadd", 1, NULL},
{"dadd", 1, NULL},
{"isub", 1, NULL},
{"lsub", 1, NULL},
{"fsub", 1, NULL},
{"dsub", 1, NULL},
{"imul", 1, NULL},
{"lmul", 1, NULL},
{"fmul", 1, NULL},
{"dmul", 1, NULL},
{"idiv", 1, NULL},
{"ldiv", 1, NULL},
{"fdiv", 1, NULL},
{"ddiv", 1, NULL},
{"irem", 1, NULL},
{"lrem", 1, NULL},
{"frem", 1, NULL},
{"drem", 1, NULL},
{"ineg", 1, NULL},
{"lneg", 1, NULL},
{"fneg", 1, NULL},
{"dneg", 1, NULL},
{"ishl", 1, NULL},
{"lshl", 1, NULL},
{"ishr", 1, NULL},
{"lshr", 1, NULL},
{"iushr", 1, NULL},
{"lushr", 1, NULL},
{"iand", 1, NULL},
{"land", 1, NULL},
{"ior", 1, NULL},
{"lor", 1, NULL},
{"ixor", 1, NULL},
{"lxor", 1, NULL},
{"iinc", 3, NULL},
{"i2l", 1, NULL},
{"i2f", 1, NULL},
{"i2d", 1, NULL},
{"l2i", 1, NULL},
{"l2f", 1, NULL},
{"l2d", 1, NULL},
{"f2i", 1, NULL},
{"f2l", 1, NULL},
{"f2d", 1, NULL},
{"d2i", 1, NULL},
{"d2l", 1, NULL},
{"d2f", 1, NULL},
{"i2b", 1, NULL},
{"i2c", 1, NULL},
{"i2s", 1, NULL},
{"lcmp",  1, NULL},
{"fcmpl", 1, NULL},
{"fcmpg", 1, NULL},
{"dcmpl", 1, NULL},
{"dcmpg", 1, NULL},
{"ifeq",  3, NULL},
{"ifne",  3, NULL},
{"iflt",  3, NULL},
{"ifge",  3, NULL},
{"ifgt",  3, NULL},
{"ifle",  3, NULL},
{"if_icmpeq", 3, NULL},
{"if_icmpne", 3, NULL},
{"if_icmplt", 3, NULL},
{"if_icmpge", 3, NULL},
{"if_icmpgt", 3, NULL},
{"if_icmple", 3, NULL},
{"if_acmpeq", 3, NULL},
{"if_acmpne", 3, NULL},
{"goto", 3, NULL},
{"jsr", 3, NULL },
{"ret", 2, NULL},
{"tableswitch", 0,  skip_calc},  // tableswitch has var length
{"lookupswitch", 0, skip_calc}, // lookupswitch has var length
{"ireturn", 1, NULL},
{"lreturn", 1, NULL},
{"freturn",  1, NULL},
{"dreturn",  1, NULL},
{"areturn",  1, NULL},
{"return", 1, NULL},
{"getstatic", 3, NULL},
{"putstatic", 3, NULL},
{"getfield", 3, NULL},
{"putfield", 3, NULL},
{"invokevirtual", 3, NULL},
{"invokespecial", 3, NULL},
{"invokestatic", 3, NULL},
{"invokeinterface", 5, NULL},
{"DUMMY", 1, NULL},
{"new", 3, NULL},
{"newarray",2, NULL}, 
{"anewarray", 3,  NULL },
{"arraylength", 1, NULL },
{"athrow", 1, NULL},
{"checkcast", 3, NULL},
{"instanceof", 3, NULL},
{"moniterenter", 1, NULL},
{"moniterexit", 1, NULL},
{"wide", 0, skip_calc },   //wide has 2 formats
{"multianewarray", 4, NULL},
{"ifnull", 3, NULL},
{"ifnonnull", 3, NULL},
{"goto_w", 5, NULL},
{"jsr_w", 5, NULL}
};

#endif /** __BYTECODE_HDR_INCLUDE__ **/