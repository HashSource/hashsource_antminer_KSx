unsigned int **__fastcall sub_1C7F3C(int *a1)
{
  int addr; // r0
  int v3; // r1
  unsigned int **result; // r0
  int v5; // r1
  unsigned int *v6; // r5
  unsigned int *v7; // r0
  int v8; // r5
  _DWORD *v9; // r0
  int v10; // r2
  _DWORD *v11; // r1
  unsigned int *v12; // r4
  unsigned int *v13; // t1
  bool v14; // zf
  unsigned int v15; // r5
  int v16; // r0
  unsigned int v17; // r1

  addr = _tls_get_addr(&dword_2E6440);
  v3 = *(unsigned __int8 *)(addr + 8);
  if ( *(_BYTE *)(addr + 8) )
  {
    result = 0;
    if ( v3 != 1 )
      return result;
    if ( a1 )
      goto LABEL_4;
  }
  else
  {
    v8 = _tls_get_addr(&dword_2E6440);
    std::sys::unix::thread_local_dtor::register_dtor(v8, sub_1C8098);
    *(_BYTE *)(v8 + 8) = 1;
    if ( a1 )
    {
LABEL_4:
      v5 = *a1;
      v6 = 0;
      v7 = (unsigned int *)a1[1];
      v14 = *a1 == 0;
      *a1 = 0;
      if ( !v14 )
      {
        if ( v5 == 1 )
        {
          v6 = v7;
        }
        else
        {
          v6 = 0;
          if ( v7 )
          {
            __dmb(0xBu);
            do
              v17 = __ldrex(v7);
            while ( __strex(v17 - 1, v7) );
            if ( v17 == 1 )
            {
              __dmb(0xBu);
              sub_1B6A34((int)v7);
            }
          }
        }
      }
      goto LABEL_9;
    }
  }
  v6 = 0;
LABEL_9:
  v9 = (_DWORD *)_tls_get_addr(&dword_2E6440);
  v10 = *v9;
  v11 = v9;
  v13 = (unsigned int *)v9[1];
  result = (unsigned int **)(v9 + 1);
  v12 = v13;
  v14 = v10 == 0;
  *v11 = 1;
  if ( v10 )
    v14 = v12 == 0;
  *result = v6;
  if ( !v14 )
  {
    __dmb(0xBu);
    do
      v15 = __ldrex(v12);
    while ( __strex(v15 - 1, v12) );
    v16 = _tls_get_addr(&dword_2E6440);
    if ( v15 == 1 )
    {
      __dmb(0xBu);
      sub_1B6A34((int)v12);
      v16 = _tls_get_addr(&dword_2E6440);
    }
    return (unsigned int **)(v16 + 4);
  }
  return result;
}
