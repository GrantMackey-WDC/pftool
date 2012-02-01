/*
*This material was prepared by the Los Alamos National Security, LLC (LANS) under
*Contract DE-AC52-06NA25396 with the U.S. Department of Energy (DOE). All rights
*in the material are reserved by DOE on behalf of the Government and LANS 
*pursuant to the contract. You are authorized to use the material for Government 
*purposes but it is not to be released or distributed to the public. NEITHER THE 
*UNITED STATES NOR THE UNITED STATES DEPARTMENT OF ENERGY, NOR THE LOS ALAMOS 
*NATIONAL SECURITY, LLC, NOR ANY OF THEIR EMPLOYEES, MAKES ANY WARRANTY, EXPRESS 
*OR IMPLIED, OR ASSUMES ANY LEGAL LIABILITY OR RESPONSIBILITY FOR THE ACCURACY, 
*COMPLETENESS, OR USEFULNESS OF ANY INFORMATION, APPARATUS, PRODUCT, OR PROCESS 
*DISCLOSED, OR REPRESENTS THAT ITS USE WOULD NOT INFRINGE PRIVATELY OWNED RIGHTS.
*/

#ifndef      __PFTOOL_DEBUG_H
#define      __PFTOOL_DEBUG_H


//define debugs
//#define POLL_DEBUG
//#define MPI_DEBUG
//#define PROC_DEBUG
//#define DMAPI_DEBUG

//define debug print statements

#ifdef POLL_DEBUG
#define PRINT_POLL_DEBUG(format, args...) printf("POLL_DEBUG: "format, ##args);
#else
#define PRINT_POLL_DEBUG(format, args...)
#endif

#ifdef PROC_DEBUG
#define PRINT_PROC_DEBUG(format, args...) printf("PROC_DEBUG: "format, ##args);
#else
#define PRINT_PROC_DEBUG(format, args...)
#endif

#ifdef MPI_DEBUG
#define PRINT_MPI_DEBUG(format, args...) printf("MPI_DEBUG: "format, ##args);
#else
#define PRINT_MPI_DEBUG(format, args...)
#endif

#ifdef DMAPI_DEBUG
#define PRINT_DMAPI_DEBUG(format, args...) printf("DMAPI_DEBUG: "format, ##args);
#else
#define PRINT_DMAPI_DEBUG(format, args...)
#endif


#endif
