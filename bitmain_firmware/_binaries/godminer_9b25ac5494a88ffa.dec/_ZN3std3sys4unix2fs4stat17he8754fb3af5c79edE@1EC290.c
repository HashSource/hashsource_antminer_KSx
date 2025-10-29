void __fastcall std::sys::unix::fs::stat(int a1, const void *a2, size_t n)
{
  int v5; // r7
  int v6; // r0
  _BYTE v7[388]; // [sp+0h] [bp-2B0h] BYREF
  int v8; // [sp+184h] [bp-12Ch] BYREF
  int v9; // [sp+188h] [bp-128h]
  _QWORD src[23]; // [sp+190h] [bp-120h] BYREF
  _BYTE s[104]; // [sp+248h] [bp-68h] BYREF

  if ( n >> 7 > 2 )
  {
    sub_7A8AC((_DWORD *)a1);
  }
  else
  {
    memcpy(v7, a2, n);
    v7[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v8, v7, n + 1);
    if ( v8 )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = __PAIR64__(&off_2DE14C, dword_2DE158);
    }
    else
    {
      v5 = v9;
      sub_1F3DD4(src, -100, v9, 0);
      if ( src[0] == 3 )
      {
        memset(s, 0, sizeof(s));
        if ( sub_26EBB0(v5, s) == -1 )
        {
          v6 = *_errno_location();
          *(_BYTE *)(a1 + 11) = 0;
          *(_WORD *)(a1 + 9) = 0;
          *(_QWORD *)a1 = 2;
          *(_BYTE *)(a1 + 8) = 0;
          *(_DWORD *)(a1 + 12) = v6;
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
