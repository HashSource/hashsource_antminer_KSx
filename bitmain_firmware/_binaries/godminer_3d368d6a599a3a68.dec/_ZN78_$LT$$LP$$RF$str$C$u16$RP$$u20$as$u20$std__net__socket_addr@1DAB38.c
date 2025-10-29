int __fastcall <(&str,u16) as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(_DWORD *a1, int a2)
{
  size_t v2; // r6
  const void *v4; // r7
  int v5; // r8
  char v6; // r5
  int result; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r1
  int v12; // [sp+0h] [bp-1B0h] BYREF
  __int64 v13; // [sp+4h] [bp-1ACh]
  __int64 v14; // [sp+10h] [bp-1A0h] BYREF
  __int64 v15; // [sp+18h] [bp-198h]
  _BYTE v16[10]; // [sp+20h] [bp-190h] BYREF
  _DWORD v17[94]; // [sp+2Ah] [bp-186h]
  const void *v18; // [sp+1A4h] [bp-Ch] BYREF
  char *name; // [sp+1A8h] [bp-8h]

  v2 = *(_DWORD *)(a2 + 4);
  v4 = *(const void **)a2;
  v5 = *(unsigned __int16 *)(a2 + 8);
  if ( v2 <= 0xF )
  {
    *(_DWORD *)&v16[4] = *(_DWORD *)(a2 + 4);
    *(_DWORD *)v16 = v4;
    sub_1D80A8((int)&v14, (unsigned __int8 **)v16);
    if ( !*(_DWORD *)&v16[4] )
    {
      if ( (_BYTE)v14 )
      {
        v10 = *(_DWORD *)((char *)&v14 + 1);
        result = _rust_alloc(0x20u);
        if ( result )
        {
          *(_WORD *)result = 0;
          *(_WORD *)(result + 6) = v5;
          *(_DWORD *)(result + 2) = v10;
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
  name = (char *)v2;
  v18 = v4;
  sub_1D88F4((int)v16, &v18);
  if ( !name && v16[0] )
  {
    v14 = *(_QWORD *)&v16[2];
    LODWORD(v15) = v17[0];
    v6 = v16[1];
    *(_DWORD *)((char *)&v15 + 3) = *(_DWORD *)((char *)v17 + 3);
    result = _rust_alloc(0x20u);
    if ( result )
    {
      *(_DWORD *)(result + 16) = *(_DWORD *)((char *)&v15 + 3);
      v8 = HIDWORD(v14);
      v9 = v15;
      *(_DWORD *)(result + 5) = v14;
      *(_DWORD *)(result + 20) = 0;
      *(_DWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 9) = v8;
      *(_DWORD *)(result + 13) = v9;
      *(_WORD *)(result + 28) = v5;
      *(_BYTE *)(result + 4) = v6;
      *(_WORD *)result = 1;
      *a1 = 1;
      a1[1] = result;
      a1[2] = result + 32;
      a1[3] = result;
      return result;
    }
    goto LABEL_17;
  }
  if ( v2 >> 7 > 2 )
  {
    sub_7A2C4(&v14, (int)v4, v2, v5);
    if ( (_DWORD)v14 )
      goto LABEL_14;
  }
  else
  {
    memcpy(v16, v4, v2);
    v16[v2] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v18, v16, v2 + 1);
    if ( v18 )
    {
      HIDWORD(v14) = dword_2DF158;
      LODWORD(v14) = 1;
      LODWORD(v15) = &off_2DF14C;
LABEL_14:
      v11 = v15;
      *a1 = HIDWORD(v14);
      a1[1] = v11;
      a1[3] = 0;
      return 0;
    }
    sub_1F7128((int)&v14, v5, name);
    if ( (_DWORD)v14 )
      goto LABEL_14;
  }
  v12 = HIDWORD(v14);
  v13 = v15;
  return sub_1DA7C0(a1, (int)&v12);
}
