unsigned int *__fastcall std::io::stdio::set_output_capture(unsigned int *a1)
{
  _DWORD *addr; // r0
  unsigned int **v3; // r0
  int v4; // t1
  unsigned int *v5; // r1
  unsigned int v7; // r0
  char v8[4]; // [sp+Ch] [bp-4h] BYREF

  if ( !a1 && !byte_30DF58 )
    return 0;
  byte_30DF58 = 1;
  addr = (_DWORD *)_tls_get_addr(&dword_2E7444);
  v4 = *addr;
  v3 = (unsigned int **)(addr + 1);
  if ( !v4 )
  {
    v3 = sub_1C968C(0);
    if ( !v3 )
    {
      if ( a1 )
      {
        __dmb(0xBu);
        do
          v7 = __ldrex(a1);
        while ( __strex(v7 - 1, a1) );
        if ( v7 == 1 )
        {
          __dmb(0xBu);
          sub_1B8184((int)a1);
        }
      }
      core::result::unwrap_failed((int)aCannotAccessAT, 70, (int)v8, (int)&off_2E02F8, (int)&off_2E0778);
    }
  }
  v5 = *v3;
  *v3 = a1;
  return v5;
}
