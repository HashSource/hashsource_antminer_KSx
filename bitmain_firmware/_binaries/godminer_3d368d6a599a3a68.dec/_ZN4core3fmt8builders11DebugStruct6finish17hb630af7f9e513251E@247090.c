int __fastcall core::fmt::builders::DebugStruct::finish(unsigned __int8 *a1)
{
  int v2; // r1
  int v3; // r0
  _DWORD *v4; // r1
  int result; // r0

  v2 = a1[4];
  if ( a1[5] )
  {
    v3 = 1;
    if ( !v2 )
    {
      v4 = *(_DWORD **)a1;
      if ( (*(_BYTE *)(*(_DWORD *)a1 + 24) & 4) != 0 )
        v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(v4[1] + 12))(*v4, asc_2B487C, 1);
      else
        v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(v4[1] + 12))(*v4, asc_2B488A, 2);
    }
    a1[4] = v3;
    return v3 != 0;
  }
  else
  {
    result = a1[4];
    if ( v2 )
      return 1;
  }
  return result;
}
