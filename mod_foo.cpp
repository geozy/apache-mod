#include "mod_foo.h"

EXTERN_C_FUNC
int foo_handler( request_rec* inpRequest )
{
    int nReturnVal = DECLINED;
        
    if ( inpRequest->handler != NULL && strcmp( inpRequest->handler, "foo" ) == 0 )
    {
        ap_rputs( "Hello World from FOO", inpRequest );
        nReturnVal = OK;
    }

    return nReturnVal;
}

EXTERN_C_FUNC
void foo_hooks( apr_pool_t* inpPool )
{
    ap_hook_handler( foo_handler, NULL, NULL, APR_HOOK_MIDDLE );
}

EXTERN_C_BLOCK_BEGIN
module AP_MODULE_DECLARE_DATA foo_module =
{
    STANDARD20_MODULE_STUFF,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    foo_hooks
};
EXTERN_C_BLOCK_END
