int __fastcall <alloc::ffi::c_str::FromVecWithNulError as core::fmt::Display>::fmt(_DWORD *a1, int a2)
{
  int v3; // [sp+4h] [bp-24h] BYREF
  _DWORD v4[2]; // [sp+8h] [bp-20h] BYREF
  int v5; // [sp+10h] [bp-18h] BYREF
  char **v6; // [sp+18h] [bp-10h]
  int v7; // [sp+1Ch] [bp-Ch]
  _DWORD *v8; // [sp+20h] [bp-8h]
  int v9; // [sp+24h] [bp-4h]

  if ( *a1 )
  {
    v7 = 1;
    v9 = 0;
    v5 = 0;
    v6 = &off_2E27F8;
    v8 = &unk_2B1B68;
  }
  else
  {
    v3 = a1[1];
    v7 = 1;
    v9 = 1;
    v8 = v4;
    v6 = &off_2E2800;
    v5 = 0;
    v4[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v4[0] = &v3;
  }
  return core::fmt::Formatter::write_fmt(a2, &v5);
}
