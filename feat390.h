/* FEAT390.H    (c) Copyright Jan Jaeger, 2000-2006                  */
/*              ESA/390 feature definitions                          */

/* This file MUST NOT contain #undef statements */
#if defined(OPTION_390_MODE)
#define _ARCH_390_NAME "ESA/390"

#define FEATURE_4K_STORAGE_KEYS
#define FEATURE_ACCESS_REGISTERS
#define FEATURE_ADDRESS_LIMIT_CHECKING
#define FEATURE_BASIC_FP_EXTENSIONS
#define FEATURE_BIMODAL_ADDRESSING
#define FEATURE_BINARY_FLOATING_POINT
#define FEATURE_BRANCH_AND_SET_AUTHORITY
#define FEATURE_BROADCASTED_PURGING
#define FEATURE_CANCEL_IO_FACILITY
#define FEATURE_CALLED_SPACE_IDENTIFICATION
#define FEATURE_CHANNEL_SUBSYSTEM
#define FEATURE_CHECKSUM_INSTRUCTION
#define FEATURE_CHSC
#define FEATURE_COMPARE_AND_MOVE_EXTENDED
#define FEATURE_COMPRESSION
#define FEATURE_CPU_RECONFIG
//#define FEATURE_DECIMAL_FLOATING_POINT                          /*DFP*/
#define FEATURE_DUAL_ADDRESS_SPACE
#define FEATURE_EMULATE_VM
#define FEATURE_EXPANDED_STORAGE
#define FEATURE_EXPEDITED_SIE_SUBSET
#define FEATURE_EXTENDED_STORAGE_KEYS
#define FEATURE_EXTENDED_TOD_CLOCK
#define FEATURE_EXTENDED_TRANSLATION
#define FEATURE_EXTENDED_TRANSLATION_FACILITY_2
#define FEATURE_EXTERNAL_INTERRUPT_ASSIST
#define FEATURE_FETCH_PROTECTION_OVERRIDE
//#define FEATURE_FPS_ENHANCEMENT                                 /*DFP*/
#define FEATURE_FPS_EXTENSIONS
#define FEATURE_HERCULES_DIAGCALLS
#define FEATURE_HEXADECIMAL_FLOATING_POINT
#define FEATURE_HFP_EXTENSIONS
#define FEATURE_HYPERVISOR
#define FEATURE_IMMEDIATE_AND_RELATIVE
#define FEATURE_INCORRECT_LENGTH_INDICATION_SUPPRESSION
#define FEATURE_IO_ASSIST
#define FEATURE_INTERPRETIVE_EXECUTION
#define FEATURE_LOCK_PAGE
#define FEATURE_LINKAGE_STACK
#define FEATURE_MESSAGE_SECURITY_ASSIST
#define FEATURE_MOVE_PAGE_FACILITY_2
#define FEATURE_MSSF_CALL
#define FEATURE_MULTIPLE_CONTROLLED_DATA_SPACE
#define FEATURE_MVS_ASSIST
#define FEATURE_PAGE_PROTECTION
#define FEATURE_PERFORM_LOCKED_OPERATION
#define FEATURE_PER
#define FEATURE_PER2
#define FEATURE_PRIVATE_SPACE
#define FEATURE_PROTECTION_INTERCEPTION_CONTROL
#define FEATURE_QUEUED_DIRECT_IO
#define FEATURE_REGION_RELOCATE
#define FEATURE_RESUME_PROGRAM
#define FEATURE_S390_DAT
#define FEATURE_SERVICE_PROCESSOR
#define FEATURE_SET_ADDRESS_SPACE_CONTROL_FAST
#define FEATURE_SQUARE_ROOT
#define FEATURE_STORAGE_KEY_ASSIST
#define FEATURE_STORAGE_PROTECTION_OVERRIDE
#define FEATURE_STORE_SYSTEM_INFORMATION
#define FEATURE_SUBSPACE_GROUP
#define FEATURE_SUPPRESSION_ON_PROTECTION
#define FEATURE_SYSTEM_CONSOLE
#define FEATURE_TEST_BLOCK
#define FEATURE_TRACING
#define FEATURE_WAITSTATE_ASSIST
// #define FEATURE_VECTOR_FACILITY

#endif /*defined(OPTION_390_MODE)*/
/* end of FEAT390.H */
