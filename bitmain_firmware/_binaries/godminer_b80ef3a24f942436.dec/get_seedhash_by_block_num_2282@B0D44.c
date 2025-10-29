int __fastcall get_seedhash_by_block_num_2282(int a1, int a2, int a3, int a4)
{
  unsigned __int64 v5; // r6
  unsigned int i; // r4
  int v7; // r1
  __int64 v8; // r2
  int v9; // r1
  double v10; // r2
  __int64 v12; // [sp+0h] [bp-24h] BYREF
  __int64 v13; // [sp+8h] [bp-1Ch]
  double v14; // [sp+10h] [bp-14h]
  double v15; // [sp+18h] [bp-Ch]

  v12 = 0;
  v13 = 0;
  v14 = 0.0;
  v15 = 0.0;
  v5 = sub_2704F8(a3, a4, 30000, 0);
  if ( v5 )
  {
    for ( i = 0; i < v5; ++i )
      eth_sha3_256((int)&v12, 0x20u, (int)&v12, 0x20u);
  }
  v7 = HIDWORD(v12);
  v8 = v13;
  *(_DWORD *)a1 = v12;
  *(_DWORD *)(a1 + 4) = v7;
  *(_QWORD *)(a1 + 8) = v8;
  v9 = HIDWORD(v14);
  v10 = v15;
  *(_DWORD *)(a1 + 16) = LODWORD(v14);
  *(_DWORD *)(a1 + 20) = v9;
  *(double *)(a1 + 24) = v10;
  return a1;
}
