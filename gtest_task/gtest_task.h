/*=====================================================================================*/
/**
 * gtest_task.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef GTEST_TASK_H_
#define GTEST_TASK_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "task.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/
#undef CLASS_NAME
#undef CLASS_INHERITS
#undef CLASS_MEMBERS
#undef CLASS_METHODS

#define CLASS_NAME Gtest_Task
#define CLASS_INHERITS Task
#define CLASS_MEMBERS(_member) \
_member(int _private, argc) \
_member(char ** _private, argv) \

#define CLASS_METHODS(_method, _void_method) \
void _method(ctor, IPC_Task_Id_T const, int argc, char ** argv)\

#ifdef __cplusplus
extern "C" {
#endif
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
CLASS_DECLARATION
/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/
#ifdef __cplusplus
}
#endif
/*=====================================================================================* 
 * gtest_task.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*GTEST_TASK_H_*/