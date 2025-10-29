int __fastcall std::net::parser::<impl std::net::ip_addr::IpAddr>::parse_ascii(int a1, unsigned __int8 *a2, int a3)
{
  int result; // r0
  int v5; // r12
  char v6; // r1
  __int64 v7; // r2
  unsigned __int8 *v8; // [sp+0h] [bp-30h] BYREF
  int v9; // [sp+4h] [bp-2Ch]
  __int64 v10; // [sp+8h] [bp-28h]
  int v11; // [sp+10h] [bp-20h]
  _BYTE v12[13]; // [sp+18h] [bp-18h] BYREF
  int v13; // [sp+25h] [bp-Bh]

  v8 = a2;
  v9 = a3;
  sub_1D77F8((int)v12, &v8);
  if ( v12[0] )
  {
    if ( v9 )
    {
LABEL_3:
      *(_WORD *)a1 = 2;
      return 2;
    }
    v5 = *(_DWORD *)&v12[1];
    v6 = 0;
    goto LABEL_8;
  }
  sub_1D8044((int)v12, &v8);
  if ( v12[0] )
  {
    v5 = *(_DWORD *)&v12[1];
    v10 = *(_QWORD *)&v12[5];
    v11 = v13;
    if ( v9 )
      goto LABEL_3;
    *(_QWORD *)v12 = v10;
    *(_DWORD *)&v12[8] = v11;
    v6 = 1;
LABEL_8:
    *(_DWORD *)(a1 + 1) = v5;
    *(_BYTE *)a1 = v6;
    result = *(_DWORD *)v12;
    v7 = *(_QWORD *)&v12[4];
    *(_DWORD *)(a1 + 5) = *(_DWORD *)v12;
    *(_QWORD *)(a1 + 9) = v7;
    return result;
  }
  *(_WORD *)a1 = 2;
  return 2;
}
