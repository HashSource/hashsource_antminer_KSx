int __fastcall Sha256_Final(int a1, int a2)
{
  __int64 v2; // r4
  int v5; // r8
  __int64 i; // r4
  char v7; // r7
  bool v8; // zf
  int v9; // r3
  _BYTE *v10; // r3
  int v11; // r3
  int *v12; // r2
  int v13; // r9
  int v14; // t1
  int result; // r0

  v2 = *(_QWORD *)(a1 + 32);
  v5 = (v2 & 0x3F) + 1;
  *(_BYTE *)(a1 + (v2 & 0x3F) + 40) = 0x80;
  for ( i = 8 * v2; v5 != 56; *(_BYTE *)(v9 + 40) = 0 )
  {
    while ( 1 )
    {
      v7 = v5 & 0x3F;
      v8 = (v5 & 0x3F) == 0;
      v9 = a1 + (v5 & 0x3F);
      v5 = (v5 & 0x3F) + 1;
      if ( !v8 )
        break;
      sub_1371C4((unsigned __int8 *)a1);
      *(_BYTE *)(a1 + 40) = v7;
    }
  }
  v10 = (_BYTE *)(a1 + 96);
  do
  {
    *v10++ = HIBYTE(i);
    i <<= 8;
  }
  while ( v10 != (_BYTE *)(a1 + 104) );
  sub_1371C4((unsigned __int8 *)a1);
  v11 = a2 + 4;
  v12 = (int *)(a1 - 4);
  v13 = a2 + 36;
  do
  {
    v14 = v12[1];
    ++v12;
    v11 += 4;
    *(_BYTE *)(v11 - 8) = HIBYTE(v14);
    *(_BYTE *)(v11 - 7) = *((_WORD *)v12 + 1);
    *(_BYTE *)(v11 - 6) = BYTE1(*v12);
    result = *v12;
    *(_BYTE *)(v11 - 5) = *v12;
  }
  while ( v11 != v13 );
  *(_QWORD *)a1 = 0xBB67AE856A09E667LL;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 8) = 0xA54FF53A3C6EF372LL;
  *(_QWORD *)(a1 + 16) = 0x9B05688C510E527FLL;
  *(_QWORD *)(a1 + 24) = 0x5BE0CD191F83D9ABLL;
  return result;
}
