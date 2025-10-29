void __fastcall std::sys::unix::fs::remove_dir_impl::remove_dir_all(_DWORD *a1, const void *a2, size_t a3)
{
  int v6; // r1
  int v7; // r2
  int v8; // r0
  __int64 v9; // [sp+8h] [bp-190h] BYREF
  int v10; // [sp+10h] [bp-188h]
  int v11; // [sp+14h] [bp-184h]
  int v12; // [sp+68h] [bp-130h]
  int v13; // [sp+18Ch] [bp-Ch] BYREF
  char *name; // [sp+190h] [bp-8h]

  std::sys::unix::fs::lstat((int)&v9, a2, a3);
  if ( v9 == 2 )
  {
    v6 = v11;
    *a1 = v10;
    a1[1] = v6;
    return;
  }
  if ( (v12 & 0xF000) != 0xA000 )
  {
    if ( a3 >> 7 > 2 )
    {
      sub_7A9A4(a1);
      return;
    }
    memcpy(&v9, a2, a3);
    *((_BYTE *)&v9 + a3) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v13, &v9, a3 + 1);
    if ( !v13 )
    {
      sub_1EF5C8((int)a1, 0, v7, (int)name);
      return;
    }
LABEL_10:
    *a1 = dword_2E1158;
    a1[1] = &off_2E114C;
    return;
  }
  if ( a3 >> 7 > 2 )
  {
    sub_7AF7C(a1);
    return;
  }
  memcpy(&v9, a2, a3);
  *((_BYTE *)&v9 + a3) = 0;
  core::ffi::c_str::CStr::from_bytes_with_nul(&v13, &v9, a3 + 1);
  if ( v13 )
    goto LABEL_10;
  if ( unlink(name) == -1 )
  {
    v8 = *_errno_location();
    *a1 = 0;
    a1[1] = v8;
  }
  else
  {
    *(_BYTE *)a1 = 4;
  }
}
