void __fastcall <std::sys_common::net::LookupHost as core::convert::TryFrom<&str>>::try_from(
        _DWORD *a1,
        char *a2,
        int a3)
{
  size_t v6; // r7
  unsigned int v7; // r0
  int v8; // r8
  int v9; // r1
  char **v10; // r0
  int v11[97]; // [sp+0h] [bp-190h] BYREF
  int v12; // [sp+184h] [bp-Ch] BYREF
  char *name; // [sp+188h] [bp-8h]
  int v14; // [sp+18Ch] [bp-4h]

  v11[6] = 58;
  v11[5] = 58;
  v11[2] = 0;
  v11[3] = a3;
  v11[1] = a3;
  v11[0] = (int)a2;
  v11[4] = 1;
  sub_1BCD64(&v12, v11);
  if ( !v12 )
  {
    *a1 = 1;
    a1[1] = 2;
    a1[2] = &off_2DEE38;
    return;
  }
  v6 = (size_t)name;
  v7 = core::num::<impl core::str::traits::FromStr for u16>::from_str(&a2[v14], a3 - v14);
  if ( (v7 & 1) != 0 )
  {
    v9 = 2;
    v10 = &off_2DEE2C;
    goto LABEL_8;
  }
  v8 = HIWORD(v7);
  if ( v6 >> 7 > 2 )
  {
    sub_7A154(a1, (int)a2, v6, v8);
  }
  else
  {
    memcpy(v11, a2, v6);
    *((_BYTE *)v11 + v6) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v12, v11, v6 + 1);
    if ( v12 )
    {
      v9 = dword_2DE158;
      v10 = (char **)&off_2DE14C;
LABEL_8:
      *a1 = 1;
      a1[1] = v9;
      a1[2] = v10;
      return;
    }
    sub_1F6498((int)a1, v8, name);
  }
}
