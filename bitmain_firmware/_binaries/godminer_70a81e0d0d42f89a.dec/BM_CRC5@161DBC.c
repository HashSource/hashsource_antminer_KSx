int __fastcall BM_CRC5(_BYTE *a1, int a2)
{
  unsigned __int8 v2; // r3
  int v3; // r12
  int v5; // r7
  int result; // r0
  int v7; // r5
  int v8; // r6
  int v9; // r4
  unsigned int v10; // lr
  unsigned int v11; // r2
  bool v12; // zf
  int v13; // r9
  unsigned __int8 v14; // r2

  if ( !a2 )
  {
    v13 = 1;
    LOBYTE(result) = 28;
LABEL_24:
    result = (unsigned __int8)result | 2;
    goto LABEL_20;
  }
  v2 = 1;
  v3 = 0;
  v5 = 1;
  result = 1;
  v7 = 1;
  v8 = 1;
  v9 = 0;
  v10 = 128;
  while ( 1 )
  {
    ++v3;
    ++v9;
    v11 = *a1 & v10;
    v10 >>= 1;
    if ( v11 )
      v2 ^= 1u;
    v12 = v3 == 8;
    if ( v3 == 8 )
      ++a1;
    v13 = v2;
    if ( v3 == 8 )
      v3 = 0;
    v14 = v2 ^ v7;
    if ( v12 )
      v10 = 128;
    v2 = result;
    if ( a2 == v9 )
      break;
    result = v5;
    v7 = v8;
    v5 = v14;
    v8 = v13;
  }
  if ( result )
    result = 16;
  if ( v5 )
    result = (unsigned __int8)result | 8;
  if ( v13 != v7 )
    result = (unsigned __int8)result | 4;
  if ( v8 )
    goto LABEL_24;
LABEL_20:
  if ( v13 )
    return (unsigned __int8)result | 1;
  return result;
}
