void __fastcall std::sys::unix::fs::link(int a1, _BYTE *a2, size_t a3, _BYTE *a4, size_t n)
{
  int v8; // r7
  int v9; // r0
  _BYTE dest[388]; // [sp+8h] [bp-320h] BYREF
  int v11; // [sp+18Ch] [bp-19Ch] BYREF
  int v12; // [sp+190h] [bp-198h]
  _BYTE v13[388]; // [sp+198h] [bp-190h] BYREF
  _DWORD v14[3]; // [sp+31Ch] [bp-Ch] BYREF

  if ( a3 >> 7 > 2 )
  {
    sub_7A158(a1, a2, a3, a4, n);
  }
  else
  {
    memcpy(dest, a2, a3);
    dest[a3] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v11, dest, a3 + 1);
    if ( v11 )
    {
LABEL_5:
      *(_DWORD *)a1 = dword_2EA158;
      *(_DWORD *)(a1 + 4) = &off_2EA14C;
      return;
    }
    v8 = v12;
    if ( n >> 7 > 2 )
    {
      sub_7B2E8(a1, a4, n, v12);
    }
    else
    {
      memcpy(v13, a4, n);
      v13[n] = 0;
      core::ffi::c_str::CStr::from_bytes_with_nul(v14, v13, n + 1);
      if ( v14[0] )
        goto LABEL_5;
      if ( linkat(-100, v8, -100, v14[1], 0) == -1 )
      {
        v9 = *_errno_location();
        *(_BYTE *)(a1 + 3) = 0;
        *(_WORD *)(a1 + 1) = 0;
        *(_BYTE *)a1 = 0;
        *(_DWORD *)(a1 + 4) = v9;
      }
      else
      {
        *(_BYTE *)a1 = 4;
      }
    }
  }
}
