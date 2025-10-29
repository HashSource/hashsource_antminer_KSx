_DWORD *__fastcall core::slice::index::into_range(_DWORD *result, int a2, _DWORD *a3)
{
  int v3; // r12
  int v4; // r3
  int v5; // lr
  bool v6; // cf

  v3 = a3[1];
  v4 = a3[2];
  v5 = a3[3];
  if ( *a3 )
  {
    if ( *a3 == 1 )
    {
      v6 = __CFADD__(v3++, 1);
      if ( v6 )
        goto LABEL_5;
    }
    else
    {
      v3 = 0;
    }
  }
  if ( v4 )
  {
    if ( v4 != 1 )
      v5 = a2;
    goto LABEL_12;
  }
  v6 = __CFADD__(v5++, 1);
  if ( v6 )
  {
LABEL_5:
    *result = 0;
    return result;
  }
LABEL_12:
  result[1] = v3;
  result[2] = v5;
  *result = 1;
  return result;
}
