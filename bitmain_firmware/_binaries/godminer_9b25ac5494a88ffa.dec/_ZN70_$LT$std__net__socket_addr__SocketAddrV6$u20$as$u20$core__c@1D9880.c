int __fastcall <std::net::socket_addr::SocketAddrV6 as core::cmp::Ord>::cmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  bool v4; // zf
  int v5; // r12
  unsigned int v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r3
  unsigned int v24; // r1
  unsigned int v25; // r2
  int result; // r0

  v2 = *a2;
  v3 = *a1;
  v5 = v3 - v2;
  v4 = v3 == v2;
  v6 = bswap32(v2);
  v7 = __rev16(v3);
  if ( !v4 )
    v5 = 1;
  if ( v7 < HIWORD(v6) )
    v5 = -1;
  if ( !v5 )
  {
    v8 = a2[1];
    v9 = a1[1];
    v5 = v9 - v8;
    v4 = v9 == v8;
    v10 = bswap32(v8);
    v11 = __rev16(v9);
    if ( !v4 )
      v5 = 1;
    if ( v11 < HIWORD(v10) )
      v5 = -1;
    if ( !v5 )
    {
      v12 = a1[2];
      v13 = a2[2];
      v5 = v12 != v13;
      if ( __rev16(v12) < __rev16(v13) )
        v5 = -1;
      if ( !v5 )
      {
        v14 = a1[3];
        v15 = a2[3];
        v5 = v14 != v15;
        if ( __rev16(v14) < __rev16(v15) )
          v5 = -1;
        if ( !v5 )
        {
          v16 = a1[4];
          v17 = a2[4];
          v5 = v16 != v17;
          if ( __rev16(v16) < __rev16(v17) )
            v5 = -1;
          if ( !v5 )
          {
            v18 = a1[5];
            v19 = a2[5];
            v5 = v18 != v19;
            if ( __rev16(v18) < __rev16(v19) )
              v5 = -1;
            if ( !v5 )
            {
              v20 = a1[6];
              v21 = a2[6];
              v5 = v20 != v21;
              if ( __rev16(v20) < __rev16(v21) )
                v5 = -1;
              if ( !v5 )
              {
                v22 = a1[7];
                v23 = a2[7];
                v5 = v22 != v23;
                if ( __rev16(v22) < __rev16(v23) )
                  v5 = -1;
              }
            }
          }
        }
      }
    }
  }
  v24 = a2[12];
  v25 = a1[12];
  result = v25 != v24;
  if ( v25 < v24 )
    result = -1;
  if ( (_BYTE)v5 )
    return v5;
  return result;
}
