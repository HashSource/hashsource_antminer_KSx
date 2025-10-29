int __fastcall <str as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(_DWORD *a1, _BYTE *a2, int a3)
{
  int v6; // r2
  unsigned int v7; // r3
  _DWORD *v8; // r7
  __int16 v9; // r6
  int v10; // r1
  int v12; // r0
  int v13; // r5
  _DWORD v14[8]; // [sp+0h] [bp-88h] BYREF
  _BYTE *v15; // [sp+20h] [bp-68h] BYREF
  int v16; // [sp+24h] [bp-64h]
  int v17; // [sp+28h] [bp-60h]
  int v18; // [sp+2Ch] [bp-5Ch]
  int v19; // [sp+30h] [bp-58h]
  int v20; // [sp+34h] [bp-54h]
  int v21; // [sp+38h] [bp-50h]
  int v22; // [sp+3Ch] [bp-4Ch]
  int v23; // [sp+40h] [bp-48h]
  char v24; // [sp+44h] [bp-44h]
  _BYTE v25[32]; // [sp+48h] [bp-40h] BYREF
  _DWORD v26[8]; // [sp+68h] [bp-20h] BYREF

  v15 = a2;
  v16 = a3;
  sub_1C64A8((int)v25, (int)&v15);
  if ( !*(_WORD *)v25 )
  {
    sub_1C6624((int)v25, (unsigned int *)&v15, v6, v7);
    if ( *(_DWORD *)v25 )
    {
      memcpy((char *)v26 + 1, &v25[4], 0x1Cu);
      v17 = v26[0];
      v18 = v26[1];
      v19 = v26[2];
      v8 = &v26[7];
      v20 = v26[3];
      v21 = v26[4];
      v22 = v26[5];
      v23 = v26[6];
      v24 = v26[7];
      if ( !v16 )
      {
        v9 = 1;
        goto LABEL_10;
      }
    }
LABEL_6:
    <std::sys_common::net::LookupHost as core::convert::TryFrom<&str>>::try_from(v25, a2, a3);
    if ( *(_DWORD *)v25 )
    {
      v10 = *(_DWORD *)&v25[8];
      *a1 = *(_DWORD *)&v25[4];
      a1[1] = v10;
      a1[3] = 0;
      return 0;
    }
    else
    {
      v26[0] = *(_DWORD *)&v25[4];
      v26[1] = *(_DWORD *)&v25[8];
      v26[2] = *(_DWORD *)&v25[12];
      return sub_1C7C4C(a1, (int)v26);
    }
  }
  LOBYTE(v8) = v25[2];
  v17 = *(_DWORD *)&v25[3];
  LOBYTE(v18) = v25[7];
  if ( v16 )
    goto LABEL_6;
  v9 = 0;
LABEL_10:
  v14[0] = v17;
  v14[1] = v18;
  v14[2] = v19;
  v14[3] = v20;
  v14[4] = v21;
  v14[5] = v22;
  v14[6] = v23;
  LOBYTE(v14[7]) = v24;
  v12 = _rust_alloc(0x20u);
  if ( !v12 )
    alloc::alloc::handle_alloc_error();
  v13 = v12;
  memcpy((void *)(v12 + 3), v14, 0x1Du);
  *(_BYTE *)(v13 + 2) = (_BYTE)v8;
  *(_WORD *)v13 = v9;
  *a1 = 1;
  a1[1] = v13;
  a1[2] = v13 + 32;
  a1[3] = v13;
  return v13 + 32;
}
