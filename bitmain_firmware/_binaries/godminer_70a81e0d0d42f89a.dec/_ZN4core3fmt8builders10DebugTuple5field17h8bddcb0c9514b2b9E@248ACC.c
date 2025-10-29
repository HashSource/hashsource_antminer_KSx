int *__fastcall core::fmt::builders::DebugTuple::field(int *a1, int a2, int a3)
{
  int v4; // r6
  char v5; // r7
  _DWORD *v6; // r5
  int v9; // r0
  const char *v10; // r1
  int v11; // r2
  char v12; // r0
  int v13; // r12
  int v14; // lr
  int v15; // r10
  char v16; // r1
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r5
  int (__fastcall *v21)(int, _DWORD **); // r2
  _DWORD v23[3]; // [sp+4h] [bp-34h] BYREF
  char v24; // [sp+13h] [bp-25h] BYREF
  _DWORD *v25; // [sp+14h] [bp-24h] BYREF
  int (**v26)(); // [sp+18h] [bp-20h]
  int v27; // [sp+1Ch] [bp-1Ch]
  int v28; // [sp+20h] [bp-18h]
  int v29; // [sp+24h] [bp-14h]
  int v30; // [sp+28h] [bp-10h]
  int v31; // [sp+2Ch] [bp-Ch]
  int v32; // [sp+30h] [bp-8h]
  char v33; // [sp+34h] [bp-4h]

  if ( *((_BYTE *)a1 + 8) )
  {
    v4 = *a1;
    v5 = 1;
    goto LABEL_17;
  }
  v6 = (_DWORD *)a1[1];
  v4 = *a1;
  v9 = v6[6];
  if ( (v9 & 4) != 0 )
  {
    if ( !v4 )
    {
      if ( (*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, asc_2B63AC, 2) )
      {
        v5 = 1;
        v4 = 0;
        goto LABEL_17;
      }
      v9 = v6[6];
    }
    v5 = 1;
    v23[2] = &v24;
    v13 = v6[5];
    v14 = v6[4];
    v31 = v9;
    v24 = 1;
    v15 = v6[7];
    v16 = *((_BYTE *)v6 + 32);
    v17 = *v6;
    v18 = v6[1];
    v19 = v6[2];
    v20 = v6[3];
    v23[1] = v18;
    v23[0] = v17;
    v33 = v16;
    v26 = &off_2E616C;
    v27 = v19;
    v28 = v20;
    v29 = v14;
    v21 = *(int (__fastcall **)(int, _DWORD **))(a3 + 12);
    v25 = v23;
    v32 = v15;
    v30 = v13;
    if ( v21(a2, &v25) )
      goto LABEL_17;
    v12 = ((int (__fastcall *)(_DWORD *, const char *, int))v26[3])(v25, asc_2B6392, 2);
LABEL_16:
    v5 = v12;
    goto LABEL_17;
  }
  v10 = (const char *)&unk_2B63AE;
  if ( v4 )
    v10 = asc_2B6394;
  v11 = 2;
  if ( !v4 )
    v11 = 1;
  v5 = 1;
  if ( !(*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, v10, v11) )
  {
    v12 = (*(int (__fastcall **)(int, _DWORD *))(a3 + 12))(a2, v6);
    goto LABEL_16;
  }
LABEL_17:
  *a1 = v4 + 1;
  *((_BYTE *)a1 + 8) = v5;
  return a1;
}
