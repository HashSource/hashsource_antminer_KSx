int __fastcall std::net::parser::<impl std::net::socket_addr::SocketAddr>::parse_ascii(
        __int16 *a1,
        unsigned int a2,
        int a3)
{
  int v4; // r2
  unsigned int v5; // r3
  __int16 v6; // r0
  unsigned int v8; // [sp+0h] [bp-68h] BYREF
  int v9; // [sp+4h] [bp-64h]
  int v10; // [sp+8h] [bp-60h]
  int v11; // [sp+Ch] [bp-5Ch]
  int v12; // [sp+10h] [bp-58h]
  int v13; // [sp+14h] [bp-54h]
  int v14; // [sp+18h] [bp-50h]
  int v15; // [sp+1Ch] [bp-4Ch]
  int v16; // [sp+20h] [bp-48h]
  __int16 v17; // [sp+24h] [bp-44h]
  _BYTE v18[32]; // [sp+28h] [bp-40h] BYREF
  _DWORD v19[8]; // [sp+48h] [bp-20h] BYREF

  v8 = a2;
  v9 = a3;
  sub_1C64A8((int)v18, (int)&v8);
  if ( *(_WORD *)v18 )
  {
    LOWORD(v11) = *(_WORD *)&v18[6];
    v10 = *(_DWORD *)&v18[2];
    if ( !v9 )
    {
      v6 = 0;
LABEL_7:
      *(_DWORD *)v18 = v10;
      *(_DWORD *)&v18[4] = v11;
      *(_DWORD *)&v18[8] = v12;
      *(_DWORD *)&v18[12] = v13;
      *(_DWORD *)&v18[16] = v14;
      *(_DWORD *)&v18[20] = v15;
      *(_DWORD *)&v18[24] = v16;
      *a1 = v6;
      *(_WORD *)&v18[28] = v17;
      return (int)memcpy(a1 + 1, v18, 0x1Eu);
    }
  }
  else
  {
    sub_1C6624((int)v18, &v8, v4, v5);
    if ( *(_DWORD *)v18 )
    {
      memcpy((char *)v19 + 2, &v18[4], 0x1Cu);
      v10 = v19[0];
      v11 = v19[1];
      v12 = v19[2];
      v13 = v19[3];
      v14 = v19[4];
      v15 = v19[5];
      v16 = v19[6];
      v17 = v19[7];
      if ( !v9 )
      {
        v6 = 1;
        goto LABEL_7;
      }
    }
  }
  *a1 = 2;
  *((_BYTE *)a1 + 2) = 3;
  return 3;
}
