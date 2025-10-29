int __fastcall <core::task::wake::Context as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r0
  _DWORD *v6; // [sp+8h] [bp-8h] BYREF
  unsigned __int8 v7; // [sp+Ch] [bp-4h]
  char v8; // [sp+Dh] [bp-3h]

  v7 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aContext_0, 7);
  v8 = 0;
  v6 = a2;
  core::fmt::builders::DebugStruct::field(&v6, (int)aWakerwaker, 5u, a1, (int)&off_2E65D0);
  if ( v8 )
  {
    if ( v7 )
    {
      return 1;
    }
    else
    {
      if ( (v6[6] & 4) != 0 )
        v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, asc_2B639C, 1);
      else
        v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, asc_2B63AA, 2);
      return v5 != 0;
    }
  }
  else
  {
    result = v7;
    if ( v7 )
      return 1;
  }
  return result;
}
