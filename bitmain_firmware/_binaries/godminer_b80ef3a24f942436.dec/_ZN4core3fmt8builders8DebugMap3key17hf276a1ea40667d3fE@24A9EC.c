_BYTE *__fastcall core::fmt::builders::DebugMap::key(_BYTE *a1, int a2, int a3)
{
  char v4; // r5
  _DWORD *v6; // r7
  _DWORD *v9; // r0
  int (**v10)(); // r1
  int v11; // r9
  int v12; // r2
  char **v13; // r12
  int v14; // lr
  int v15; // r3
  int v16; // r1
  int v17; // r0
  const char *v18; // r2
  int (__fastcall *v19)(int, _DWORD **); // r2
  _DWORD v20[3]; // [sp+0h] [bp-30h] BYREF
  _DWORD *v21; // [sp+Ch] [bp-24h] BYREF
  int (**v22)(); // [sp+10h] [bp-20h]
  char **v23; // [sp+14h] [bp-1Ch]
  int v24; // [sp+18h] [bp-18h]
  const char *v25; // [sp+1Ch] [bp-14h]
  int v26; // [sp+20h] [bp-10h]
  int v27; // [sp+24h] [bp-Ch]
  int v28; // [sp+28h] [bp-8h]
  char v29; // [sp+2Ch] [bp-4h]

  v4 = 1;
  if ( a1[4] )
  {
LABEL_2:
    a1[4] = 1;
    return a1;
  }
  if ( a1[6] )
  {
    v23 = &off_2EF1B4;
    v24 = 1;
    v26 = 0;
    v21 = 0;
    v25 = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)&v21, (int)&off_2EF1BC);
  }
  v6 = *(_DWORD **)a1;
  if ( (*(_BYTE *)(*(_DWORD *)a1 + 24) & 4) != 0 )
  {
    if ( !a1[5] && (*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, asc_2BF6F0, 1) )
      goto LABEL_2;
    v4 = 1;
    a1[7] = 1;
    v11 = *v6;
    v12 = v6[1];
    v13 = (char **)v6[2];
    v14 = v6[3];
    v20[2] = a1 + 7;
    v20[1] = v12;
    v20[0] = v11;
    v15 = v6[7];
    v16 = v6[6];
    v17 = v6[5];
    v18 = (const char *)v6[4];
    v29 = *((_BYTE *)v6 + 32);
    v26 = v17;
    v27 = v16;
    v28 = v15;
    v25 = v18;
    v19 = *(int (__fastcall **)(int, _DWORD **))(a3 + 12);
    v22 = &off_2EF16C;
    v23 = v13;
    v24 = v14;
    v21 = v20;
    if ( v19(a2, &v21) )
      goto LABEL_2;
    v9 = v21;
    v10 = v22;
  }
  else
  {
    if ( a1[5] && (*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, asc_2BF6D4, 2)
      || (*(int (__fastcall **)(int, _DWORD *))(a3 + 12))(a2, v6) )
    {
      goto LABEL_2;
    }
    v9 = (_DWORD *)*v6;
    v10 = (int (**)())v6[1];
  }
  if ( !((int (__fastcall *)(_DWORD *, const char *, int))v10[3])(v9, asc_2BF6CD, 2) )
  {
    v4 = 0;
    a1[6] = 1;
  }
  a1[4] = v4;
  return a1;
}
