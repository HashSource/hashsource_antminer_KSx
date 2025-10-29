int __fastcall hs_date(
        int result,
        int a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        int *a6,
        int *a7,
        _DWORD *a8)
{
  unsigned int v8; // r1
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r8
  unsigned int v12; // r3
  unsigned int v13; // r1
  int v14; // r3
  unsigned int v15; // lr
  int v16; // r4
  unsigned int v17; // r4
  unsigned int v18; // r1
  unsigned int v20; // [sp+Ch] [bp-8h]

  v8 = result / 86400 + 719468;
  v20 = v8 / 0x23AB1;
  v9 = v8 % 0x23AB1;
  v10 = v9 + v9 / 0x8EAC - v9 / 0x5B4 - v9 / 0x23AB0;
  v11 = 1506180313LL * (v10 >> 2);
  v12 = v9 + v10 / 0x8E94;
  v13 = v10 / 0x16D;
  v14 = v12 - (HIDWORD(v11) >> 7) - 365 * v13;
  v15 = (5 * v14 + 2) / 0x99u;
  if ( v15 >= 0xA )
    v16 = -9;
  else
    v16 = 3;
  v17 = v16 + v15;
  if ( a3 )
  {
    v18 = v13 + 400 * v20;
    if ( v17 <= 2 )
      ++v18;
    *a3 = v18;
  }
  if ( a4 )
    *a4 = v17;
  if ( a5 )
    *a5 = v14 + 1 - (153 * v15 + 2) / 5;
  if ( a6 )
    *a6 = result / 3600 % 24;
  if ( a7 )
    *a7 = result / 60 % 60;
  if ( a8 )
  {
    result %= 60;
    *a8 = result;
  }
  return result;
}
