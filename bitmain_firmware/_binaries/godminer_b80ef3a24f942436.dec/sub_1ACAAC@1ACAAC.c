bool __fastcall sub_1ACAAC(_DWORD *a1, int *a2)
{
  int v3; // r1
  _DWORD *v4; // r0
  void *v5; // r3
  int v6; // r5
  _UNKNOWN **v7; // r6
  int v8; // r7
  int v9; // r5
  int v10; // r6
  int v11; // r7
  int v12; // r9
  char v13; // r0
  _BOOL4 v14; // r0
  void *v16; // [sp+0h] [bp-74h]
  int v17; // [sp+4h] [bp-70h]
  _UNKNOWN **v18; // [sp+8h] [bp-6Ch]
  int v19; // [sp+Ch] [bp-68h]
  _DWORD *v20; // [sp+10h] [bp-64h]
  int v21; // [sp+14h] [bp-60h]
  int v22; // [sp+18h] [bp-5Ch]
  int v23; // [sp+1Ch] [bp-58h]
  void *v24; // [sp+20h] [bp-54h] BYREF
  int v25; // [sp+24h] [bp-50h]
  _UNKNOWN **v26; // [sp+28h] [bp-4Ch]
  int v27; // [sp+2Ch] [bp-48h]
  _DWORD *v28; // [sp+30h] [bp-44h]
  int v29; // [sp+34h] [bp-40h]
  int v30; // [sp+38h] [bp-3Ch]
  int v31; // [sp+3Ch] [bp-38h]
  int v32; // [sp+40h] [bp-34h]
  int v33; // [sp+44h] [bp-30h]
  int v34; // [sp+48h] [bp-2Ch]
  int v35; // [sp+4Ch] [bp-28h]
  int v36; // [sp+50h] [bp-24h]
  void **v37; // [sp+54h] [bp-20h]
  int v38; // [sp+58h] [bp-1Ch]
  void **v39; // [sp+5Ch] [bp-18h]
  int v40; // [sp+60h] [bp-14h]
  int v41; // [sp+64h] [bp-10h]
  char v42; // [sp+6Bh] [bp-9h] BYREF
  _DWORD v43[2]; // [sp+6Ch] [bp-8h] BYREF

  v3 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v5 = (void *)*a1;
  v6 = a1[1];
  v7 = (_UNKNOWN **)a1[2];
  v8 = a1[3];
  v4 = a1 + 4;
  v24 = v5;
  v25 = v6;
  v26 = v7;
  v27 = v8;
  v9 = v4[1];
  v10 = v4[2];
  v11 = v4[3];
  v28 = (_DWORD *)*v4;
  v29 = v9;
  v30 = v10;
  v31 = v11;
  v16 = v5;
  v17 = v25;
  v41 = 8;
  v20 = v28;
  v33 = 4;
  v32 = 4;
  v40 = 0;
  v39 = &v24;
  v36 = 0;
  v35 = 0;
  v34 = 0;
  v19 = v27;
  v18 = v26;
  v38 = 0;
  v37 = &v24;
  v21 = v9;
  v23 = v11;
  v22 = v10;
  do
  {
    v12 = v3;
    if ( v3 == 32 )
      break;
    v13 = *((_BYTE *)&v16 + v3);
    v27 = 1;
    v42 = v13;
    v26 = &off_2E8F50;
    v29 = 1;
    v28 = v43;
    v25 = 1;
    v24 = &unk_2AF918;
    v43[1] = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v43[0] = &v42;
    v14 = core::fmt::Formatter::write_fmt(a2, (int *)&v24);
    v3 = v12 + 1;
  }
  while ( !v14 );
  return v12 != 32;
}
