bool __fastcall std::path::Path::_ends_with(_BYTE *a1, int a2, _BYTE *a3, int a4)
{
  int v4; // r6
  _BYTE *v5; // r5
  char v6; // r4
  bool v7; // r0
  _BYTE *v8; // r7
  char v9; // r8
  char v10; // r11
  char v11; // r9
  int v12; // r12
  _BYTE *v13; // r0
  _BYTE *v14; // lr
  char v15; // r7
  _BYTE *v16; // r6
  int v17; // r3
  int v18; // r4
  int v19; // r5
  char v20; // r1
  _DWORD dest[6]; // [sp+8h] [bp-94h] BYREF
  _DWORD v23[2]; // [sp+20h] [bp-7Ch] BYREF
  char v24; // [sp+28h] [bp-74h]
  __int16 v25; // [sp+3Ch] [bp-60h]
  bool v26; // [sp+3Eh] [bp-5Eh]
  _BYTE *v27; // [sp+40h] [bp-5Ch] BYREF
  int v28; // [sp+44h] [bp-58h]
  char v29; // [sp+48h] [bp-54h]
  _BYTE v30[19]; // [sp+49h] [bp-53h] BYREF
  char v31; // [sp+5Ch] [bp-40h]
  char v32; // [sp+5Dh] [bp-3Fh]
  char v33; // [sp+5Eh] [bp-3Eh]
  _BYTE src[28]; // [sp+60h] [bp-3Ch] BYREF
  _BYTE v35[8]; // [sp+7Ch] [bp-20h] BYREF
  char v36; // [sp+84h] [bp-18h]

  v4 = a2;
  v5 = a1;
  if ( !a2 )
  {
    v6 = 0;
    if ( a4 )
      goto LABEL_3;
LABEL_5:
    v7 = 0;
    goto LABEL_6;
  }
  v6 = *a1 == 47;
  if ( !a4 )
    goto LABEL_5;
LABEL_3:
  v7 = *a3 == 47;
LABEL_6:
  v26 = v7;
  v8 = src;
  v25 = 512;
  v9 = 6;
  v10 = 0;
  v11 = 2;
  v24 = 6;
  v23[1] = a4;
  v23[0] = a3;
  while ( 1 )
  {
    memcpy(v30, v8, sizeof(v30));
    v33 = v6;
    v32 = v11;
    v31 = v10;
    v29 = v9;
    v28 = v4;
    v27 = v5;
    <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)v8, (int)&v27);
    <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)v35, (int)v23);
    if ( src[8] == 10 )
      break;
    if ( v36 == 10 )
      return v6 != 2;
    if ( !sub_1EDD54(v8, v35) )
    {
      v6 = 2;
      return v6 != 2;
    }
    v5 = v27;
    v4 = v28;
    v9 = v29;
    memcpy(dest, v30, 0x13u);
    v10 = v31;
    v11 = v32;
    v6 = v33;
    if ( v29 != 6 )
    {
      v12 = v28;
      v13 = v8;
      v14 = v8;
      v15 = v33;
      v16 = v27;
      v17 = dest[1];
      v18 = dest[2];
      v19 = dest[3];
      *(_DWORD *)v13 = dest[0];
      *((_DWORD *)v13 + 1) = v17;
      *((_DWORD *)v13 + 2) = v18;
      *((_DWORD *)v13 + 3) = v19;
      v13 += 16;
      v5 = v16;
      v6 = v15;
      v4 = v12;
      v8 = v14;
      v20 = BYTE2(dest[4]);
      *(_WORD *)v13 = dest[4];
      v13[2] = v20;
    }
  }
  if ( v36 != 10 )
    v6 = 2;
  return v6 != 2;
}
