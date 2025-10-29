void __fastcall object::read::pe::export::ExportTable::exports(_DWORD *a1, int *a2)
{
  int v2; // r4
  int v4; // r0
  unsigned int *v5; // r2
  unsigned int v6; // r11
  int v7; // r3
  int v8; // r1
  int v9; // r9
  unsigned int v10; // r7
  int v11; // r6
  unsigned int v12; // r10
  unsigned int v13; // r0
  unsigned int v14; // r4
  unsigned int v15; // r1
  int v16; // r8
  unsigned int v17; // r2
  int v18; // r0
  int v19; // r8
  unsigned int v20; // r3
  _DWORD *v21; // r12
  unsigned __int8 *v22; // r1
  int v23; // t1
  unsigned int v24; // r4
  int v25; // r5
  bool v26; // cf
  unsigned int v27; // r1
  _DWORD *v28; // r1
  unsigned int v29; // r10
  _DWORD *v30; // r5
  unsigned __int16 *v31; // r7
  unsigned int v32; // r0
  unsigned int v33; // r4
  unsigned int v34; // r9
  int v35; // r6
  int v36; // r0
  unsigned int v37; // r1
  bool v38; // cc
  unsigned int v39; // r0
  void *v40; // r1
  unsigned int v41; // r2
  const char *v42; // r2
  unsigned int v43; // r1
  int v44; // [sp+0h] [bp-34h]
  _DWORD *v45; // [sp+4h] [bp-30h]
  int v46; // [sp+8h] [bp-2Ch]
  int v47; // [sp+Ch] [bp-28h]
  int v48; // [sp+10h] [bp-24h]
  unsigned int v49; // [sp+14h] [bp-20h]
  unsigned int *v50; // [sp+18h] [bp-1Ch]
  _DWORD *v51; // [sp+18h] [bp-1Ch]
  int v52; // [sp+1Ch] [bp-18h]
  int v53; // [sp+1Ch] [bp-18h]
  int v55; // [sp+20h] [bp-14h]
  unsigned int *v56; // [sp+24h] [bp-10h]
  unsigned int v57; // [sp+24h] [bp-10h]
  unsigned int v58; // [sp+28h] [bp-Ch] BYREF
  void *ptr; // [sp+2Ch] [bp-8h]
  unsigned int v60; // [sp+30h] [bp-4h]

  v4 = a2[3];
  v5 = (unsigned int *)a2[2];
  v6 = 0;
  v7 = 4;
  v8 = a2[9];
  v60 = 0;
  ptr = (void *)4;
  v58 = 0;
  if ( v4 )
  {
    v50 = &v5[v4];
    v6 = 0;
    v9 = 0;
    v52 = *(_DWORD *)(v8 + 16);
    v10 = a2[1];
    v11 = a2[8];
    v47 = *a2;
    v49 = v10;
    v44 = *a2 - v11 + 1;
    v48 = v11;
    while ( 1 )
    {
      v12 = *v5;
      v56 = v5 + 1;
      v13 = *v5 - v11;
      if ( v13 >= v10 )
        break;
      v14 = v10 - v13;
      if ( v10 < v13 )
        v14 = 0;
      v46 = v7;
      v10 = v47 + v13;
      v16 = 35;
      if ( !memchr::memchr::fallback::memchr(0, v47 + v13, v14) )
      {
        v42 = aInvalidPeForwa_0;
        goto LABEL_50;
      }
      if ( v14 <= v15 )
      {
        v42 = aInvalidPeForwa_0;
        goto LABEL_50;
      }
      if ( !v15 )
      {
LABEL_47:
        v16 = 37;
        v42 = aMissingPeForwa_0;
        goto LABEL_50;
      }
      v17 = v15 - 2;
      v18 = 0;
      while ( *(_BYTE *)(v10 + v18) != 46 )
      {
        ++v18;
        --v17;
        if ( v15 == v18 )
          goto LABEL_47;
      }
      if ( v15 - 1 == v18 )
      {
        v16 = 32;
        v42 = "Missing PE forwarded export namecritical_section_default_timeoutdynamic_value_reloc_table_offsetImageAlpha"
              "64RuntimeFunctionEntry\a";
        goto LABEL_50;
      }
      v20 = v10 + v18;
      v21 = a1;
      if ( *(_BYTE *)(v10 + v18 + 1) == 35 )
      {
        if ( v15 - 2 == v18 )
        {
LABEL_49:
          a1 = v21;
          v42 = aInvalidPeForwa;
          goto LABEL_50;
        }
        v22 = (unsigned __int8 *)(v20 + 2);
        v12 = 0;
        while ( v17 )
        {
          v23 = *v22++;
          v24 = v23 - 48;
          if ( (unsigned int)(v23 - 48) < 0xA )
            v20 = v24;
          if ( v24 <= 9 )
          {
            v11 = (10 * (unsigned __int64)v12) >> 32;
            v25 = 10 * v12;
            if ( is_mul_ok(0xAu, v12) )
            {
              v26 = __CFADD__(v25, v20);
              v12 = v25 + v20;
              --v17;
              v20 = v24;
              if ( !v26 )
                continue;
            }
          }
          goto LABEL_49;
        }
        v19 = 1;
        v2 = v18;
      }
      else
      {
        v11 = v15 - 1 - v18;
        v19 = 2;
        v27 = v44 + v12;
        v12 = v10;
        v2 = v27 + v18;
        v10 = v18;
      }
      v7 = v46;
      a1 = v21;
      if ( v6 == v58 )
        goto LABEL_30;
LABEL_31:
      *(_DWORD *)(v7 + 32 * v6) = 0;
      v28 = (_DWORD *)(v7 + 32 * v6++);
      v28[2] = v9 + v52;
      v28[3] = v19;
      v28[4] = v12;
      ++v9;
      v28[5] = v10;
      v28[7] = v11;
      v5 = v56;
      v10 = v49;
      v11 = v48;
      v28[6] = v2;
      v60 = v6;
      if ( v56 == v50 )
        goto LABEL_32;
    }
    v19 = 0;
    if ( v6 != v58 )
      goto LABEL_31;
LABEL_30:
    sub_202734(&v58, v6);
    v7 = (int)ptr;
    v6 = v60;
    goto LABEL_31;
  }
LABEL_32:
  v45 = a1;
  v29 = a2[7];
  if ( a2[5] < v29 )
    v29 = a2[5];
  if ( v29 )
  {
    v16 = 30;
    v51 = ptr;
    v30 = (_DWORD *)a2[4];
    v31 = (unsigned __int16 *)a2[6];
    v53 = *a2;
    v57 = a2[1];
    v55 = a2[8];
    while ( 1 )
    {
      v32 = *v30 - v55;
      v33 = v57 - v32;
      if ( v57 < v32 )
        v33 = 0;
      if ( v57 <= v32 )
        goto LABEL_48;
      v34 = *v31;
      v35 = v53 + v32;
      v36 = memchr::memchr::fallback::memchr(0, v53 + v32, v33);
      v38 = v36 != 0;
      if ( v36 )
        v38 = v33 > v37;
      if ( !v38 )
      {
LABEL_48:
        a1 = v45;
        v42 = aInvalidPeExpor_3;
        goto LABEL_50;
      }
      if ( v6 <= v34 )
        break;
      ++v31;
      ++v30;
      --v29;
      v51[8 * v34] = v35;
      v51[8 * v34 + 1] = v37;
      if ( !v29 )
        goto LABEL_45;
    }
    a1 = v45;
    v16 = 25;
    v42 = (const char *)&unk_2A79DD;
LABEL_50:
    v43 = v58;
    *a1 = 1;
    a1[1] = v42;
    a1[2] = v16;
    if ( v43 )
      _rust_dealloc(ptr);
  }
  else
  {
LABEL_45:
    v39 = v58;
    v40 = ptr;
    v41 = v60;
    *v45 = 0;
    v45[1] = v39;
    v45[2] = v40;
    v45[3] = v41;
  }
}
