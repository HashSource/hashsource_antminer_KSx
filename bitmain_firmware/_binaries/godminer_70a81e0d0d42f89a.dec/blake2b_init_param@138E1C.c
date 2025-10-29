int __fastcall blake2b_init_param(char *a1, __int64 *a2)
{
  char *v4; // r3
  __int64 *v5; // r1
  __int64 v6; // r6
  char *v7; // r2
  __int64 v8; // t1
  __int64 *v9; // r12
  __int64 v10; // d16
  __int64 v11; // t1

  memset(a1, 0, 0x168u);
  v4 = a1 - 8;
  v5 = (__int64 *)&unk_29D2C8;
  v6 = 0x6A09E667F3BCC908LL;
  v7 = a1 - 8;
  while ( 1 )
  {
    *((_QWORD *)v7 + 1) = v6;
    v7 += 8;
    if ( v7 == a1 + 56 )
      break;
    v8 = *v5++;
    v6 = v8;
  }
  v9 = a2;
  do
  {
    v10 = *v9++;
    v11 = *((_QWORD *)v4 + 1);
    v4 += 8;
    *(_QWORD *)v4 = v10 ^ v11;
  }
  while ( v4 != v7 );
  return 0;
}
