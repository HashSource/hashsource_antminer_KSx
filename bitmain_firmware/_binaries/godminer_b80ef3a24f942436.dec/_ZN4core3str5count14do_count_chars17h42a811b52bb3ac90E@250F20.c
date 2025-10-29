int __fastcall core::str::count::do_count_chars(char *a1, unsigned int a2)
{
  char *v2; // r2
  unsigned int v3; // r7
  unsigned int v4; // r5
  bool v5; // cc
  int result; // r0
  int v7; // t1
  unsigned int v8; // r0
  int v9; // r12
  int v10; // r1
  int v11; // r3
  char *v12; // r7
  char *v13; // r4
  int v14; // t1
  char *v15; // r5
  char *v16; // r2
  unsigned int v17; // r2
  int v18; // r10
  unsigned int v19; // r9
  char *v20; // r8
  char *v21; // r11
  unsigned int v22; // r7
  bool v23; // zf
  unsigned int v24; // r4
  unsigned int v25; // r6
  unsigned int v26; // r1
  unsigned int v27; // r2
  unsigned int v28; // r2
  int v29; // r4
  unsigned int v30; // t1

  v2 = a1;
  v3 = (unsigned int)(a1 + 3) & 0xFFFFFFFC;
  v4 = v3 - (_DWORD)a1;
  v5 = v3 - (unsigned int)a1 > a2;
  if ( v3 - (unsigned int)a1 <= a2 )
    v5 = v4 > 4;
  if ( v5 || (v8 = a2 - v4, a2 - v4 < 4) )
  {
    for ( result = 0; a2; --a2 )
    {
      v7 = *v2++;
      if ( v7 > -65 )
        ++result;
    }
  }
  else
  {
    v9 = v8 & 3;
    v10 = 0;
    v11 = 0;
    if ( (char *)v3 != v2 )
    {
      v12 = &v2[-v3];
      v11 = 0;
      v13 = v2;
      do
      {
        v14 = *v13++;
        if ( v14 > -65 )
          ++v11;
        ++v12;
      }
      while ( v12 );
    }
    v15 = &v2[v4];
    if ( (v8 & 3) != 0 )
    {
      v16 = &v15[v8 & 0xFFFFFFFC];
      v10 = *v16 > -65;
      if ( v9 != 1 )
      {
        if ( v16[1] > -65 )
          ++v10;
        if ( v9 != 2 && v16[2] > -65 )
          ++v10;
      }
    }
    v17 = v8 >> 2;
    result = v10 + v11;
    while ( v17 )
    {
      v18 = v17;
      if ( v17 >= 0xC0 )
        v18 = 192;
      v19 = v17;
      v20 = v15;
      v21 = &v15[4 * (v18 & 0xFC)];
      v22 = 0;
      if ( (v18 & 0xFC) != 0 )
      {
        do
        {
          v23 = v15 == 0;
          if ( v15 )
          {
            v24 = *((_DWORD *)v15 + 1);
            v25 = *((_DWORD *)v15 + 2);
            v26 = *((_DWORD *)v15 + 3);
            v27 = (((unsigned int)~*(_DWORD *)v15 >> 7) | (*(_DWORD *)v15 >> 6)) & 0x1010101;
            v15 += 16;
            v22 += (((~v26 >> 7) | (v26 >> 6)) & 0x1010101)
                 + (((~v25 >> 7) | (v25 >> 6)) & 0x1010101)
                 + (((~v24 >> 7) | (v24 >> 6)) & 0x1010101)
                 + v27;
            v23 = v15 == v21;
          }
        }
        while ( !v23 );
      }
      v17 = v19 - v18;
      v15 = &v20[4 * v18];
      result += (65537 * (((v22 >> 8) & 0xFF00FF) + (v22 & 0xFF00FF))) >> 16;
      if ( (v18 & 3) != 0 )
      {
        if ( v20 )
        {
          v28 = 0;
          if ( v19 >= 0xC0 )
            LOBYTE(v19) = -64;
          v29 = 4 * (v19 & 3);
          do
          {
            v30 = *(_DWORD *)v21;
            v21 += 4;
            v29 -= 4;
            v28 += ((~v30 >> 7) | (v30 >> 6)) & 0x1010101;
          }
          while ( v29 );
        }
        else
        {
          v28 = 0;
        }
        result += (65537 * (((v28 >> 8) & 0xFF00FF) + (v28 & 0xFF00FF))) >> 16;
        return result;
      }
    }
  }
  return result;
}
