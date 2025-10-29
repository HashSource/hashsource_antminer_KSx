_BYTE *__fastcall std::path::Path::_strip_prefix(_BYTE *a1, int a2, _BYTE *a3, int a4)
{
  int v4; // r6
  _BYTE *v5; // r5
  char v6; // r4
  bool v7; // r0
  _DWORD *v8; // r7
  char v9; // r9
  char v10; // r10
  char v11; // r12
  int v12; // lr
  _DWORD *v13; // r1
  _BYTE *v14; // r6
  _DWORD *v15; // r4
  int v16; // r3
  int v17; // r5
  int v18; // r7
  char v19; // r0
  char v21; // [sp+0h] [bp-B4h]
  char v22; // [sp+4h] [bp-B0h]
  _DWORD v23[6]; // [sp+8h] [bp-ACh] BYREF
  _DWORD dest[6]; // [sp+20h] [bp-94h] BYREF
  _DWORD v25[2]; // [sp+38h] [bp-7Ch] BYREF
  char v26; // [sp+40h] [bp-74h]
  __int16 v27; // [sp+54h] [bp-60h]
  bool v28; // [sp+56h] [bp-5Eh]
  _BYTE *v29; // [sp+58h] [bp-5Ch] BYREF
  int v30; // [sp+5Ch] [bp-58h]
  char v31; // [sp+60h] [bp-54h]
  _BYTE v32[19]; // [sp+61h] [bp-53h] BYREF
  char v33; // [sp+74h] [bp-40h]
  char v34; // [sp+75h] [bp-3Fh]
  char v35; // [sp+76h] [bp-3Eh]
  char v36; // [sp+77h] [bp-3Dh]
  _DWORD src[2]; // [sp+78h] [bp-3Ch] BYREF
  char v38; // [sp+80h] [bp-34h]
  _BYTE v39[8]; // [sp+94h] [bp-20h] BYREF
  char v40; // [sp+9Ch] [bp-18h]

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
  v28 = v7;
  v27 = 512;
  v8 = src;
  v9 = 6;
  v10 = 2;
  v22 = 0;
  v26 = 6;
  v25[1] = a4;
  v25[0] = a3;
  while ( 1 )
  {
    v31 = v9;
    v30 = v4;
    v29 = v5;
    memcpy(v32, v8, sizeof(v32));
    v33 = v22;
    v35 = v6;
    v34 = v10;
    <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)v8, (int)&v29);
    <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)v39, (int)v25);
    if ( v38 == 10 )
      break;
    if ( v40 == 10 )
      goto LABEL_14;
    if ( !sub_1EA018(v8, v39) )
      return 0;
    v5 = v29;
    v4 = v30;
    v9 = v31;
    memcpy(dest, v32, 0x13u);
    v22 = v33;
    v10 = v34;
    v6 = v35;
    v21 = v36;
    if ( v31 != 6 )
    {
      v11 = v35;
      v12 = v30;
      v13 = v8;
      v14 = v29;
      v15 = v8;
      v16 = dest[1];
      v17 = dest[2];
      v18 = dest[3];
      *v13 = dest[0];
      v13[1] = v16;
      v13[2] = v17;
      v13[3] = v18;
      v13 += 4;
      v8 = v15;
      v5 = v14;
      v4 = v12;
      v6 = v11;
      v19 = BYTE2(dest[4]);
      *(_WORD *)v13 = dest[4];
      *((_BYTE *)v13 + 2) = v19;
    }
  }
  if ( v40 != 10 )
    return 0;
LABEL_14:
  v23[0] = dest[0];
  v23[1] = dest[1];
  v23[2] = dest[2];
  v23[3] = dest[3];
  LOWORD(v23[4]) = dest[4];
  BYTE2(v23[4]) = BYTE2(dest[4]);
  if ( v6 == 2 )
    return 0;
  src[0] = v5;
  v38 = v9;
  src[1] = v4;
  memcpy((char *)v8 + 9, v23, 0x13u);
  v39[3] = v21;
  v39[0] = v22;
  v39[2] = v6;
  v39[1] = v10;
  return std::path::Components::as_path((int)v8);
}
