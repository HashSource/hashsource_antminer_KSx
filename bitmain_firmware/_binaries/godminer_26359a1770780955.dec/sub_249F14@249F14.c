int __fastcall sub_249F14(_DWORD *a1, const char **a2)
{
  const char *v4; // r1
  const char *v5; // r6
  const char *v6; // r11
  int v7; // r8
  char v8; // r0
  const char *v9; // r7
  unsigned int v10; // r10
  char v11; // r9
  const char *v12; // r1
  char v13; // r0
  int result; // r0
  bool v15; // cf
  _DWORD *v16; // r2
  int v17; // r3
  int v18; // r7
  unsigned int v19; // r5
  const char *v20; // [sp+4h] [bp-10h] BYREF
  const char *v21; // [sp+8h] [bp-Ch]
  const char *v22; // [sp+Ch] [bp-8h]
  const char *v23; // [sp+10h] [bp-4h]

  if ( a1[2] != 1 )
    return sub_24A158(*a1, a1[1], a2);
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a1[7];
  v8 = *((_BYTE *)a1 + 24);
  v9 = a2[3];
  v10 = a1[3];
  v11 = *((_BYTE *)a1 + 32);
  v23 = v9;
  v20 = v4;
  v21 = v5;
  v22 = v6;
  if ( (v8 & 8) == 0 )
  {
    v12 = v5;
    v13 = v11;
    if ( !v9 )
      goto LABEL_24;
LABEL_10:
    v16 = v6 + 4;
    v17 = 12 * (_DWORD)v9;
    do
    {
      if ( *((_WORD *)v16 - 2) )
      {
        if ( *((_WORD *)v16 - 2) == 1 )
        {
          v19 = *((unsigned __int16 *)v16 - 1);
          if ( v19 >= 0x3E8 )
          {
            v18 = 5;
            if ( v19 < 0x2710 )
              v18 = 4;
          }
          else
          {
            v18 = 1;
            if ( v19 >= 0xA )
            {
              v18 = 3;
              if ( v19 < 0x64 )
                v18 = 2;
            }
          }
        }
        else
        {
          v18 = v16[1];
        }
      }
      else
      {
        v18 = *v16;
      }
      v12 += v18;
      v17 -= 12;
      v16 += 3;
    }
    while ( v17 );
    goto LABEL_24;
  }
  if ( (*(int (__fastcall **)(_DWORD))(a1[1] + 12))(*a1) )
    return 1;
  v13 = 1;
  v12 = 0;
  v15 = v10 >= (unsigned int)v5;
  v10 -= (unsigned int)v5;
  *((_BYTE *)a1 + 32) = 1;
  if ( !v15 )
    v10 = 0;
  a1[7] = 48;
  v21 = 0;
  v20 = aLibraryCoreSrc;
  if ( v9 )
    goto LABEL_10;
LABEL_24:
  if ( v10 > (unsigned int)v12 )
    __asm { ADD             PC, R2, R3 }
  result = sub_24A158(*a1, a1[1], &v20);
  *((_BYTE *)a1 + 32) = v11;
  a1[7] = v7;
  return result;
}
