int __fastcall sub_246ABC(unsigned __int8 *a1, int a2, int a3)
{
  int result; // r0
  _DWORD *v5; // r7
  int v8; // r0
  int v9; // r12
  int v10; // lr
  int v11; // r10
  char v12; // r1
  int v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r7
  int (__fastcall *v17)(int, _DWORD **); // r2
  _DWORD v18[3]; // [sp+4h] [bp-34h] BYREF
  char v19; // [sp+13h] [bp-25h] BYREF
  _DWORD *v20; // [sp+14h] [bp-24h] BYREF
  int (**v21)(); // [sp+18h] [bp-20h]
  int v22; // [sp+1Ch] [bp-1Ch]
  int v23; // [sp+20h] [bp-18h]
  int v24; // [sp+24h] [bp-14h]
  int v25; // [sp+28h] [bp-10h]
  int v26; // [sp+2Ch] [bp-Ch]
  int v27; // [sp+30h] [bp-8h]
  char v28; // [sp+34h] [bp-4h]

  result = a1[4];
  if ( result )
    goto LABEL_2;
  v5 = *(_DWORD **)a1;
  v8 = *(_DWORD *)(*(_DWORD *)a1 + 24);
  if ( (v8 & 4) != 0 )
  {
    if ( !a1[5] )
    {
      result = (*(int (__fastcall **)(_DWORD, const char *, int))(v5[1] + 12))(*v5, asc_2B3DF0, 1);
      if ( result )
        goto LABEL_2;
      v8 = v5[6];
    }
    v18[2] = &v19;
    v9 = v5[5];
    v10 = v5[4];
    v26 = v8;
    v19 = 1;
    v11 = v5[7];
    v12 = *((_BYTE *)v5 + 32);
    v13 = *v5;
    v14 = v5[1];
    v15 = v5[2];
    v16 = v5[3];
    v18[1] = v14;
    v18[0] = v13;
    v28 = v12;
    v21 = &off_2E416C;
    v22 = v15;
    v23 = v16;
    v24 = v10;
    v17 = *(int (__fastcall **)(int, _DWORD **))(a3 + 12);
    v20 = v18;
    v27 = v11;
    v25 = v9;
    result = v17(a2, &v20);
    if ( !result )
    {
      result = ((int (__fastcall *)(_DWORD *, const char *, int))v21[3])(v20, asc_2B3DD2, 2);
      goto LABEL_12;
    }
LABEL_2:
    a1[5] = 1;
    a1[4] = 1;
    return result;
  }
  if ( a1[5] )
  {
    result = (*(int (__fastcall **)(_DWORD, const char *, int))(v5[1] + 12))(*v5, asc_2B3DD4, 2);
    if ( result )
      goto LABEL_2;
  }
  result = (*(int (__fastcall **)(int, _DWORD *))(a3 + 12))(a2, v5);
LABEL_12:
  a1[5] = 1;
  a1[4] = result;
  return result;
}
