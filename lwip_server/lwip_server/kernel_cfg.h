/* kernel_cfg.h */
#ifndef TOPPERS_KERNEL_CFG_H
#define TOPPERS_KERNEL_CFG_H

#include "kernel_cfg_intl.h"



#define CFG_TSKID_USERBASE	(1)
/*
*
*	Add here your own IDs in concecutive intergers starting with CFG_TSKID_USERBASE.
*
*/

enum {
		ROOT_TASK = CFG_TSKID_USERBASE,
		SYS_RSV_TSK_ID_BASE
};


#define CFG_SEMID_USERBASE	(1)
/*
*
*	Add here your own IDs in concecutive intergers starting with CFG_SEMID_USERBASE.
*
*/
enum {
		SYS_RSV_SEM_ID_BASE = CFG_SEMID_USERBASE,
};


#define CFG_FLGID_USERBASE	(1)
/*
*
*	Add here your own IDs in concecutive intergers starting with CFG_FLGID_USERBASE.
*
*/


#define CFG_DTQID_USERBASE	(1)
/*
*
*	Add here your own IDs in concecutive intergers starting with CFG_DTQID_USERBASE.
*
*/

enum {
	 SYS_RSV_DTQ_ID_BASE = CFG_DTQID_USERBASE,
};


#define CFG_PDQID_USERBASE	(1)
/*
*
*	Add here your own IDs in concecutive intergers starting with CFG_PDQID_USERBASE.
*
*/


#define CFG_MTXID_USERBASE	(1)
/*
*
*	Add here your own IDs in concecutive intergers starting with CFG_MTXID_USERBASE.
*
*/

#define CFG_MBFID_USERBASE	(1)
/*
* (if MessageBuffe enabled)
*	Add here your own IDs in concecutive intergers starting with CFG_MBFID_USERBASE.
*
*/


#define CFG_MPFID_USERBASE	(1)
/*
*
*	Add here your own IDs in concecutive intergers starting with CFG_MPFID_USERBASE.
*
*/


#define CFG_CYCID_USERBASE	(1)
/*
*
*	Add here your own IDs in concecutive intergers starting with CFG_CYCID_USERBASE.
*
*/


#define CFG_ALMID_USERBASE	(1)
/*
*
*	Add here your own IDs in concecutive intergers starting with CFG_ALMID_USERBASE.
*
*/


#define CFG_ISRID_USERBASE	1
/*
*
*   Add here your own IDs in concecutive intergers starting with CFG_ISRID_USERBASE.
*
*/


#endif /* TOPPERS_KERNEL_CFG_H */
