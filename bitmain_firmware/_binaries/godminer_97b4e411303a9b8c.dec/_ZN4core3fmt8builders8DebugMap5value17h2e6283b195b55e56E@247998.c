_BYTE *__fastcall core::fmt::builders::DebugMap::value(_BYTE *a1, int a2, int a3)
{
  bool v4; // zf
  char v5; // r0
  int *v7; // r3
  int v8; // r0
  int v9; // r12
  const char *v10; // lr
  int v11; // r0
  int v12; // r6
  char **v13; // r7
  int v14; // r9
  char v15; // r5
  int v16; // r3
  int (__fastcall *v17)(int, int **); // r3
  _DWORD v18[3]; // [sp+0h] [bp-30h] BYREF
  int *v19; // [sp+Ch] [bp-24h] BYREF
  int (**v20)(); // [sp+10h] [bp-20h]
  char **v21; // [sp+14h] [bp-1Ch]
  int v22; // [sp+18h] [bp-18h]
  const char *v23; // [sp+1Ch] [bp-14h]
  int v24; // [sp+20h] [bp-10h]
  int v25; // [sp+24h] [bp-Ch]
  int v26; // [sp+28h] [bp-8h]
  char v27; // [sp+2Ch] [bp-4h]

  v4 = a1[4] == 0;
  v5 = 1;
  if ( v4 )
  {
    if ( !a1[6] )
    {
      v21 = &off_2E51CC;
      v22 = 1;
      v24 = 0;
      v19 = 0;
      v23 = aLibraryCoreSrc;
      core::panicking::panic_fmt((int)&v19, (int)&off_2E51D4);
    }
    v7 = *(int **)a1;
    v8 = *(_DWORD *)(*(_DWORD *)a1 + 24);
    if ( (v8 & 4) != 0 )
    {
      v18[2] = a1 + 7;
      v9 = v7[5];
      v10 = (const char *)v7[4];
      v25 = v8;
      v11 = *v7;
      v12 = v7[1];
      v13 = (char **)v7[2];
      v14 = v7[7];
      v15 = *((_BYTE *)v7 + 32);
      v16 = v7[3];
      v18[1] = v12;
      v22 = v16;
      v17 = *(int (__fastcall **)(int, int **))(a3 + 12);
      v18[0] = v11;
      v19 = v18;
      v27 = v15;
      v26 = v14;
      v24 = v9;
      v23 = v10;
      v21 = v13;
      v20 = &off_2E516C;
      if ( v17(a2, &v19) || ((int (__fastcall *)(int *, int, unsigned int))v20[3])(v19, (int)asc_2B4AD2, 2u) )
      {
        v5 = 1;
        goto LABEL_2;
      }
    }
    else
    {
      v4 = (*(int (__fastcall **)(int, _DWORD))(a3 + 12))(a2, *(_DWORD *)a1) == 0;
      v5 = 1;
      if ( !v4 )
        goto LABEL_2;
    }
    v5 = 0;
    a1[6] = 0;
  }
LABEL_2:
  a1[4] = v5;
  a1[5] = 1;
  return a1;
}
