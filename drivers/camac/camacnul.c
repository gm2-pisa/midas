/*-----------------------------------------------------------------------------
 *  Copyright (c) 1998      TRIUMF Data Acquistion Group
 *  Please leave this header in any reproduction of that distribution
 * 
 *  TRIUMF Data Acquisition Group, 4004 Wesbrook Mall, Vancouver, B.C. V6T 2A3
 *  Email: online@triumf.ca           Tel: (604) 222-1047  Fax: (604) 222-1074
 *         amaudruz@triumf.ca
 * -----------------------------------------------------------------------------
 *  
 *  Description	: CAMAC interface following the ESONE CAMAC calls.
 *                for NUll drivers
 * 
 *  Requires 	: none
 *
 *  Application : null camac interface for debugging
 *     
 *  Author:  Pierre-Andre Amaudruz Data Acquisition Group
 * 
 *  $Id$
 *
 *------------------------------------------------------------------------ */

#ifdef _MSC_VER
#include <windows.h>
#endif

#include <mcstd.h>

/*------------------------------------------------------------------*/

void cam16i(const int c, const int n, const int a, const int f, WORD * d)
{
   *d = 0;
}
void cam24i(const int c, const int n, const int a, const int f, DWORD * d)
{
   *d = 0;
}
void cam16i_q(const int c, const int n, const int a, const int f, WORD * d, int *x,
                     int *q)
{
   *d = 0;
   *q = *x = 1;
}
void cam24i_q(const int c, const int n, const int a, const int f, DWORD * d,
                     int *x, int *q)
{
   *d = 0;
   *q = *x = 1;
}
void cam16i_r(const int c, const int n, const int a, const int f, WORD ** d,
                     const int r)
{
}
void cam24i_r(const int c, const int n, const int a, const int f, DWORD ** d,
                     const int r)
{
}
void cam16i_rq(const int c, const int n, const int a, const int f, WORD ** d,
                      const int r)
{
}
void cam24i_rq(const int c, const int n, const int a, const int f, DWORD ** d,
                      const int r)
{
}
void cam16i_sa(const int c, const int n, const int a, const int f, WORD ** d,
                      const int r)
{
}
void cam24i_sa(const int c, const int n, const int a, const int f, DWORD ** d,
                      const int r)
{
}
void cam16i_sn(const int c, const int n, const int a, const int f, WORD ** d,
                      const int r)
{
}
void cam24i_sn(const int c, const int n, const int a, const int f, DWORD ** d,
                      const int r)
{
}
void cami(const int c, const int n, const int a, const int f, WORD * d)
{
   *d = 0;
}
void cam16o(const int c, const int n, const int a, const int f, WORD d)
{
}
void cam24o(const int c, const int n, const int a, const int f, DWORD d)
{
}
void cam16o_q(const int c, const int n, const int a, const int f, WORD d, int *x,
                     int *q)
{
   *q = *x = 1;
}
void cam24o_q(const int c, const int n, const int a, const int f, DWORD d, int *x,
                     int *q)
{
   *q = *x = 1;
}
void cam16o_r(const int c, const int n, const int a, const int f, WORD * d,
                     const int r)
{
}
void cam24o_r(const int c, const int n, const int a, const int f, DWORD * d,
                     const int r)
{
}
void camo(const int c, const int n, const int a, const int f, WORD d)
{
}
int camc_chk(const int c)
{
   return 0;
}
void camc(const int c, const int n, const int a, const int f)
{
}
void camc_q(const int c, const int n, const int a, const int f, int *q)
{
   *q = 1;
}
void camc_sa(const int c, const int n, const int a, const int f, const int r)
{
}
void camc_sn(const int c, const int n, const int a, const int f, const int r)
{
}
int cam_init(void)
{
   return 1;
}
int cam_init_rpc(const char *host_name, const char *exp_name, const char *fe_name, const char *client_name, const char *rpc_server)
{
   return 1;
}
void cam_exit(void)
{
}
void cam_inhibit_set(const int c)
{
}
int cam_inhibit_test(const int c)
{
   return 1;
}
void cam_inhibit_clear(const int c)
{
}
void cam_crate_clear(const int c)
{
}
void cam_crate_zinit(const int c)
{
}
void cam_lam_enable(const int c, const int n)
{
}
void cam_lam_disable(const int c, const int n)
{
}
void cam_lam_read(const int c, DWORD * lam)
{
   *lam = 1;
}
void cam_lam_clear(const int c, const int n)
{
}
void cam_interrupt_enable(const int c)
{
}
void cam_interrupt_disable(const int c)
{
}
int cam_interrupt_test(const int c)
{
   return 1;
}
void cam_interrupt_attach(const int c, const int n, void (*isr) (void))
{
}
void cam_interrupt_detach(const int c, const int n)
{
}
void cam_glint_enable(void)
{
}
void cam_glint_disable(void)
{
}
void cam_glint_attach(int lam, void (*isr) (void))
{
}
void cam_glint_detach()
{
}
void cam_op()
{
}
