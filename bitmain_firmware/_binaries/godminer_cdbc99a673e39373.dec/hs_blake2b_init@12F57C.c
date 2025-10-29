int __fastcall hs_blake2b_init(_DWORD *a1, int a2)
{
  unsigned __int8 v3[4]; // [sp+0h] [bp-48h] BYREF
  int v4; // [sp+4h] [bp-44h]
  int v5; // [sp+8h] [bp-40h]
  int v6; // [sp+Ch] [bp-3Ch]
  char v7; // [sp+10h] [bp-38h]
  char v8; // [sp+11h] [bp-37h]
  _BYTE v9[14]; // [sp+12h] [bp-36h] BYREF
  __int64 v10; // [sp+20h] [bp-28h]
  __int64 v11; // [sp+28h] [bp-20h]
  __int64 v12; // [sp+30h] [bp-18h]
  __int64 v13; // [sp+38h] [bp-10h]

  if ( (unsigned int)(a2 - 1) > 0x3F )
    return -1;
  v3[0] = a2;
  memset(v9, 0, sizeof(v9));
  v3[1] = 0;
  v4 = 0;
  v10 = 0;
  v11 = 0;
  v5 = 0;
  v12 = 0;
  v13 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v3[2] = 1;
  v3[3] = 1;
  return hs_blake2b_init_param(a1, v3);
}
