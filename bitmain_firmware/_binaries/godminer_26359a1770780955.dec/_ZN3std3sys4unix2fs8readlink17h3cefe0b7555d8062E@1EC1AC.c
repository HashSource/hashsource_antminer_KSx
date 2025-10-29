void __fastcall std::sys::unix::fs::readlink(_DWORD *a1, const void *a2, size_t n)
{
  _BYTE v5[388]; // [sp+0h] [bp-190h] BYREF
  _DWORD v6[3]; // [sp+184h] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_7A7BC(a1);
  }
  else
  {
    memcpy(v5, a2, n);
    v5[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v6, v5, n + 1);
    if ( v6[0] )
    {
      *a1 = 1;
      a1[1] = dword_2DF158;
      a1[2] = &off_2DF14C;
    }
    else
    {
      sub_1EC258(a1, v6[1]);
    }
  }
}
