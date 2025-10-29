int __fastcall std::net::parser::<impl core::str::traits::FromStr for std::net::socket_addr::SocketAddr>::from_str(
        __int16 *a1,
        unsigned int a2,
        int a3)
{
  int v4; // r2
  unsigned int v5; // r3
  __int16 v6; // r5
  int result; // r0
  unsigned int v8; // [sp+0h] [bp-68h] BYREF
  int v9; // [sp+4h] [bp-64h]
  _DWORD src[8]; // [sp+8h] [bp-60h] BYREF
  _BYTE v11[32]; // [sp+28h] [bp-40h] BYREF
  _DWORD v12[8]; // [sp+48h] [bp-20h] BYREF

  v8 = a2;
  v9 = a3;
  sub_1C64A8((int)v11, (int)&v8);
  if ( *(_WORD *)v11 )
  {
    LOWORD(src[1]) = *(_WORD *)&v11[6];
    src[0] = *(_DWORD *)&v11[2];
    if ( !v9 )
    {
      v6 = 0;
LABEL_7:
      result = (int)memcpy(a1 + 1, src, 0x1Eu);
      *a1 = v6;
      return result;
    }
  }
  else
  {
    sub_1C6624((int)v11, &v8, v4, v5);
    if ( *(_DWORD *)v11 )
    {
      memcpy((char *)v12 + 2, &v11[4], 0x1Cu);
      src[0] = v12[0];
      src[1] = v12[1];
      src[2] = v12[2];
      src[3] = v12[3];
      src[4] = v12[4];
      src[5] = v12[5];
      src[6] = v12[6];
      LOWORD(src[7]) = v12[7];
      if ( !v9 )
      {
        v6 = 1;
        goto LABEL_7;
      }
    }
  }
  *((_BYTE *)a1 + 2) = 3;
  *a1 = 2;
  return 3;
}
