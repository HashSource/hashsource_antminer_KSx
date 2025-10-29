int __fastcall <core::str::lossy::Debug as core::fmt::Debug>::fmt(int *a1, int *a2)
{
  int v3; // r10
  int v4; // r1
  int result; // r0
  int v6; // r0
  char *v7; // r4
  unsigned int v8; // r12
  char *v9; // r11
  int v10; // r9
  unsigned int v11; // r3
  char *v12; // r2
  char *v13; // lr
  char *v14; // r2
  int v15; // t1
  unsigned int v16; // r5
  int v17; // r0
  int v18; // r1
  int v19; // r1
  unsigned int v20; // kr00_4
  char *v21; // r5
  int v22; // r1
  char *v23; // [sp+8h] [bp-5Ch]
  unsigned int v24; // [sp+Ch] [bp-58h]
  char *v25; // [sp+10h] [bp-54h]
  char *v26; // [sp+14h] [bp-50h]
  unsigned int v27; // [sp+18h] [bp-4Ch]
  char *v28; // [sp+1Ch] [bp-48h]
  int v29; // [sp+20h] [bp-44h]
  int (__fastcall *v30)(int, int); // [sp+24h] [bp-40h]
  int v31[2]; // [sp+28h] [bp-3Ch] BYREF
  char *v32; // [sp+30h] [bp-34h] BYREF
  unsigned int v33; // [sp+34h] [bp-30h]
  char *v34; // [sp+38h] [bp-2Ch]
  int v35; // [sp+3Ch] [bp-28h]
  char v36; // [sp+43h] [bp-21h] BYREF
  _DWORD v37[2]; // [sp+44h] [bp-20h] BYREF
  int v38[6]; // [sp+4Ch] [bp-18h] BYREF

  v3 = *a2;
  v29 = a2[1];
  v30 = *(int (__fastcall **)(int, int))(v29 + 16);
  v4 = v30(*a2, 34);
  result = 1;
  if ( v4 )
    return result;
  v6 = *a1;
  v31[1] = a1[1];
  v31[0] = v6;
  while ( 1 )
  {
LABEL_3:
    <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(&v32, v31);
    v7 = v32;
    if ( !v32 )
      return v30(v3, 34);
    v8 = v33;
    v9 = v34;
    v10 = v35;
    if ( v33 )
      break;
LABEL_35:
    if ( (*(int (__fastcall **)(int, char *, unsigned int))(v29 + 12))(v3, v7, v8) )
      return 1;
    if ( v10 )
    {
      while ( 1 )
      {
        v36 = *v9;
        v38[4] = (int)v37;
        v37[1] = core::fmt::num::<impl core::fmt::UpperHex for u8>::fmt;
        v37[0] = &v36;
        v38[5] = 1;
        v38[3] = 1;
        v38[2] = (int)&off_2EF470;
        v38[1] = 1;
        v38[0] = (int)&unk_2AF918;
        if ( core::fmt::write(v3, v29, v38) )
          return 1;
        --v10;
        ++v9;
        if ( !v10 )
          goto LABEL_3;
      }
    }
  }
  v11 = 0;
  v12 = v32;
  v23 = &v32[v33];
  v24 = v33;
  while ( 2 )
  {
    v13 = v12;
    v15 = *v12;
    v14 = v12 + 1;
    v16 = (unsigned __int8)v15;
    if ( v15 <= -1 )
    {
      v17 = v16 & 0x1F;
      v18 = v13[1] & 0x3F;
      if ( v16 <= 0xDF )
      {
        v16 = v18 | (v17 << 6);
        v14 = v13 + 2;
      }
      else
      {
        v19 = v13[2] & 0x3F | (v18 << 6);
        v14 = v13 + 3;
        if ( v16 < 0xF0 )
        {
          v16 = v19 | (v17 << 12);
        }
        else
        {
          v16 = *v14 & 0x3F | (v19 << 6) | ((v16 & 7) << 18);
          if ( v16 == 1114112 )
            goto LABEL_35;
          v14 = v13 + 4;
        }
      }
    }
    v27 = v11;
    v26 = v13;
    v25 = v14;
    v28 = (char *)v16;
    v20 = v16;
    v21 = (char *)&loc_110000 + 2;
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
        v21 = (char *)&loc_110000 + 2;
        goto LABEL_23;
      case 0xAu:
        v21 = (char *)&loc_110000 + 2;
        goto LABEL_23;
      case 0xDu:
        v21 = (char *)&loc_110000 + 2;
        goto LABEL_23;
      case 0x22u:
      case 0x27u:
        v21 = (char *)&loc_110000 + 2;
        goto LABEL_23;
      default:
        v21 = (char *)&loc_110000 + 2;
        if ( v20 == 92 )
          goto LABEL_23;
LABEL_16:
        v21 = v28;
        if ( !core::unicode::unicode_data::grapheme_extend::lookup((int)v28)
          && core::unicode::printable::is_printable((unsigned int)v28)
          || v28 == (char *)&loc_110000 )
        {
          v8 = v24;
          v12 = v25;
          v11 = (unsigned int)&v25[v27 - (_DWORD)v26];
          if ( v25 == v23 )
            goto LABEL_35;
          continue;
        }
        v8 = v24;
        v11 = v27;
LABEL_23:
        if ( v11 )
        {
          if ( v11 >= v8 )
          {
            if ( v11 != v8 )
              goto LABEL_43;
          }
          else if ( v7[v11] <= -65 )
          {
LABEL_43:
            core::str::slice_error_fail(v7, v8, 0, v11, (int)&off_2EF450);
          }
        }
        if ( !(*(int (__fastcall **)(int, char *, unsigned int))(v29 + 12))(v3, v7, v11) )
        {
          v22 = 3;
          if ( v21 > (char *)&loc_10FFFC + 3 )
            v22 = (int)(v21 - 1114112);
          __asm { ADD             PC, R3, R4 }
        }
        return 1;
    }
  }
}
