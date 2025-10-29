void __fastcall std::sys::unix::fs::chroot(_DWORD *a1, const void *a2, size_t n)
{
  int v5; // r0
  _BYTE v6[388]; // [sp+0h] [bp-190h] BYREF
  _DWORD v7[3]; // [sp+184h] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_7B6F0(a1);
  }
  else
  {
    memcpy(v6, a2, n);
    v6[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v7, v6, n + 1);
    if ( v7[0] )
    {
      *a1 = dword_2DF158;
      a1[1] = &off_2DF14C;
    }
    else if ( chroot((const char *)v7[1]) == -1 )
    {
      v5 = *_errno_location();
      *a1 = 0;
      a1[1] = v5;
    }
    else
    {
      *(_BYTE *)a1 = 4;
    }
  }
}
