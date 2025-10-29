bool __fastcall <core::str::iter::Chars as core::fmt::Debug>::fmt(char **a1, int *a2)
{
  int v3; // r6
  int v4; // r4
  int v6; // r0
  char *v7; // r4
  char *v8; // r5
  unsigned int v9; // r0
  char *v10; // r1
  int v11; // t1
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v16; // r0
  int v17; // r1
  unsigned int v18; // [sp+4h] [bp-1Ch] BYREF
  int *v19; // [sp+8h] [bp-18h] BYREF
  unsigned __int8 v20; // [sp+Ch] [bp-14h]
  char v21; // [sp+Dh] [bp-13h]
  char **v22; // [sp+10h] [bp-10h]
  int v23; // [sp+14h] [bp-Ch]
  const char *v24; // [sp+18h] [bp-8h]
  int v25; // [sp+1Ch] [bp-4h]

  v3 = *a2;
  v4 = a2[1];
  v22 = &off_2CF388;
  v25 = 0;
  v24 = aLibraryCoreSrc;
  v23 = 1;
  v19 = 0;
  if ( core::fmt::write(v3, v4, (int *)&v19) )
    return 1;
  v6 = (*(int (__fastcall **)(int, const char *, int))(v4 + 12))(v3, asc_29F1A2, 1);
  v7 = *a1;
  v8 = a1[1];
  v21 = 0;
  v20 = v6;
  v19 = a2;
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      v10 = v8;
      v11 = *v8++;
      v9 = (unsigned __int8)v11;
      if ( v11 <= -1 )
      {
        v12 = v9 & 0x1F;
        v13 = v10[1] & 0x3F;
        if ( v9 <= 0xDF )
        {
          v9 = v13 | (v12 << 6);
          v8 = v10 + 2;
        }
        else
        {
          v14 = v10[2] & 0x3F | (v13 << 6);
          if ( v9 < 0xF0 )
          {
            v9 = v14 | (v12 << 12);
            v8 = v10 + 3;
          }
          else
          {
            v9 = v10[3] & 0x3F | (v14 << 6) | ((v9 & 7) << 18);
            if ( v9 == 1114112 )
            {
LABEL_12:
              v6 = v20;
              break;
            }
            v8 = v10 + 4;
          }
        }
      }
      v18 = v9;
      sub_2347F4((unsigned __int8 *)&v19, (int)&v18, (int)&off_2CF194);
      if ( v8 == v7 )
        goto LABEL_12;
    }
  }
  if ( v6 || (*(int (__fastcall **)(int, const char *, int))(v19[1] + 12))(*v19, asc_29F1A3, 1) )
    return 1;
  v16 = *a2;
  v17 = a2[1];
  v22 = (char **)&off_2CF390;
  v23 = 1;
  v24 = aLibraryCoreSrc;
  v25 = 0;
  v19 = 0;
  return core::fmt::write(v16, v17, (int *)&v19);
}
