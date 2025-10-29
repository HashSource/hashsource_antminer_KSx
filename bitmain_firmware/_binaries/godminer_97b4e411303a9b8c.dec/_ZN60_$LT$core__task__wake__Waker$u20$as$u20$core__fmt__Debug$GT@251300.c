int __fastcall <core::task::wake::Waker as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _BYTE *v4; // r0
  int result; // r0
  int v6; // r0
  int v7; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v8; // [sp+8h] [bp-8h] BYREF
  unsigned __int8 v9; // [sp+Ch] [bp-4h]
  char v10; // [sp+Dh] [bp-3h]

  v7 = *(_DWORD *)(a1 + 4);
  v9 = (*(int (__fastcall **)(_DWORD, char *, int))(a2[1] + 12))(*a2, &aWakerwaker[5], 5);
  v10 = 0;
  v8 = a2;
  v4 = core::fmt::builders::DebugStruct::field(&v8, (int)aData_0, 4u, a1, (int)&off_2E55E0);
  core::fmt::builders::DebugStruct::field(v4, (int)aVtable, 6u, (int)&v7, (int)&off_2E55E0);
  if ( v10 )
  {
    if ( v9 )
    {
      return 1;
    }
    else
    {
      if ( (v8[6] & 4) != 0 )
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v8[1] + 12))(*v8, asc_2B4ADC, 1);
      else
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v8[1] + 12))(*v8, asc_2B4AEA, 2);
      return v6 != 0;
    }
  }
  else
  {
    result = v9;
    if ( v9 )
      return 1;
  }
  return result;
}
