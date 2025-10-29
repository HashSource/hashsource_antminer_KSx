int __fastcall hs_blake2b_init_param(_DWORD *a1, unsigned __int8 *a2)
{
  _QWORD *v4; // r2
  __int64 *v5; // r3
  __int64 v6; // r0
  _DWORD *v7; // lr
  __int64 v8; // t1
  unsigned __int8 *v9; // r12
  __int64 v10; // r0
  __int64 v11; // t1

  memset(a1, 0, 0xF0u);
  v4 = a1 - 2;
  v5 = (__int64 *)&unk_2A6D18;
  v6 = 0x6A09E667F3BCC908LL;
  v7 = a1 - 2;
  while ( 1 )
  {
    *((_QWORD *)v7 + 1) = v6;
    v7 += 2;
    if ( v7 == a1 + 14 )
      break;
    v8 = *v5++;
    v6 = v8;
  }
  v9 = a2;
  do
  {
    v10 = *(_QWORD *)v9;
    v9 += 8;
    v11 = v4[1];
    *++v4 = v10 ^ v11;
  }
  while ( v4 != (_QWORD *)v7 );
  a1[57] = *a2;
  return 0;
}
