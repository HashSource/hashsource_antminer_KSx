int __fastcall std::net::parser::<impl core::str::traits::FromStr for std::net::socket_addr::SocketAddr>::from_str(
        __int16 *a1,
        unsigned int a2,
        int a3)
{
  __int16 v4; // r5
  int result; // r0
  unsigned int v6; // [sp+0h] [bp-68h] BYREF
  int v7; // [sp+4h] [bp-64h]
  _DWORD src[8]; // [sp+8h] [bp-60h] BYREF
  _BYTE v9[32]; // [sp+28h] [bp-40h] BYREF
  _DWORD v10[8]; // [sp+48h] [bp-20h] BYREF

  v6 = a2;
  v7 = a3;
  sub_1C7618((int)v9, (int)&v6);
  if ( *(_WORD *)v9 )
  {
    LOWORD(src[1]) = *(_WORD *)&v9[6];
    src[0] = *(_DWORD *)&v9[2];
    if ( !v7 )
    {
      v4 = 0;
LABEL_7:
      result = (int)memcpy(a1 + 1, src, 0x1Eu);
      *a1 = v4;
      return result;
    }
  }
  else
  {
    sub_1C7794((int)v9, &v6);
    if ( *(_DWORD *)v9 )
    {
      memcpy((char *)v10 + 2, &v9[4], 0x1Cu);
      src[0] = v10[0];
      src[1] = v10[1];
      src[2] = v10[2];
      src[3] = v10[3];
      src[4] = v10[4];
      src[5] = v10[5];
      src[6] = v10[6];
      LOWORD(src[7]) = v10[7];
      if ( !v7 )
      {
        v4 = 1;
        goto LABEL_7;
      }
    }
  }
  *((_BYTE *)a1 + 2) = 3;
  *a1 = 2;
  return 3;
}
