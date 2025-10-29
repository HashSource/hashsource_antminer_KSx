bool __fastcall <core::core_simd::swizzle::Which as core::fmt::Debug>::fmt(int *a1, _DWORD *a2)
{
  int v3; // t1
  unsigned __int8 v4; // r0
  int v5; // r4
  _DWORD *v6; // r5
  _DWORD *v8; // [sp+0h] [bp-10h] BYREF
  int v9; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v10; // [sp+8h] [bp-8h]
  unsigned __int8 v11; // [sp+Ch] [bp-4h]
  char v12; // [sp+Dh] [bp-3h]

  v3 = *a1;
  v8 = a1 + 1;
  if ( v3 )
    v4 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aSecond, 6);
  else
    v4 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aFirst, 5);
  v11 = v4;
  v12 = 0;
  v9 = 0;
  v10 = a2;
  core::fmt::builders::DebugTuple::field(&v9, (int)&v8, (int)&off_2D0908);
  if ( v9 )
  {
    v5 = 1;
    if ( !v11 )
    {
      v6 = v10;
      if ( v9 != 1
        || !v12
        || (v10[6] & 4) != 0
        || (v5 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v10[1] + 12))(*v10, asc_2A06EF, 1)) )
      {
        v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, asc_2A01F9, 1);
      }
    }
  }
  else
  {
    v5 = v11;
  }
  return v5 != 0;
}
