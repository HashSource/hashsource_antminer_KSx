int __fastcall std::net::parser::<impl std::net::socket_addr::SocketAddr>::parse_ascii(
        __int16 *a1,
        unsigned int a2,
        int a3)
{
  __int16 v4; // r0
  unsigned int v6; // [sp+0h] [bp-68h] BYREF
  int v7; // [sp+4h] [bp-64h]
  int v8; // [sp+8h] [bp-60h]
  int v9; // [sp+Ch] [bp-5Ch]
  int v10; // [sp+10h] [bp-58h]
  int v11; // [sp+14h] [bp-54h]
  int v12; // [sp+18h] [bp-50h]
  int v13; // [sp+1Ch] [bp-4Ch]
  int v14; // [sp+20h] [bp-48h]
  __int16 v15; // [sp+24h] [bp-44h]
  _BYTE v16[32]; // [sp+28h] [bp-40h] BYREF
  _DWORD v17[8]; // [sp+48h] [bp-20h] BYREF

  v6 = a2;
  v7 = a3;
  sub_1D876C((int)v16, (int)&v6);
  if ( *(_WORD *)v16 )
  {
    LOWORD(v9) = *(_WORD *)&v16[6];
    v8 = *(_DWORD *)&v16[2];
    if ( !v7 )
    {
      v4 = 0;
LABEL_7:
      *(_DWORD *)v16 = v8;
      *(_DWORD *)&v16[4] = v9;
      *(_DWORD *)&v16[8] = v10;
      *(_DWORD *)&v16[12] = v11;
      *(_DWORD *)&v16[16] = v12;
      *(_DWORD *)&v16[20] = v13;
      *(_DWORD *)&v16[24] = v14;
      *a1 = v4;
      *(_WORD *)&v16[28] = v15;
      return (int)memcpy(a1 + 1, v16, 0x1Eu);
    }
  }
  else
  {
    sub_1D88E8((int)v16, &v6);
    if ( *(_DWORD *)v16 )
    {
      memcpy((char *)v17 + 2, &v16[4], 0x1Cu);
      v8 = v17[0];
      v9 = v17[1];
      v10 = v17[2];
      v11 = v17[3];
      v12 = v17[4];
      v13 = v17[5];
      v14 = v17[6];
      v15 = v17[7];
      if ( !v7 )
      {
        v4 = 1;
        goto LABEL_7;
      }
    }
  }
  *a1 = 2;
  *((_BYTE *)a1 + 2) = 3;
  return 3;
}
