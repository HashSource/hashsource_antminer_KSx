int __fastcall alloc::str::<impl str>::to_lowercase(unsigned int *a1, int a2, size_t size)
{
  unsigned int v6; // r7
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
  unsigned int v21; // r2
  int result; // r0
  char *v23; // r6
  unsigned int v24; // r7
  char *v25; // r9
  char *v26; // r8
  unsigned int v27; // r5
  unsigned int v28; // r0
  int v29; // t1
  unsigned int v30; // r1
  int v31; // r0
  int v32; // r2
  int v33; // r2
  unsigned int v34; // r4
  char *i; // r2
  int v36; // r5
  char *v37; // r10
  char v38; // r1
  char v39; // r5
  char v40; // r3
  char v41; // r4
  int v42; // r5
  unsigned int v43; // r2
  char *v44; // r1
  int v45; // r0
  int v46; // r2
  char *v47; // r4
  unsigned int v48; // r5
  int v49; // r2
  int v50; // r3
  int v51; // r3
  int v52; // r1
  __int16 v53; // r4
  unsigned int v54; // r0
  char **v55; // [sp+4h] [bp-18h]
  unsigned int v56; // [sp+8h] [bp-14h]
  int v57; // [sp+Ch] [bp-10h]
  unsigned int v58; // [sp+10h] [bp-Ch] BYREF
  unsigned int v59; // [sp+14h] [bp-8h]
  unsigned int v60; // [sp+18h] [bp-4h]

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
  v56 = size - v6;
  if ( size != v6 )
  {
    v23 = (char *)(a2 + v6);
    v57 = a2 + size;
    v24 = 0;
    v25 = v23;
    v26 = v23;
    v55 = &off_2CE874;
    while ( 1 )
    {
      v29 = *v26++;
      v30 = (unsigned __int8)v29;
      if ( v29 > -1 )
        goto LABEL_39;
      v31 = v30 & 0x1F;
      v32 = v25[1] & 0x3F;
      if ( v30 <= 0xDF )
        break;
      v33 = v25[2] & 0x3F | (v32 << 6);
      if ( v30 < 0xF0 )
      {
        v30 = v33 | (v31 << 12);
        v26 = v25 + 3;
        result = 931;
        if ( v30 == 931 )
          goto LABEL_46;
      }
      else
      {
        result = v30 & 7;
        v30 = v25[3] & 0x3F | (v33 << 6) | (result << 18);
        if ( v30 == 1114112 )
          return result;
        v26 = v25 + 4;
        result = 931;
        if ( v30 == 931 )
        {
LABEL_46:
          if ( v24 )
          {
            if ( v24 >= v56 )
            {
              if ( v24 != v56 )
                goto LABEL_91;
            }
            else if ( v23[v24] <= -65 )
            {
LABEL_91:
              v43 = 0;
              goto LABEL_92;
            }
          }
          for ( i = &v23[v24]; ; i = v37 )
          {
            if ( i == v23 )
              goto LABEL_86;
            v37 = i - 1;
            v36 = (unsigned __int8)*(i - 1);
            v38 = v36;
            if ( (char)v36 <= -1 )
            {
              v37 = i - 2;
              v39 = *(i - 2);
              v40 = v39;
              if ( v39 >= -64 )
              {
                v36 = v38 & 0x3F | ((v39 & 0x1F) << 6);
                if ( v36 == 1114112 )
                  goto LABEL_86;
              }
              else
              {
                v37 = i - 3;
                v41 = *(i - 3);
                if ( v41 >= -64 )
                {
                  v42 = v41 & 0xF;
                }
                else
                {
                  v37 = i - 4;
                  v42 = v41 & 0x3F | ((*(i - 4) & 7) << 6);
                }
                v36 = v38 & 0x3F | ((v40 & 0x3F | (v42 << 6)) << 6);
                if ( v36 == 1114112 )
                  goto LABEL_86;
              }
            }
            if ( !core::unicode::unicode_data::case_ignorable::lookup(v36) )
              break;
          }
          if ( !core::unicode::unicode_data::cased::lookup(v36) )
          {
LABEL_86:
            v52 = a1[2];
            v53 = -31793;
            if ( *a1 - v52 >= 2 )
              goto LABEL_88;
            goto LABEL_87;
          }
          v43 = v24 + 2;
          if ( v24 != -2 )
          {
            if ( v43 >= v56 )
            {
              if ( v43 != v56 )
              {
LABEL_93:
                v24 = v56;
                v55 = &off_2CE884;
LABEL_92:
                core::str::slice_error_fail(v23, v56, v43, v24, (int)v55);
              }
            }
            else if ( v23[v43] < -64 )
            {
              goto LABEL_93;
            }
          }
          v44 = &v23[v43];
          v45 = 0;
          while ( 2 )
          {
            if ( v44 == (char *)v57 )
            {
LABEL_89:
              v53 = -32049;
              v52 = a1[2];
              if ( *a1 - v52 > 1 )
              {
LABEL_88:
                v54 = a1[1];
                a1[2] = v52 + 2;
                *(_WORD *)(v54 + v52) = v53;
                goto LABEL_31;
              }
LABEL_87:
              sub_7BC14(a1, v52, 2);
              v52 = a1[2];
              goto LABEL_88;
            }
            v47 = v44 + 1;
            v46 = *v44;
            v48 = (unsigned __int8)v46;
            if ( v46 <= -1 )
            {
              v49 = v46 & 0x1F;
              v50 = v44[1] & 0x3F;
              if ( v48 > 0xDF )
              {
                v51 = v44[2] & 0x3F | (v50 << 6);
                if ( v48 >= 0xF0 )
                {
                  v48 = v44[3] & 0x3F | (v51 << 6) | ((v49 & 7) << 18);
                  if ( v48 == 1114112 )
                    goto LABEL_89;
                  v47 = v44 + 4;
                  if ( !v45 )
                    goto LABEL_81;
LABEL_71:
                  v45 = 1;
                  v44 = v47;
                  if ( v48 != 1114112 )
                  {
                    if ( core::unicode::unicode_data::cased::lookup(v48) )
                      goto LABEL_86;
                    goto LABEL_89;
                  }
                  continue;
                }
                v48 = v51 | (v49 << 12);
                v47 = v44 + 3;
                if ( v45 )
                  goto LABEL_71;
LABEL_81:
                if ( core::unicode::unicode_data::case_ignorable::lookup(v48) )
                {
                  v45 = 0;
                  v44 = v47;
                  continue;
                }
                goto LABEL_71;
              }
              v48 = v50 | (v49 << 6);
              v47 = v44 + 2;
            }
            break;
          }
          if ( v45 )
            goto LABEL_71;
          goto LABEL_81;
        }
      }
LABEL_40:
      if ( v30 != 1114112 )
      {
        core::unicode::unicode_data::conversions::to_lower(&v58, v30);
        v27 = v59;
        if ( v59 )
        {
          v34 = v60;
          if ( v60 )
          {
            sub_229F40(a1, v58);
            sub_229F40(a1, v27);
            v27 = v34;
          }
          else
          {
            sub_229F40(a1, v58);
          }
        }
        else
        {
          v27 = v58;
        }
        sub_229F40(a1, v27);
LABEL_31:
        v28 = v24 - (_DWORD)v25;
        v25 = v26;
        v24 = (unsigned int)&v26[v28];
        result = v57;
        if ( v26 != (char *)v57 )
          continue;
      }
      return result;
    }
    v30 = v32 | (v31 << 6);
    v26 = v25 + 2;
LABEL_39:
    result = 931;
    if ( v30 == 931 )
      goto LABEL_46;
    goto LABEL_40;
  }
  return result;
}
