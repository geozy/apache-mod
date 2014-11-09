/* 
 * File:   mod_foo.h
 * Author: georgez
 *
 * Created on 03 November 2014, 14:01
 */

#ifndef MOD_FOO_H
#define	MOD_FOO_H

#ifdef __cplusplus
#define EXTERN_C_BLOCK_BEGIN    extern "C" {
#define EXTERN_C_BLOCK_END      }
#define EXTERN_C_FUNC           extern "C"
#else
#define EXTERN_C_BLOCK_BEGIN
#define EXTERN_C_BLOCK_END
#define EXTERN_C_FUNC
#endif

#include <httpd.h>
#include <http_protocol.h>
#include <http_config.h>


#endif	/* MOD_FOO_H */

