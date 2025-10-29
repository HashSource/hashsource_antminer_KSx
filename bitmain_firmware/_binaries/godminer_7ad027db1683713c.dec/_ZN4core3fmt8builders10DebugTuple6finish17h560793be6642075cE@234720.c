bool __fastcall core::fmt::builders::DebugTuple::finish(int *a1)
{
  int v2; // r1
  int v3; // r0
  int v5; // r5
  _DWORD *v6; // r6
  int v7; // r5

  v2 = *((unsigned __int8 *)a1 + 8);
  v3 = *a1;
  if ( v3 )
  {
    if ( v2 )
    {
LABEL_3:
      *((_BYTE *)a1 + 8) = 1;
      return 1;
    }
    if ( v3 == 1 && *((_BYTE *)a1 + 9) )
    {
      v6 = (_DWORD *)a1[1];
      if ( (v6[6] & 4) == 0 && (*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, asc_29F19F, 1) )
        goto LABEL_3;
    }
    else
    {
      v6 = (_DWORD *)a1[1];
    }
    v7 = (*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, asc_29ECA9, 1);
    *((_BYTE *)a1 + 8) = v7;
    return v7 != 0;
  }
  else
  {
    v5 = v2;
    if ( v2 )
      return 1;
    return v5;
  }
}
