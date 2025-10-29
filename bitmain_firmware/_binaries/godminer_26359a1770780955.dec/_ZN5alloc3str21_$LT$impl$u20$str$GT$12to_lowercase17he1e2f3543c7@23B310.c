int __fastcall alloc::str::<impl str>::to_lowercase(size_t *a1, int a2, size_t size)
{
  size_t v6; // r7
  int v7; // r0
  unsigned int v8; // r5
  unsigned int v9; // r4
  unsigned int v10; // r1
  char v11; // r6
  _BYTE *v12; // r2
  char v13; // r6
  char v14; // r6
  unsigned int v15; // r5
  char v16; // r5
  unsigned int v17; // r1
  bool v18; // cf
  char v19; // r4
  size_t v20; // r1
  size_t v21; // r2
  int result; // r0
  int v23; // r6
  char *v24; // r7
  char *v25; // r9
  char *v26; // r8
  int v27; // r0
  int v28; // t1
  unsigned int v29; // r1
  int v30; // r0
  int v31; // r2
  int v32; // r2
  char *i; // r2
  int v34; // r5
  char *v35; // r10
  char v36; // r1
  char v37; // r5
  char v38; // r3
  char v39; // r4
  int v40; // r5
  char *v41; // r2
  char *v42; // r1
  int v43; // r0
  int v44; // r2
  char *v45; // r4
  unsigned int v46; // r5
  int v47; // r2
  int v48; // r3
  int v49; // r3
  int v50; // r1
  __int16 v51; // r4
  size_t v52; // r0
  char *v53; // [sp+8h] [bp-14h]
  int v54; // [sp+Ch] [bp-10h]
  _DWORD v55[3]; // [sp+10h] [bp-Ch] BYREF

  v6 = 0;
  if ( size )
  {
    if ( (int)size <= -1 )
      alloc::raw_vec::capacity_overflow();
    v7 = _rust_alloc(size);
    if ( !v7 )
      alloc::alloc::handle_alloc_error();
    if ( size >= 8 )
    {
      v6 = 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)(a2 + 4 + v6);
        v9 = *(_DWORD *)(a2 + v6);
        if ( ((v8 | v9) & 0x80808080) != 0 )
          break;
        v10 = HIBYTE(v8);
        if ( HIBYTE(v8) - 65 < 0x1Au )
          v10 = HIBYTE(v8) | 0x20;
        v11 = *(_DWORD *)(a2 + v6);
        if ( (unsigned int)(unsigned __int8)v9 - 65 < 0x1A )
          v11 = v9 | 0x20;
        *(_BYTE *)(v7 + v6) = v11;
        v12 = (_BYTE *)(v7 + v6);
        *(_BYTE *)(v7 + v6 + 7) = v10;
        v13 = BYTE2(v8);
        if ( (unsigned int)(unsigned __int8)__ROR4__(v8, 16) - 65 < 0x1A )
          v13 = BYTE2(v8) | 0x20;
        v12[6] = v13;
        v14 = BYTE1(v8);
        if ( (unsigned int)(unsigned __int8)__ROR4__(v8, 8) - 65 < 0x1A )
          v14 = BYTE1(v8) | 0x20;
        if ( (unsigned int)(unsigned __int8)v8 - 65 < 0x1A )
          LOBYTE(v8) = v8 | 0x20;
        v12[4] = v8;
        v15 = HIBYTE(v9);
        if ( HIBYTE(v9) - 65 < 0x1Au )
          v15 = HIBYTE(v9) | 0x20;
        v12[5] = v14;
        v12[3] = v15;
        v16 = BYTE2(v9);
        v17 = (unsigned __int8)__ROR4__(v9, 8) - 65;
        if ( (unsigned int)(unsigned __int8)__ROR4__(v9, 16) - 65 < 0x1A )
          v16 = BYTE2(v9) | 0x20;
        v12[2] = v16;
        v18 = v17 >= 0x1A;
        v19 = BYTE1(v9);
        v20 = v6 + 16;
        if ( !v18 )
          v19 = BYTE1(v9) | 0x20;
        v12[1] = v19;
        v21 = v6 + 8;
        v6 += 8;
        if ( v20 > size )
        {
          v6 = v21;
          break;
        }
      }
    }
  }
  else
  {
    v7 = 1;
  }
  a1[1] = v7;
  a1[2] = v6;
  result = size - v6;
  *a1 = size;
  v53 = (char *)(size - v6);
  if ( size != v6 )
  {
    v23 = a2 + v6;
    v54 = a2 + size;
    v24 = 0;
    v25 = (char *)v23;
    v26 = (char *)v23;
    while ( 1 )
    {
      v28 = *v26++;
      v29 = (unsigned __int8)v28;
      if ( v28 > -1 )
        goto LABEL_38;
      v30 = v29 & 0x1F;
      v31 = v25[1] & 0x3F;
      if ( v29 <= 0xDF )
        break;
      v32 = v25[2] & 0x3F | (v31 << 6);
      if ( v29 < 0xF0 )
      {
        v29 = v32 | (v30 << 12);
        v26 = v25 + 3;
        result = 931;
        if ( v29 == 931 )
          goto LABEL_46;
      }
      else
      {
        result = v29 & 7;
        v29 = v25[3] & 0x3F | (v32 << 6) | (result << 18);
        if ( v29 == 1114112 )
          return result;
        v26 = v25 + 4;
        result = 931;
        if ( v29 == 931 )
        {
LABEL_46:
          if ( v24 )
          {
            if ( v24 >= v53 )
            {
              if ( v24 != v53 )
                goto LABEL_91;
            }
            else if ( v24[v23] <= -65 )
            {
              goto LABEL_91;
            }
          }
          for ( i = &v24[v23]; ; i = v35 )
          {
            if ( i == (char *)v23 )
              goto LABEL_86;
            v35 = i - 1;
            v34 = (unsigned __int8)*(i - 1);
            v36 = v34;
            if ( (char)v34 <= -1 )
            {
              v35 = i - 2;
              v37 = *(i - 2);
              v38 = v37;
              if ( v37 >= -64 )
              {
                v34 = v36 & 0x3F | ((v37 & 0x1F) << 6);
                if ( v34 == 1114112 )
                  goto LABEL_86;
              }
              else
              {
                v35 = i - 3;
                v39 = *(i - 3);
                if ( v39 >= -64 )
                {
                  v40 = v39 & 0xF;
                }
                else
                {
                  v35 = i - 4;
                  v40 = v39 & 0x3F | ((*(i - 4) & 7) << 6);
                }
                v34 = v36 & 0x3F | ((v38 & 0x3F | (v40 << 6)) << 6);
                if ( v34 == 1114112 )
                  goto LABEL_86;
              }
            }
            if ( !core::unicode::unicode_data::case_ignorable::lookup(v34) )
              break;
          }
          if ( !core::unicode::unicode_data::cased::lookup(v34) )
          {
LABEL_86:
            v50 = a1[2];
            v51 = -31793;
            if ( *a1 - v50 >= 2 )
              goto LABEL_88;
            goto LABEL_87;
          }
          v41 = v24 + 2;
          if ( v24 != (char *)-2 )
          {
            if ( v41 >= v53 )
            {
              if ( v41 != v53 )
LABEL_91:
                core::str::slice_error_fail(v23);
            }
            else if ( v41[v23] < -64 )
            {
              goto LABEL_91;
            }
          }
          v42 = &v41[v23];
          v43 = 0;
          while ( 2 )
          {
            if ( v42 == (char *)v54 )
            {
LABEL_89:
              v51 = -32049;
              v50 = a1[2];
              if ( *a1 - v50 > 1 )
              {
LABEL_88:
                v52 = a1[1];
                a1[2] = v50 + 2;
                *(_WORD *)(v52 + v50) = v51;
                goto LABEL_30;
              }
LABEL_87:
              sub_7D634(a1, v50, 2);
              v50 = a1[2];
              goto LABEL_88;
            }
            v45 = v42 + 1;
            v44 = *v42;
            v46 = (unsigned __int8)v44;
            if ( v44 <= -1 )
            {
              v47 = v44 & 0x1F;
              v48 = v42[1] & 0x3F;
              if ( v46 > 0xDF )
              {
                v49 = v42[2] & 0x3F | (v48 << 6);
                if ( v46 >= 0xF0 )
                {
                  v46 = v42[3] & 0x3F | (v49 << 6) | ((v47 & 7) << 18);
                  if ( v46 == 1114112 )
                    goto LABEL_89;
                  v45 = v42 + 4;
                  if ( !v43 )
                    goto LABEL_81;
LABEL_71:
                  v43 = 1;
                  v42 = v45;
                  if ( v46 != 1114112 )
                  {
                    if ( core::unicode::unicode_data::cased::lookup(v46) )
                      goto LABEL_86;
                    goto LABEL_89;
                  }
                  continue;
                }
                v46 = v49 | (v47 << 12);
                v45 = v42 + 3;
                if ( v43 )
                  goto LABEL_71;
LABEL_81:
                if ( core::unicode::unicode_data::case_ignorable::lookup(v46) )
                {
                  v43 = 0;
                  v42 = v45;
                  continue;
                }
                goto LABEL_71;
              }
              v46 = v48 | (v47 << 6);
              v45 = v42 + 2;
            }
            break;
          }
          if ( v43 )
            goto LABEL_71;
          goto LABEL_81;
        }
      }
LABEL_39:
      if ( v29 != 1114112 )
      {
        core::unicode::unicode_data::conversions::to_lower(v55);
        if ( v55[1] )
        {
          if ( v55[2] )
            sub_23C208(a1);
          sub_23C208(a1);
        }
        sub_23C208(a1);
LABEL_30:
        v27 = v24 - v25;
        v25 = v26;
        v24 = &v26[v27];
        result = v54;
        if ( v26 != (char *)v54 )
          continue;
      }
      return result;
    }
    v29 = v31 | (v30 << 6);
    v26 = v25 + 2;
LABEL_38:
    result = 931;
    if ( v29 == 931 )
      goto LABEL_46;
    goto LABEL_39;
  }
  return result;
}
