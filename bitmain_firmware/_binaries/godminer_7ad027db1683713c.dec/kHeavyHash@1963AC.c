int __fastcall kHeavyHash(int *a1, __int64 a2, int a3, int a4, _DWORD *a5, int a6)
{
  int *v7; // r0
  int v8; // r4
  int v9; // r5
  int v10; // r6
  int v11; // r7
  int v12; // r5
  int v13; // r6
  int v14; // r7
  int v15; // r7
  int v16; // r5
  unsigned int *v17; // r7
  int v18; // r3
  int v19; // r4
  int v20; // r6
  int v21; // r3
  int v22; // r4
  int v23; // r6
  unsigned int v24; // r1
  __int64 v26; // [sp+10h] [bp-260h] BYREF
  int v27; // [sp+18h] [bp-258h] BYREF
  int v28; // [sp+1Ch] [bp-254h]
  int v29; // [sp+20h] [bp-250h] BYREF
  int v30; // [sp+24h] [bp-24Ch]
  int v31; // [sp+28h] [bp-248h]
  int v32; // [sp+2Ch] [bp-244h]
  int v33; // [sp+30h] [bp-240h]
  int v34; // [sp+34h] [bp-23Ch]
  int v35; // [sp+38h] [bp-238h]
  int v36; // [sp+3Ch] [bp-234h]
  int dest[62]; // [sp+40h] [bp-230h] BYREF
  unsigned int src[62]; // [sp+138h] [bp-138h] BYREF
  _DWORD v39[8]; // [sp+230h] [bp-40h] BYREF
  _DWORD *v40; // [sp+250h] [bp-20h] BYREF
  bool (__fastcall *v41)(_DWORD *, int *); // [sp+254h] [bp-1Ch]
  unsigned int v42; // [sp+258h] [bp-18h]
  unsigned int v43; // [sp+25Ch] [bp-14h]
  unsigned int v44; // [sp+260h] [bp-10h]
  unsigned int v45; // [sp+264h] [bp-Ch]
  unsigned int v46; // [sp+268h] [bp-8h]
  unsigned int v47; // [sp+26Ch] [bp-4h]

  v27 = a3;
  v26 = a2;
  v28 = a4;
  v8 = *a1;
  v9 = a1[1];
  v10 = a1[2];
  v11 = a1[3];
  v7 = a1 + 4;
  v29 = v8;
  v30 = v9;
  v31 = v10;
  v32 = v11;
  v12 = v7[1];
  v13 = v7[2];
  v14 = v7[3];
  v33 = *v7;
  v34 = v12;
  v35 = v13;
  v36 = v14;
  if ( !a6 )
  {
    dest[3] = 4;
    src[5] = (unsigned int)sub_196294;
    src[3] = (unsigned int)sub_196294;
    dest[5] = 3;
    src[2] = (unsigned int)&v26;
    dest[4] = (int)src;
    dest[0] = 0;
    src[4] = (unsigned int)&v27;
    src[1] = (unsigned int)sub_196C0C;
    src[0] = (unsigned int)&v29;
    dest[2] = (int)&off_2C8EF0;
    std::io::stdio::_print(dest);
    a2 = v26;
  }
  dest[0] = v29;
  dest[1] = v30;
  dest[2] = v31;
  dest[3] = v32;
  dest[4] = v33;
  dest[5] = v34;
  dest[6] = v35;
  dest[7] = v36;
  sub_1966DC((int)src, 1, dest, SHIDWORD(a2), a2);
  if ( !src[61] )
  {
    dest[1] = src[1];
    dest[0] = src[0];
    core::result::unwrap_failed((int)aCalledResultUn, 43, (int)dest, (int)&off_2C8EE0, (int)&off_2C8F10);
  }
  memcpy(dest, src, sizeof(dest));
  v15 = v27;
  v16 = v28;
  dest[9] = v28;
  dest[8] = v27;
  if ( !a6 )
  {
    src[3] = 1;
    src[5] = 0;
    src[0] = 0;
    src[2] = (unsigned int)&off_2C8F20;
    src[4] = (unsigned int)aCalledResultUn;
    std::io::stdio::_print((int *)src);
  }
  memcpy(src, &dest[10], 0xC8u);
  src[18] ^= v15;
  src[19] ^= v16;
  keccak::f1600((int *)src);
  v40 = (_DWORD *)src[0];
  v41 = (bool (__fastcall *)(_DWORD *, int *))src[1];
  v42 = src[2];
  v43 = src[3];
  v44 = src[4];
  v45 = src[5];
  v46 = src[6];
  v47 = src[7];
  v17 = (unsigned int *)dest[61];
  sub_25B308((int)v39, dest[61] + 8, src);
  if ( !a6 )
  {
    src[3] = 2;
    src[5] = 1;
    src[4] = (unsigned int)&v40;
    src[0] = 0;
    v41 = sub_196AAC;
    v40 = v39;
    src[2] = (unsigned int)&off_2C8F28;
    std::io::stdio::_print((int *)src);
    src[3] = 1;
    src[2] = (unsigned int)&off_2C8F38;
    src[5] = 0;
    src[4] = (unsigned int)aCalledResultUn;
    src[0] = 0;
    std::io::stdio::_print((int *)src);
  }
  v18 = v39[1];
  v19 = v39[2];
  v20 = v39[3];
  *a5 = v39[0];
  a5[1] = v18;
  a5[2] = v19;
  a5[3] = v20;
  v21 = v39[5];
  v22 = v39[6];
  v23 = v39[7];
  a5[4] = v39[4];
  a5[5] = v21;
  a5[6] = v22;
  a5[7] = v23;
  __dmb(0xBu);
  do
    v24 = __ldrex(v17);
  while ( __strex(v24 - 1, v17) );
  if ( v24 == 1 )
  {
    __dmb(0xBu);
    sub_196A64((void **)&dest[61]);
  }
  return 0;
}
