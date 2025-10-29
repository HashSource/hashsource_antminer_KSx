bool __fastcall std::path::Path::_starts_with(_BYTE *a1, int a2, _BYTE *a3, int a4)
{
  _BYTE *v4; // r10
  char v5; // r5
  bool v6; // r0
  _BYTE *v7; // r6
  _DWORD *v8; // r7
  int *v9; // r4
  char v10; // r8
  char v11; // r11
  char v12; // r9
  _DWORD *v13; // lr
  int *v14; // r12
  _BYTE *v15; // r0
  char v16; // r7
  _BYTE *v17; // r4
  int v18; // r3
  int v19; // r5
  int v20; // r6
  char v21; // r1
  int v23; // [sp+0h] [bp-9Ch]
  _DWORD v24[6]; // [sp+8h] [bp-94h] BYREF
  _DWORD v25[2]; // [sp+20h] [bp-7Ch] BYREF
  char v26; // [sp+28h] [bp-74h]
  __int16 v27; // [sp+3Ch] [bp-60h]
  bool v28; // [sp+3Eh] [bp-5Eh]
  _BYTE *v29; // [sp+40h] [bp-5Ch] BYREF
  int v30; // [sp+44h] [bp-58h]
  char v31; // [sp+48h] [bp-54h]
  _BYTE v32[19]; // [sp+49h] [bp-53h] BYREF
  char v33; // [sp+5Ch] [bp-40h]
  char v34; // [sp+5Dh] [bp-3Fh]
  char v35; // [sp+5Eh] [bp-3Eh]
  _BYTE src[28]; // [sp+60h] [bp-3Ch] BYREF
  int v37; // [sp+7Ch] [bp-20h] BYREF
  char v38; // [sp+84h] [bp-18h]

  v4 = a1;
  v23 = a2;
  if ( !a2 )
  {
    v5 = 0;
    if ( a4 )
      goto LABEL_3;
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  v5 = *a1 == 47;
  if ( !a4 )
    goto LABEL_5;
LABEL_3:
  v6 = *a3 == 47;
LABEL_6:
  v7 = src;
  v8 = &v29;
  v9 = &v37;
  v28 = v6;
  v10 = 6;
  v11 = 0;
  v12 = 2;
  v27 = 512;
  v26 = 6;
  v25[1] = a4;
  v25[0] = a3;
  while ( 1 )
  {
    v30 = v23;
    v31 = v10;
    v29 = v4;
    memcpy(v32, v7, sizeof(v32));
    v35 = v5;
    v34 = v12;
    v33 = v11;
    <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)v7, (int)v8);
    <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)v9, (int)v25);
    if ( src[8] == 10 )
      break;
    if ( v38 == 10 )
      return v5 != 2;
    if ( !sub_1D7D54((int)v7, (int)v9) )
    {
      v5 = 2;
      return v5 != 2;
    }
    v23 = v30;
    v4 = v29;
    v10 = v31;
    memcpy(v24, v32, 0x13u);
    v11 = v33;
    v12 = v34;
    v5 = v35;
    if ( v31 != 6 )
    {
      v13 = v8;
      v14 = v9;
      v15 = v7;
      v16 = v35;
      v17 = v7;
      v18 = v24[1];
      v19 = v24[2];
      v20 = v24[3];
      *(_DWORD *)v15 = v24[0];
      *((_DWORD *)v15 + 1) = v18;
      *((_DWORD *)v15 + 2) = v19;
      *((_DWORD *)v15 + 3) = v20;
      v15 += 16;
      v7 = v17;
      v5 = v16;
      v9 = v14;
      v8 = v13;
      v21 = BYTE2(v24[4]);
      *(_WORD *)v15 = v24[4];
      v15[2] = v21;
    }
  }
  if ( v38 != 10 )
    v5 = 2;
  return v5 != 2;
}
