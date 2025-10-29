void __fastcall std::sys::unix::fs::rename(int *a1, _BYTE *a2, size_t a3, _BYTE *a4, size_t n)
{
  const char *v8; // r7
  int v9; // r0
  _BYTE dest[388]; // [sp+8h] [bp-320h] BYREF
  int v11; // [sp+18Ch] [bp-19Ch] BYREF
  const char *v12; // [sp+190h] [bp-198h]
  _BYTE v13[388]; // [sp+198h] [bp-190h] BYREF
  _DWORD v14[3]; // [sp+31Ch] [bp-Ch] BYREF

  if ( a3 >> 7 > 2 )
  {
    sub_7ACA8(a1, a2, a3, a4, n);
  }
  else
  {
    memcpy(dest, a2, a3);
    dest[a3] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v11, dest, a3 + 1);
    if ( v11 )
    {
LABEL_5:
      *a1 = dword_2EA158;
      a1[1] = (int)&off_2EA14C;
      return;
    }
    v8 = v12;
    if ( n >> 7 > 2 )
    {
      sub_79EC8(a1, a4, n, v12);
    }
    else
    {
      memcpy(v13, a4, n);
      v13[n] = 0;
      core::ffi::c_str::CStr::from_bytes_with_nul(v14, v13, n + 1);
      if ( v14[0] )
        goto LABEL_5;
      if ( rename(v8, (const char *)v14[1]) == -1 )
      {
        v9 = *_errno_location();
        *a1 = 0;
        a1[1] = v9;
      }
      else
      {
        *(_BYTE *)a1 = 4;
      }
    }
  }
}
