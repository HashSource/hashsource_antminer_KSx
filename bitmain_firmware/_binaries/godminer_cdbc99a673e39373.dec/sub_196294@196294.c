unsigned int __fastcall sub_196294(_DWORD *s, char a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v9; // r8
  unsigned int v11; // r3
  int v12; // r12
  int v13; // r0
  char *v14; // r5
  int v15; // r2
  int v16; // r3
  int v17; // r3
  unsigned int v18; // t1
  unsigned int result; // r0

  v6 = s[32];
  v9 = v6 | a3;
  if ( v6 | a3 )
  {
    memset((char *)s + v6, 0, 128 - v6);
    *((_BYTE *)s + s[32]) = a2 & (-1 << (8 - a3));
    sub_18D4C0((int)s, 0);
    v9 = s[32];
  }
  memset(s, 0, 0x80u);
  v11 = s[65];
  v12 = s[66];
  v13 = (int)s;
  v14 = (char *)(s + 32);
  v11 <<= 10;
  v15 = a3 + v11 + 8 * v9;
  v16 = (v11 >> 22) + (v12 << 10);
  *(v14 - 128) = v15;
  *(v14 - 124) = v16;
  *(v14 - 127) = BYTE1(v15);
  *(v14 - 126) = BYTE2(v15);
  *(v14 - 125) = HIBYTE(v15);
  *(v14 - 123) = BYTE1(v16);
  *(v14 - 122) = BYTE2(v16);
  *(v14 - 121) = HIBYTE(v16);
  sub_18D4C0(v13, 1);
  v17 = a4;
  do
  {
    v18 = *((_DWORD *)v14 + 1);
    v14 += 4;
    v17 += 4;
    *(_DWORD *)(v17 - 4) = v18;
    result = v18 >> 8;
  }
  while ( a4 + 4 * a5 != v17 );
  return result;
}
