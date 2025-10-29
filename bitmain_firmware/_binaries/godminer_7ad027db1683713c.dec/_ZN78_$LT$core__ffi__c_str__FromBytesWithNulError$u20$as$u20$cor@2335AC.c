int __fastcall <core::ffi::c_str::FromBytesWithNulError as core::fmt::Display>::fmt(int *a1, int *a2)
{
  int v3; // r2
  int v4; // r5
  int v5; // r7
  void *v6; // r3
  int v7; // r8
  int result; // r0
  bool v9; // zf
  int v10; // [sp+4h] [bp-24h] BYREF
  _DWORD v11[2]; // [sp+8h] [bp-20h] BYREF
  int v12[6]; // [sp+10h] [bp-18h] BYREF

  v3 = 35;
  v4 = a2[1];
  v5 = *a1;
  v6 = &unk_29EF78;
  v7 = *a2;
  if ( !*a1 )
  {
    v6 = &unk_29EF9B;
    v3 = 43;
  }
  result = (*(int (__fastcall **)(_DWORD, void *, int))(v4 + 12))(*a2, v6, v3);
  v9 = result == 0;
  if ( !result )
    v9 = v5 == 0;
  if ( v9 )
  {
    v10 = a1[1];
    v11[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11[0] = &v10;
    v12[4] = (int)v11;
    v12[5] = 1;
    v12[3] = 1;
    v12[2] = (int)&off_2CEF9C;
    v12[0] = 0;
    return core::fmt::write(v7, v4, v12);
  }
  return result;
}
