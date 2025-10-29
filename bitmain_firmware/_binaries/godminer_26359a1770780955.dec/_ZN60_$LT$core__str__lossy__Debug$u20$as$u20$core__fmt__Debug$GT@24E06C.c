int __fastcall <core::str::lossy::Debug as core::fmt::Debug>::fmt(int *a1, int *a2)
{
  int v3; // r10
  int v4; // r1
  int result; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r4
  char *v9; // r12
  char *v10; // r11
  int v11; // r9
  char *v12; // r3
  char *v13; // r2
  char *v14; // lr
  char *v15; // r2
  int v16; // t1
  unsigned int v17; // r5
  int v18; // r0
  unsigned int v19; // kr00_4
  char *v20; // r5
  int v21; // r1
  char *v22; // [sp+8h] [bp-5Ch]
  char *v23; // [sp+Ch] [bp-58h]
  char *v24; // [sp+10h] [bp-54h]
  char *v25; // [sp+14h] [bp-50h]
  int v26; // [sp+18h] [bp-4Ch]
  char *v27; // [sp+1Ch] [bp-48h]
  int v28; // [sp+20h] [bp-44h]
  int (__fastcall *v29)(int, int); // [sp+24h] [bp-40h]
  _DWORD v30[2]; // [sp+28h] [bp-3Ch] BYREF
  int v31; // [sp+30h] [bp-34h] BYREF
  char *v32; // [sp+34h] [bp-30h]
  char *v33; // [sp+38h] [bp-2Ch]
  int v34; // [sp+3Ch] [bp-28h]
  char v35; // [sp+43h] [bp-21h] BYREF
  _DWORD v36[2]; // [sp+44h] [bp-20h] BYREF
  int v37[6]; // [sp+4Ch] [bp-18h] BYREF

  v3 = *a2;
  v28 = a2[1];
  v29 = *(int (__fastcall **)(int, int))(v28 + 16);
  v4 = v29(*a2, 34);
  result = 1;
  if ( v4 )
    return result;
  v6 = *a1;
  v30[1] = a1[1];
  v30[0] = v6;
  while ( 1 )
  {
LABEL_3:
    <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(&v31, v30);
    v8 = v31;
    if ( !v31 )
      return v29(v3, 34);
    v9 = v32;
    v10 = v33;
    v11 = v34;
    if ( v32 )
      break;
LABEL_35:
    if ( (*(int (__fastcall **)(int, int, char *))(v28 + 12))(v3, v8, v9) )
      return 1;
    if ( v11 )
    {
      while ( 1 )
      {
        v35 = *v10;
        v37[4] = (int)v36;
        v36[1] = core::fmt::num::<impl core::fmt::UpperHex for u8>::fmt;
        v36[0] = &v35;
        v37[5] = 1;
        v37[3] = 1;
        v37[2] = (int)&off_2E4470;
        v37[1] = 1;
        v37[0] = (int)&unk_2A4020;
        if ( core::fmt::write(v3, v28, v37) )
          return 1;
        --v11;
        ++v10;
        if ( !v11 )
          goto LABEL_3;
      }
    }
  }
  v12 = 0;
  v13 = (char *)v31;
  v22 = &v32[v31];
  v23 = v32;
  while ( 2 )
  {
    v14 = v13;
    v16 = *v13;
    v15 = v13 + 1;
    v17 = (unsigned __int8)v16;
    if ( v16 <= -1 )
    {
      v18 = v17 & 0x1F;
      v7 = v14[1] & 0x3F;
      if ( v17 <= 0xDF )
      {
        v17 = v7 | (v18 << 6);
        v15 = v14 + 2;
      }
      else
      {
        v7 = v14[2] & 0x3F | (v7 << 6);
        v15 = v14 + 3;
        if ( v17 < 0xF0 )
        {
          v17 = v7 | (v18 << 12);
        }
        else
        {
          v7 = *v15 & 0x3F | (v7 << 6);
          v17 = v7 | ((v17 & 7) << 18);
          if ( v17 == 1114112 )
            goto LABEL_35;
          v15 = v14 + 4;
        }
      }
    }
    v26 = (int)v12;
    v25 = v14;
    v24 = v15;
    v27 = (char *)v17;
    v19 = v17;
    v20 = (char *)&loc_110000 + 2;
    switch ( (unsigned int)&loc_110000 + 2 )
    {
      case 0u:
        goto LABEL_23;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 0xBu:
      case 0xCu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x21u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
        goto LABEL_16;
      case 9u:
        v20 = (char *)&loc_110000 + 2;
        goto LABEL_23;
      case 0xAu:
        v20 = (char *)&loc_110000 + 2;
        goto LABEL_23;
      case 0xDu:
        v20 = (char *)&loc_110000 + 2;
        goto LABEL_23;
      case 0x22u:
      case 0x27u:
        v20 = (char *)&loc_110000 + 2;
        goto LABEL_23;
      default:
        v20 = (char *)&loc_110000 + 2;
        if ( v19 == 92 )
          goto LABEL_23;
LABEL_16:
        v20 = v27;
        if ( !core::unicode::unicode_data::grapheme_extend::lookup(v27, v7)
          && core::unicode::printable::is_printable(v27)
          || v27 == (char *)&loc_110000 )
        {
          v9 = v23;
          v7 = v26;
          v13 = v24;
          v12 = &v24[v26 - (_DWORD)v25];
          if ( v24 == v22 )
            goto LABEL_35;
          continue;
        }
        v9 = v23;
        v12 = (char *)v26;
LABEL_23:
        if ( v12 )
        {
          if ( v12 >= v9 )
          {
            if ( v12 != v9 )
              goto LABEL_43;
          }
          else if ( v12[v8] <= -65 )
          {
LABEL_43:
            core::str::slice_error_fail(v8);
          }
        }
        if ( !(*(int (__fastcall **)(int, int, char *))(v28 + 12))(v3, v8, v12) )
        {
          v21 = 3;
          if ( v20 > (char *)&loc_10FFFC + 3 )
            v21 = (int)(v20 - 1114112);
          __asm { ADD             PC, R3, R4 }
        }
        return 1;
    }
  }
}
