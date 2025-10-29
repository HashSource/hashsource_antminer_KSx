int __fastcall kHeavyHash(int *a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  int *v8; // r0
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r7
  int v13; // r5
  int v14; // r6
  int v15; // r7
  int v16; // r7
  int v17; // r5
  unsigned int *v18; // r7
  int v19; // r3
  int v20; // r4
  int v21; // r6
  int v22; // r3
  int v23; // r4
  int v24; // r6
  unsigned int v25; // r1
  int v27; // [sp+10h] [bp-260h] BYREF
  int v28; // [sp+14h] [bp-25Ch]
  int v29; // [sp+18h] [bp-258h] BYREF
  int v30; // [sp+1Ch] [bp-254h]
  int v31; // [sp+20h] [bp-250h] BYREF
  int v32; // [sp+24h] [bp-24Ch]
  int v33; // [sp+28h] [bp-248h]
  int v34; // [sp+2Ch] [bp-244h]
  int v35; // [sp+30h] [bp-240h]
  int v36; // [sp+34h] [bp-23Ch]
  int v37; // [sp+38h] [bp-238h]
  int v38; // [sp+3Ch] [bp-234h]
  _DWORD dest[62]; // [sp+40h] [bp-230h] BYREF
  _DWORD src[62]; // [sp+138h] [bp-138h] BYREF
  _DWORD v41[8]; // [sp+230h] [bp-40h] BYREF
  _DWORD *v42; // [sp+250h] [bp-20h] BYREF
  int (*v43)(); // [sp+254h] [bp-1Ch]
  int v44; // [sp+258h] [bp-18h]
  int v45; // [sp+25Ch] [bp-14h]
  int v46; // [sp+260h] [bp-10h]
  int v47; // [sp+264h] [bp-Ch]
  int v48; // [sp+268h] [bp-8h]
  int v49; // [sp+26Ch] [bp-4h]

  v29 = a5;
  v28 = a4;
  v27 = a3;
  v30 = a6;
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v12 = a1[3];
  v8 = a1 + 4;
  v31 = v9;
  v32 = v10;
  v33 = v11;
  v34 = v12;
  v13 = v8[1];
  v14 = v8[2];
  v15 = v8[3];
  v35 = *v8;
  v36 = v13;
  v37 = v14;
  v38 = v15;
  if ( !a8 )
  {
    dest[3] = 4;
    src[5] = sub_197404;
    src[3] = sub_197404;
    dest[5] = 3;
    src[2] = &v27;
    dest[4] = src;
    dest[0] = 0;
    src[4] = &v29;
    src[1] = sub_197D7C;
    src[0] = &v31;
    dest[2] = &off_2C9EF0;
    std::io::stdio::_print(dest);
    a3 = v27;
    a4 = v28;
  }
  dest[0] = v31;
  dest[1] = v32;
  dest[2] = v33;
  dest[3] = v34;
  dest[4] = v35;
  dest[5] = v36;
  dest[6] = v37;
  dest[7] = v38;
  sub_19784C(src, 1, dest, a4, a3, a4);
  if ( !src[61] )
  {
    dest[1] = src[1];
    dest[0] = src[0];
    core::result::unwrap_failed((int)aCalledResultUn, 43, (int)dest, (int)&off_2C9EE0, (int)&off_2C9F10);
  }
  memcpy(dest, src, sizeof(dest));
  v16 = v29;
  v17 = v30;
  dest[9] = v30;
  dest[8] = v29;
  if ( !a8 )
  {
    src[3] = 1;
    src[5] = 0;
    src[0] = 0;
    src[2] = &off_2C9F20;
    src[4] = aCalledResultUn;
    std::io::stdio::_print(src);
  }
  memcpy(src, &dest[10], 0xC8u);
  src[18] ^= v16;
  src[19] ^= v17;
  keccak::f1600(src);
  v42 = (_DWORD *)src[0];
  v43 = (int (*)())src[1];
  v44 = src[2];
  v45 = src[3];
  v46 = src[4];
  v47 = src[5];
  v48 = src[6];
  v49 = src[7];
  v18 = (unsigned int *)dest[61];
  sub_25C478(v41, dest[61] + 8, src);
  if ( !a8 )
  {
    src[3] = 2;
    src[5] = 1;
    src[4] = &v42;
    src[0] = 0;
    v43 = sub_197C1C;
    v42 = v41;
    src[2] = &off_2C9F28;
    std::io::stdio::_print(src);
    src[3] = 1;
    src[2] = &off_2C9F38;
    src[5] = 0;
    src[4] = aCalledResultUn;
    src[0] = 0;
    std::io::stdio::_print(src);
  }
  v19 = v41[1];
  v20 = v41[2];
  v21 = v41[3];
  *a7 = v41[0];
  a7[1] = v19;
  a7[2] = v20;
  a7[3] = v21;
  v22 = v41[5];
  v23 = v41[6];
  v24 = v41[7];
  a7[4] = v41[4];
  a7[5] = v22;
  a7[6] = v23;
  a7[7] = v24;
  __dmb(0xBu);
  do
    v25 = __ldrex(v18);
  while ( __strex(v25 - 1, v18) );
  if ( v25 == 1 )
  {
    __dmb(0xBu);
    sub_197BD4(&dest[61]);
  }
  return 0;
}
