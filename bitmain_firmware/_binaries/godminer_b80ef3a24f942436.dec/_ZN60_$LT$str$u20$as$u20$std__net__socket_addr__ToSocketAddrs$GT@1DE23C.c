int __fastcall <str as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(_DWORD *a1, _BYTE *a2, int a3)
{
  _DWORD *v6; // r7
  __int16 v7; // r6
  int v8; // r1
  int v10; // r0
  int v11; // r5
  _DWORD v12[8]; // [sp+0h] [bp-88h] BYREF
  _BYTE *v13; // [sp+20h] [bp-68h] BYREF
  int v14; // [sp+24h] [bp-64h]
  int v15; // [sp+28h] [bp-60h]
  int v16; // [sp+2Ch] [bp-5Ch]
  int v17; // [sp+30h] [bp-58h]
  int v18; // [sp+34h] [bp-54h]
  int v19; // [sp+38h] [bp-50h]
  int v20; // [sp+3Ch] [bp-4Ch]
  int v21; // [sp+40h] [bp-48h]
  char v22; // [sp+44h] [bp-44h]
  _BYTE v23[32]; // [sp+48h] [bp-40h] BYREF
  _DWORD v24[8]; // [sp+68h] [bp-20h] BYREF

  v13 = a2;
  v14 = a3;
  sub_1DC4A8((int)v23, (int)&v13);
  if ( !*(_WORD *)v23 )
  {
    sub_1DC624((int)v23, (unsigned int *)&v13);
    if ( *(_DWORD *)v23 )
    {
      memcpy((char *)v24 + 1, &v23[4], 0x1Cu);
      v15 = v24[0];
      v16 = v24[1];
      v17 = v24[2];
      v6 = &v24[7];
      v18 = v24[3];
      v19 = v24[4];
      v20 = v24[5];
      v21 = v24[6];
      v22 = v24[7];
      if ( !v14 )
      {
        v7 = 1;
        goto LABEL_10;
      }
    }
LABEL_6:
    <std::sys_common::net::LookupHost as core::convert::TryFrom<&str>>::try_from(v23, a2, a3);
    if ( *(_DWORD *)v23 )
    {
      v8 = *(_DWORD *)&v23[8];
      *a1 = *(_DWORD *)&v23[4];
      a1[1] = v8;
      a1[3] = 0;
      return 0;
    }
    else
    {
      v24[0] = *(_DWORD *)&v23[4];
      v24[1] = *(_DWORD *)&v23[8];
      v24[2] = *(_DWORD *)&v23[12];
      return sub_1DDC4C(a1, (int)v24);
    }
  }
  LOBYTE(v6) = v23[2];
  v15 = *(_DWORD *)&v23[3];
  LOBYTE(v16) = v23[7];
  if ( v14 )
    goto LABEL_6;
  v7 = 0;
LABEL_10:
  v12[0] = v15;
  v12[1] = v16;
  v12[2] = v17;
  v12[3] = v18;
  v12[4] = v19;
  v12[5] = v20;
  v12[6] = v21;
  LOBYTE(v12[7]) = v22;
  v10 = _rust_alloc(0x20u);
  if ( !v10 )
    alloc::alloc::handle_alloc_error();
  v11 = v10;
  memcpy((void *)(v10 + 3), v12, 0x1Du);
  *(_BYTE *)(v11 + 2) = (_BYTE)v6;
  *(_WORD *)v11 = v7;
  *a1 = 1;
  a1[1] = v11;
  a1[2] = v11 + 32;
  a1[3] = v11;
  return v11 + 32;
}
