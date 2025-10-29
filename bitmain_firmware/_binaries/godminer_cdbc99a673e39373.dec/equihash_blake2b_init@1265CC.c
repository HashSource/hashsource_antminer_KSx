int __fastcall equihash_blake2b_init(char *a1, int a2)
{
  __int64 v3; // [sp+0h] [bp-48h] BYREF
  char v4; // [sp+8h] [bp-40h]
  char v5; // [sp+9h] [bp-3Fh]
  char v6; // [sp+Ah] [bp-3Eh]
  char v7; // [sp+Bh] [bp-3Dh]
  char v8; // [sp+Ch] [bp-3Ch]
  char v9; // [sp+Dh] [bp-3Bh]
  char v10; // [sp+Eh] [bp-3Ah]
  char v11; // [sp+Fh] [bp-39h]
  char v12; // [sp+10h] [bp-38h]
  char v13; // [sp+11h] [bp-37h]
  _BYTE v14[14]; // [sp+12h] [bp-36h] BYREF
  __int64 v15; // [sp+20h] [bp-28h]
  __int64 v16; // [sp+28h] [bp-20h]
  __int64 v17; // [sp+30h] [bp-18h]
  __int64 v18; // [sp+38h] [bp-10h]

  if ( (unsigned int)(a2 - 1) > 0x3F )
    return -1;
  LOWORD(v3) = (unsigned __int8)a2;
  memset(v14, 0, sizeof(v14));
  v15 = 0;
  v16 = 0;
  *(_WORD *)((char *)&v3 + 5) = 0;
  v17 = 0;
  v18 = 0;
  HIBYTE(v3) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  BYTE2(v3) = 1;
  *(_WORD *)((char *)&v3 + 3) = 1;
  return blake2b_init_param(a1, &v3);
}
