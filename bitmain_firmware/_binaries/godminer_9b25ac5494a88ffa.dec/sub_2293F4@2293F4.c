_DWORD *__fastcall sub_2293F4(_DWORD *result, int *a2)
{
  int v3; // r12
  unsigned int v4; // r1
  int v5; // lr
  unsigned int v6; // r2
  int v7; // r4
  int v8; // r5
  int v9; // r6
  bool v10; // cf

  v3 = *a2;
  v4 = a2[1];
  v5 = 1;
  v6 = a2[2];
  v7 = 0;
  v8 = v3;
  do
  {
    if ( v6 + v7 >= v4 )
      goto LABEL_13;
    v9 = *(unsigned __int8 *)(v8 + v6);
    a2[2] = v6 + v7 + 1;
    ++v8;
    ++v7;
    --v5;
    v10 = (unsigned int)(v9 - 48) >= 0xA;
    if ( (unsigned int)(v9 - 48) >= 0xA )
      v10 = (unsigned int)(v9 - 97) >= 6;
  }
  while ( !v10 );
  if ( v9 == 95 )
  {
    if ( v6 - v5 < v6 )
      goto LABEL_18;
    if ( v6 )
    {
      if ( v6 >= v4 )
      {
        if ( v6 != v4 )
          goto LABEL_18;
      }
      else if ( *(char *)(v3 + v6) < -64 )
      {
LABEL_18:
        core::str::slice_error_fail(v3);
      }
    }
    if ( v6 != v5 )
    {
      if ( v6 - v5 >= v4 )
      {
        if ( v6 - v4 + v7 != 1 )
          goto LABEL_18;
      }
      else if ( *(char *)(v8 + v6 - 1) <= -65 )
      {
        goto LABEL_18;
      }
    }
    *result = v3 + v6;
    result[1] = -v5;
  }
  else
  {
LABEL_13:
    *result = 0;
    *((_BYTE *)result + 4) = 0;
  }
  return result;
}
