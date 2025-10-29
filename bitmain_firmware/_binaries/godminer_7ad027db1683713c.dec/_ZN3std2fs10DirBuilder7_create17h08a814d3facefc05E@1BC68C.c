void __fastcall std::fs::DirBuilder::_create(int a1, int a2, _BYTE *src, size_t n)
{
  __mode_t v6; // r5
  int v7; // r0
  _BYTE v8[388]; // [sp+0h] [bp-190h] BYREF
  _DWORD v9[3]; // [sp+184h] [bp-Ch] BYREF

  if ( *(_BYTE *)(a2 + 4) )
  {
    sub_1BC78C((_BYTE *)a1, (__mode_t *)a2, src, n);
  }
  else
  {
    v6 = *(_DWORD *)a2;
    if ( n >> 7 > 2 )
    {
      sub_79984((_DWORD *)a1, src, n, v6);
    }
    else
    {
      memcpy(v8, src, n);
      v8[n] = 0;
      core::ffi::c_str::CStr::from_bytes_with_nul(v9, v8, n + 1);
      if ( v9[0] )
      {
        *(_DWORD *)a1 = dword_2CA158;
        *(_DWORD *)(a1 + 4) = &off_2CA14C;
      }
      else if ( mkdir((const char *)v9[1], v6) == -1 )
      {
        v7 = *_errno_location();
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = v7;
      }
      else
      {
        *(_BYTE *)a1 = 4;
      }
    }
  }
}
