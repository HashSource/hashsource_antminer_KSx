void __fastcall std::sys::unix::fs::set_perm(_DWORD *a1, const void *a2, size_t n, __mode_t a4)
{
  const char *v7; // r6
  int v8; // r7
  _BYTE v9[388]; // [sp+0h] [bp-190h] BYREF
  _DWORD v10[3]; // [sp+184h] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_791E0(a1, (int)a2, n, a4);
  }
  else
  {
    memcpy(v9, a2, n);
    v9[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v10, v9, n + 1);
    if ( v10[0] )
    {
      *a1 = dword_2CB158;
      a1[1] = &off_2CB14C;
    }
    else
    {
      v7 = (const char *)v10[1];
      while ( chmod(v7, a4) == -1 )
      {
        v8 = *_errno_location();
        if ( (unsigned __int8)std::sys::unix::decode_error_kind(v8) != 35 )
        {
          *a1 = 0;
          a1[1] = v8;
          return;
        }
      }
      *(_BYTE *)a1 = 4;
    }
  }
}
