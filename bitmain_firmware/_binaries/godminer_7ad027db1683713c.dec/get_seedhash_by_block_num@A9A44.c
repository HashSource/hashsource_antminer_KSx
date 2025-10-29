int __fastcall get_seedhash_by_block_num(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // r0
  unsigned __int64 v6; // r6
  unsigned int v7; // r4
  int v8; // r1
  __int64 v9; // r2
  int v10; // r1
  double v11; // r2
  __int64 v13; // [sp+0h] [bp-24h] BYREF
  __int64 v14; // [sp+8h] [bp-1Ch]
  double v15; // [sp+10h] [bp-14h]
  double v16; // [sp+18h] [bp-Ch]

  v13 = 0;
  v14 = 0;
  v15 = 0.0;
  v16 = 0.0;
  LODWORD(v5) = sub_25A4F8(a3, a4, 0x7530u);
  v6 = v5;
  if ( v5 )
  {
    v7 = 0;
    do
    {
      eth_sha3_256((int)&v13, 0x20u, (int)&v13, 0x20u);
      ++v7;
    }
    while ( v7 < v6 );
  }
  v8 = HIDWORD(v13);
  v9 = v14;
  *(_DWORD *)a1 = v13;
  *(_DWORD *)(a1 + 4) = v8;
  *(_QWORD *)(a1 + 8) = v9;
  v10 = HIDWORD(v15);
  v11 = v16;
  *(_DWORD *)(a1 + 16) = LODWORD(v15);
  *(_DWORD *)(a1 + 20) = v10;
  *(double *)(a1 + 24) = v11;
  return a1;
}
