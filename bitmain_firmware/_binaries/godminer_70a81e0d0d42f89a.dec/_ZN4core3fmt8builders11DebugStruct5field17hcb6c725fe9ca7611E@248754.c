_BYTE *__fastcall core::fmt::builders::DebugStruct::field(_BYTE *a1, int a2, unsigned int a3, int a4, int a5)
{
  char v6; // r7
  int *v8; // r6
  int v12; // r0
  int v13; // r2
  const char *v14; // r1
  char v15; // r0
  int v16; // r12
  int v17; // lr
  int v18; // r0
  int v19; // r2
  int v20; // r11
  int v21; // r3
  char v22; // r1
  int v23; // r6
  int v24[3]; // [sp+0h] [bp-34h] BYREF
  char v25; // [sp+Fh] [bp-25h] BYREF
  int *v26; // [sp+10h] [bp-24h] BYREF
  int (**v27)(); // [sp+14h] [bp-20h]
  int v28; // [sp+18h] [bp-1Ch]
  int v29; // [sp+1Ch] [bp-18h]
  int v30; // [sp+20h] [bp-14h]
  int v31; // [sp+24h] [bp-10h]
  int v32; // [sp+28h] [bp-Ch]
  int v33; // [sp+2Ch] [bp-8h]
  char v34; // [sp+30h] [bp-4h]

  v6 = 1;
  if ( a1[4] )
    goto LABEL_2;
  v8 = *(int **)a1;
  v12 = *(_DWORD *)(*(_DWORD *)a1 + 24);
  if ( (v12 & 4) != 0 )
  {
    if ( !a1[5] )
    {
      v6 = 1;
      if ( (*(int (__fastcall **)(int, const char *, int))(v8[1] + 12))(*v8, asc_2B638F, 3) )
        goto LABEL_2;
      v12 = v8[6];
    }
    v6 = 1;
    v24[2] = (int)&v25;
    v16 = v8[5];
    v17 = v8[4];
    v32 = v12;
    v18 = *v8;
    v19 = v8[1];
    v20 = v8[2];
    v25 = 1;
    v24[1] = v19;
    v21 = v8[7];
    v22 = *((_BYTE *)v8 + 32);
    v23 = v8[3];
    v24[0] = v18;
    v34 = v22;
    v27 = &off_2E616C;
    v33 = v21;
    v31 = v16;
    v30 = v17;
    v29 = v23;
    v28 = v20;
    v26 = v24;
    if ( !<core::fmt::builders::PadAdapter as core::fmt::Write>::write_str(v24, a2, a3)
      && !<core::fmt::builders::PadAdapter as core::fmt::Write>::write_str(v24, (int)asc_2B638D, 2u)
      && !(*(int (__fastcall **)(int, int **))(a5 + 12))(a4, &v26) )
    {
      v15 = ((int (__fastcall *)(int *, int, unsigned int))v27[3])(v26, (int)asc_2B6392, 2u);
      goto LABEL_18;
    }
  }
  else
  {
    v13 = 2;
    v14 = (const char *)&unk_2B6396;
    if ( a1[5] )
      v14 = asc_2B6394;
    else
      v13 = 3;
    v6 = 1;
    if ( !(*(int (__fastcall **)(int, const char *, int))(v8[1] + 12))(*v8, v14, v13) )
    {
      v6 = 1;
      if ( !(*(int (__fastcall **)(int, int, unsigned int))(v8[1] + 12))(*v8, a2, a3) )
      {
        v6 = 1;
        if ( !(*(int (__fastcall **)(int, const char *, int))(v8[1] + 12))(*v8, asc_2B638D, 2) )
        {
          v15 = (*(int (__fastcall **)(int, int *))(a5 + 12))(a4, v8);
LABEL_18:
          v6 = v15;
        }
      }
    }
  }
LABEL_2:
  a1[5] = 1;
  a1[4] = v6;
  return a1;
}
