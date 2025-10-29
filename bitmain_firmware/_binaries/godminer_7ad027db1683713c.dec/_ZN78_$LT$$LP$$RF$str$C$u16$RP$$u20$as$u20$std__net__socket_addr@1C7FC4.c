int __fastcall <(&str,u16) as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(
        _DWORD *a1,
        int a2,
        int a3,
        unsigned int a4)
{
  size_t v4; // r6
  _BYTE *v6; // r7
  __int16 v7; // r8
  char v8; // r5
  int result; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r5
  int v13; // r1
  int v14; // [sp+0h] [bp-1B0h] BYREF
  __int64 v15; // [sp+4h] [bp-1ACh]
  __int64 v16; // [sp+10h] [bp-1A0h] BYREF
  __int64 v17; // [sp+18h] [bp-198h]
  _BYTE v18[10]; // [sp+20h] [bp-190h] BYREF
  _DWORD v19[94]; // [sp+2Ah] [bp-186h]
  _BYTE *v20; // [sp+1A4h] [bp-Ch] BYREF
  char *name; // [sp+1A8h] [bp-8h]

  v4 = *(_DWORD *)(a2 + 4);
  v6 = *(_BYTE **)a2;
  v7 = *(_WORD *)(a2 + 8);
  if ( v4 <= 0xF )
  {
    *(_DWORD *)&v18[4] = *(_DWORD *)(a2 + 4);
    *(_DWORD *)v18 = v6;
    sub_1C5534((int)&v16, (unsigned __int8 **)v18);
    if ( !*(_DWORD *)&v18[4] )
    {
      if ( (_BYTE)v16 )
      {
        v12 = *(_DWORD *)((char *)&v16 + 1);
        result = _rust_alloc(0x20u);
        if ( result )
        {
          *(_WORD *)result = 0;
          *(_WORD *)(result + 6) = v7;
          *(_DWORD *)(result + 2) = v12;
          *a1 = 1;
          a1[1] = result;
          a1[2] = result + 32;
          a1[3] = result;
          return result;
        }
LABEL_17:
        alloc::alloc::handle_alloc_error();
      }
    }
  }
  name = (char *)v4;
  v20 = v6;
  sub_1C5D80((int)v18, (int)&v20, a3, a4);
  if ( !name && v18[0] )
  {
    v16 = *(_QWORD *)&v18[2];
    LODWORD(v17) = v19[0];
    v8 = v18[1];
    *(_DWORD *)((char *)&v17 + 3) = *(_DWORD *)((char *)v19 + 3);
    result = _rust_alloc(0x20u);
    if ( result )
    {
      *(_DWORD *)(result + 16) = *(_DWORD *)((char *)&v17 + 3);
      v10 = HIDWORD(v16);
      v11 = v17;
      *(_DWORD *)(result + 5) = v16;
      *(_DWORD *)(result + 20) = 0;
      *(_DWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 9) = v10;
      *(_DWORD *)(result + 13) = v11;
      *(_WORD *)(result + 28) = v7;
      *(_BYTE *)(result + 4) = v8;
      *(_WORD *)result = 1;
      *a1 = 1;
      a1[1] = result;
      a1[2] = result + 32;
      a1[3] = result;
      return result;
    }
    goto LABEL_17;
  }
  if ( v4 >> 7 > 2 )
  {
    sub_787EC(&v16, v6, v4, v7);
    if ( (_DWORD)v16 )
      goto LABEL_14;
  }
  else
  {
    memcpy(v18, v6, v4);
    v18[v4] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v20, v18, v4 + 1);
    if ( v20 )
    {
      HIDWORD(v16) = dword_2CA158;
      LODWORD(v16) = 1;
      LODWORD(v17) = &off_2CA14C;
LABEL_14:
      v13 = v17;
      *a1 = HIDWORD(v16);
      a1[1] = v13;
      a1[3] = 0;
      return 0;
    }
    sub_1E45B4((int)&v16, v7, name);
    if ( (_DWORD)v16 )
      goto LABEL_14;
  }
  v14 = HIDWORD(v16);
  v15 = v17;
  return sub_1C7C4C(a1, (int)&v14);
}
