int __fastcall std::net::parser::<impl core::str::traits::FromStr for std::net::ip_addr::IpAddr>::from_str(
        int a1,
        unsigned __int8 *a2,
        int a3)
{
  int v4; // r2
  unsigned int v5; // r3
  int result; // r0
  int v7; // r12
  char v8; // r1
  __int64 v9; // r2
  unsigned __int8 *v10; // [sp+0h] [bp-30h] BYREF
  int v11; // [sp+4h] [bp-2Ch]
  __int64 v12; // [sp+8h] [bp-28h]
  int v13; // [sp+10h] [bp-20h]
  _BYTE v14[13]; // [sp+18h] [bp-18h] BYREF
  int v15; // [sp+25h] [bp-Bh]

  v10 = a2;
  v11 = a3;
  sub_1C5534((int)v14, &v10);
  if ( v14[0] )
  {
    if ( v11 )
    {
LABEL_3:
      *(_WORD *)a1 = 2;
      return 2;
    }
    v7 = *(_DWORD *)&v14[1];
    v8 = 0;
    goto LABEL_8;
  }
  sub_1C5D80((int)v14, (int)&v10, v4, v5);
  if ( v14[0] )
  {
    v7 = *(_DWORD *)&v14[1];
    v12 = *(_QWORD *)&v14[5];
    v13 = v15;
    if ( v11 )
      goto LABEL_3;
    *(_QWORD *)v14 = v12;
    *(_DWORD *)&v14[8] = v13;
    v8 = 1;
LABEL_8:
    *(_DWORD *)(a1 + 1) = v7;
    *(_BYTE *)a1 = v8;
    result = *(_DWORD *)v14;
    v9 = *(_QWORD *)&v14[4];
    *(_DWORD *)(a1 + 5) = *(_DWORD *)v14;
    *(_QWORD *)(a1 + 9) = v9;
    return result;
  }
  *(_WORD *)a1 = 2;
  return 2;
}
