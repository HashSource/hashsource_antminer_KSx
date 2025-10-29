bool __fastcall sub_1E1500(int a1, int a2)
{
  int v2; // r4
  size_t v4; // r8
  unsigned int v6; // r5
  bool v7; // zf
  int v8; // r9
  __int64 v9; // r10
  const void *v10; // r4
  const void *v11; // r9
  char v12; // r6
  char v14; // [sp+4h] [bp-108h]
  char v15; // [sp+Ch] [bp-100h]
  int v16; // [sp+10h] [bp-FCh]
  char v17; // [sp+14h] [bp-F8h]
  char v18; // [sp+1Ch] [bp-F0h]
  _DWORD src[6]; // [sp+20h] [bp-ECh] BYREF
  _DWORD v20[6]; // [sp+38h] [bp-D4h] BYREF
  _DWORD v21[2]; // [sp+50h] [bp-BCh] BYREF
  char v22; // [sp+58h] [bp-B4h]
  _BYTE v23[23]; // [sp+59h] [bp-B3h] BYREF
  _DWORD v24[2]; // [sp+70h] [bp-9Ch] BYREF
  char v25; // [sp+78h] [bp-94h]
  _BYTE v26[23]; // [sp+79h] [bp-93h] BYREF
  _DWORD v27[2]; // [sp+90h] [bp-7Ch] BYREF
  int v28; // [sp+98h] [bp-74h]
  int v29; // [sp+9Ch] [bp-70h]
  int v30; // [sp+A0h] [bp-6Ch]
  int v31; // [sp+A4h] [bp-68h]
  int v32; // [sp+A8h] [bp-64h]
  _DWORD v33[2]; // [sp+B0h] [bp-5Ch] BYREF
  int v34; // [sp+B8h] [bp-54h]
  int v35; // [sp+BCh] [bp-50h]
  int v36; // [sp+C0h] [bp-4Ch]
  int v37; // [sp+C4h] [bp-48h]
  int v38; // [sp+C8h] [bp-44h]
  _BYTE dest[20]; // [sp+D0h] [bp-3Ch] BYREF
  int v40; // [sp+E4h] [bp-28h]
  int v41; // [sp+E8h] [bp-24h]
  _DWORD v42[8]; // [sp+ECh] [bp-20h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a1 + 4);
  v6 = *(unsigned __int8 *)(a1 + 8);
  v7 = v4 == v2;
  v8 = *(unsigned __int8 *)(a2 + 28);
  LODWORD(v9) = *(unsigned __int8 *)(a2 + 29);
  HIDWORD(v9) = *(unsigned __int8 *)(a1 + 29);
  if ( v4 == v2 )
    v7 = *(unsigned __int8 *)(a1 + 28) == v8;
  v18 = *(_BYTE *)(a1 + 28);
  if ( v7
    && v9 == 0x200000002LL
    && v6 > 2 != *(unsigned __int8 *)(a2 + 8) < 3u
    && !bcmp(*(const void **)a1, *(const void **)a2, v4) )
  {
    return 1;
  }
  v16 = v2;
  v17 = v8;
  v10 = *(const void **)a1;
  v15 = BYTE4(v9);
  if ( v6 != 6 )
    memcpy(dest, (const void *)(a1 + 9), 0x13u);
  v14 = *(_BYTE *)(a1 + 30);
  src[0] = *(_DWORD *)dest;
  src[1] = *(_DWORD *)&dest[4];
  src[2] = *(_DWORD *)&dest[8];
  src[3] = *(_DWORD *)&dest[12];
  HIDWORD(v9) = *(unsigned __int8 *)(a2 + 8);
  v11 = *(const void **)a2;
  LOWORD(src[4]) = *(_WORD *)&dest[16];
  BYTE2(src[4]) = dest[18];
  if ( HIDWORD(v9) != 6 )
    memcpy(dest, (const void *)(a2 + 9), 0x13u);
  v12 = *(_BYTE *)(a2 + 30);
  v20[0] = *(_DWORD *)dest;
  v20[1] = *(_DWORD *)&dest[4];
  v20[2] = *(_DWORD *)&dest[8];
  v20[3] = *(_DWORD *)&dest[12];
  LOWORD(v20[4]) = *(_WORD *)&dest[16];
  BYTE2(v20[4]) = dest[18];
  v22 = v6;
  v21[1] = v4;
  v21[0] = v10;
  memcpy(v23, src, 0x13u);
  v23[21] = v14;
  v23[20] = v15;
  v23[19] = v18;
  v24[1] = v16;
  v25 = BYTE4(v9);
  v24[0] = v11;
  memcpy(v26, v20, 0x13u);
  v26[20] = v9;
  v26[19] = v17;
  v26[21] = v12;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)v27, (int)v21);
  if ( (unsigned __int8)v28 == 10 )
  {
LABEL_14:
    <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)dest, (int)v24);
    return dest[8] == 10;
  }
  else
  {
    while ( 1 )
    {
      <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)v33, (int)v24);
      if ( (unsigned __int8)v34 == 10 )
        return 0;
      *(_DWORD *)dest = v27[0];
      *(_DWORD *)&dest[4] = v27[1];
      *(_DWORD *)&dest[8] = v28;
      *(_DWORD *)&dest[12] = v29;
      *(_DWORD *)&dest[16] = v30;
      v40 = v31;
      v41 = v32;
      v42[0] = v33[0];
      v42[1] = v33[1];
      v42[2] = v34;
      v42[3] = v35;
      v42[4] = v36;
      v42[5] = v37;
      v42[6] = v38;
      if ( !sub_1EAB28(dest, v42) )
        return 0;
      <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)v27, (int)v21);
      if ( (unsigned __int8)v28 == 10 )
        goto LABEL_14;
    }
  }
}
