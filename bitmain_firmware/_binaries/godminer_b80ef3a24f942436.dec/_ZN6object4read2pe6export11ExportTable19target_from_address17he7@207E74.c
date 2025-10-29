const char *__fastcall object::read::pe::export::ExportTable::target_from_address(
        int *a1,
        const char *a2,
        int a3,
        const char *a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r6
  unsigned int v7; // r2
  const char *result; // r0
  int v10; // r9
  unsigned int v11; // r7
  int v12; // r0
  bool v13; // cc
  int v14; // r1
  int v15; // r2
  unsigned int v16; // r2
  int v17; // r3
  int v18; // lr
  int v19; // r3
  int v20; // r1
  unsigned int v21; // r7
  unsigned int v22; // r8
  unsigned int v23; // kr00_4
  bool v24; // cf
  int v25; // r2

  v5 = *((_DWORD *)a2 + 8);
  v7 = *((_DWORD *)a2 + 1);
  result = (const char *)(a3 - v5);
  if ( a3 - v5 >= v7 )
  {
    v15 = 0;
    goto LABEL_9;
  }
  v10 = *(_DWORD *)a2;
  v11 = v7 - (_DWORD)result;
  v4 = (unsigned int)&result[*(_DWORD *)a2];
  if ( v7 < (unsigned int)result )
    v11 = 0;
  v12 = memchr::memchr::fallback::memchr(0, v4, v11);
  v13 = v12 != 0;
  if ( v12 )
    v13 = v11 > (unsigned int)a2;
  if ( v13 )
  {
    if ( !a2 )
    {
LABEL_14:
      v14 = 37;
      result = aMissingPeForwa_0;
      goto LABEL_15;
    }
    result = 0;
    v16 = v4;
    while ( result[v4] != 46 )
    {
      ++result;
      ++v16;
      if ( result == a2 )
        goto LABEL_14;
    }
    v17 = result - a2;
    if ( result - a2 == -1 )
    {
      v14 = 32;
      result = "Missing PE forwarded export namecritical_section_default_timeoutdynamic_value_reloc_table_offsetImageAlph"
               "a64RuntimeFunctionEntry\a";
      goto LABEL_15;
    }
    if ( result[v4 + 1] == 35 )
    {
      if ( v17 == -2 )
      {
LABEL_28:
        v14 = 35;
        result = aInvalidPeForwa;
        goto LABEL_15;
      }
      v18 = v17 + 2;
      v19 = 0;
      a3 = 0;
      while ( v18 != v19 )
      {
        v20 = *(unsigned __int8 *)(v16 - v19 + 2);
        v21 = v20 - 48;
        if ( (unsigned int)(v20 - 48) < 0xA )
          v5 = v20 - 48;
        if ( v21 <= 9 )
        {
          v23 = a3;
          a2 = (const char *)((10 * (unsigned __int64)(unsigned int)a3) >> 32);
          v22 = 10 * a3;
          if ( is_mul_ok(v23, 0xAu) )
          {
            v24 = __CFADD__(v22, v5);
            a3 = v22 + v5;
            --v19;
            v5 = v21;
            if ( !v24 )
              continue;
          }
        }
        goto LABEL_28;
      }
      v15 = 1;
      a4 = result;
    }
    else
    {
      a2 += ~(unsigned int)result;
      v25 = a3 + v10;
      a3 = v4;
      v4 = (unsigned int)result;
      a4 = &result[v25 - v5 + 1];
      v15 = 2;
    }
LABEL_9:
    *a1 = v15;
    a1[1] = a3;
    a1[2] = v4;
    a1[3] = (int)a4;
    a1[4] = (int)a2;
    return result;
  }
  v14 = 35;
  result = aInvalidPeForwa_0;
LABEL_15:
  a1[1] = (int)result;
  *a1 = 3;
  a1[2] = v14;
  return result;
}
