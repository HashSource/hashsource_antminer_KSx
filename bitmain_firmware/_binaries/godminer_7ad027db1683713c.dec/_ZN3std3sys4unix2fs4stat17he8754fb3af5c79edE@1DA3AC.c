void __fastcall std::sys::unix::fs::stat(int a1, _BYTE *a2, size_t n)
{
  int v5; // r0
  _BYTE v6[388]; // [sp+0h] [bp-2B0h] BYREF
  _DWORD v7[3]; // [sp+184h] [bp-12Ch] BYREF
  _QWORD src[23]; // [sp+190h] [bp-120h] BYREF
  _BYTE s[104]; // [sp+248h] [bp-68h] BYREF

  if ( n >> 7 > 2 )
  {
    sub_78F44((_DWORD *)a1, a2, n);
  }
  else
  {
    memcpy(v6, a2, n);
    v6[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v7, v6, n + 1);
    if ( v7[0] )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = __PAIR64__(&off_2CA14C, dword_2CA158);
    }
    else
    {
      sub_1E1EF0((int)src, -100, v7[1], 0);
      if ( src[0] == 3 )
      {
        memset(s, 0, sizeof(s));
        if ( sub_25CCC8() == -1 )
        {
          v5 = *_errno_location();
          *(_BYTE *)(a1 + 11) = 0;
          *(_WORD *)(a1 + 9) = 0;
          *(_QWORD *)a1 = 2;
          *(_BYTE *)(a1 + 8) = 0;
          *(_DWORD *)(a1 + 12) = v5;
        }
        else
        {
          memcpy(&src[9], s, 0x68u);
          *(_DWORD *)a1 = 0;
          *(_DWORD *)(a1 + 4) = 0;
          memcpy((void *)(a1 + 8), src, 0xB0u);
        }
      }
      else
      {
        memcpy((void *)a1, src, 0xB8u);
      }
    }
  }
}
