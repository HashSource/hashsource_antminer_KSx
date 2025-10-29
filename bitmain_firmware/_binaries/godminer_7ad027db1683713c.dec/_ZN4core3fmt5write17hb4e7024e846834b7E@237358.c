bool __fastcall core::fmt::write(int a1, int a2, int *a3)
{
  int v4; // r7
  unsigned int v5; // r9
  int v6; // r0
  int v7; // r9
  int v8; // r10
  int v9; // r5
  int v10; // r11
  int v11; // r0
  int v12; // r1
  int v13; // r4
  int v14; // r3
  char v15; // r6
  void (__noreturn *v16)(); // r2
  int v17; // r3
  int v18; // r4
  int v19; // r4
  void (__noreturn *v20)(); // r2
  int v21; // r3
  int v22; // r0
  int v23; // r0
  int *v24; // r1
  int (__fastcall *v25)(int, int *); // r2
  int v26; // r0
  int v27; // r7
  int (__fastcall **v28)(_DWORD, int *); // r6
  _DWORD *v29; // r5
  int v31; // [sp+4h] [bp-28h]
  int v32; // [sp+8h] [bp-24h] BYREF
  int v33; // [sp+Ch] [bp-20h]
  int v34; // [sp+10h] [bp-1Ch]
  void (__noreturn *v35)(); // [sp+14h] [bp-18h]
  int v36; // [sp+18h] [bp-14h]
  void (__noreturn *v37)(); // [sp+1Ch] [bp-10h]
  int v38; // [sp+20h] [bp-Ch]
  int v39; // [sp+24h] [bp-8h]
  char v40; // [sp+28h] [bp-4h]

  v4 = *a3;
  v5 = 0;
  v40 = 3;
  v39 = 32;
  v38 = 0;
  v36 = 0;
  v34 = 0;
  v33 = a2;
  v32 = a1;
  if ( v4 )
  {
    v6 = a3[1];
    if ( v6 )
    {
      v7 = a3[2];
      v8 = 32 * v6;
      v9 = 0;
      v10 = 0;
      v31 = ((v6 - 1) & 0x7FFFFFF) + 1;
      while ( 1 )
      {
        if ( *(_DWORD *)(v7 + v10 + 4) && (*(int (__fastcall **)(int, _DWORD))(v33 + 12))(v32, *(_DWORD *)(v7 + v10)) )
          return 1;
        v11 = v4 + 4 * v10;
        v12 = a3[4];
        v13 = *(_DWORD *)(v11 + 12);
        v14 = *(_DWORD *)(v11 + 24);
        v15 = *(_BYTE *)(v11 + 28);
        v38 = *(_DWORD *)(v11 + 20);
        v39 = v14;
        v40 = v15;
        v16 = *(void (__noreturn **)())(v4 + v9 + 16);
        if ( !v13 )
          goto LABEL_10;
        v17 = 0;
        if ( v13 == 1 )
        {
          v18 = v12 + 8 * (_DWORD)v16;
          v16 = *(void (__noreturn **)())(v18 + 4);
          if ( v16 == sub_22A988 )
            break;
        }
LABEL_11:
        v35 = v16;
        v34 = v17;
        v19 = *(_DWORD *)(v11 + 4);
        v20 = *(void (__noreturn **)())(v11 + 8);
        if ( v19 )
        {
          v21 = 0;
          if ( v19 != 1 )
            goto LABEL_16;
          v22 = v12 + 8 * (_DWORD)v20;
          v20 = *(void (__noreturn **)())(v22 + 4);
          if ( v20 != sub_22A988 )
            goto LABEL_16;
          v20 = **(void (__noreturn ***)())v22;
        }
        v21 = 1;
LABEL_16:
        v24 = (int *)(v12 + 8 * *(_DWORD *)(v4 + v9));
        v23 = *v24;
        v37 = v20;
        v25 = (int (__fastcall *)(int, int *))v24[1];
        v36 = v21;
        if ( v25(v23, &v32) )
          return 1;
        v9 += 32;
        v10 += 8;
        if ( v8 == v9 )
        {
          v5 = v31;
          return v5 < a3[3]
              && (*(int (__fastcall **)(int, _DWORD, _DWORD))(v33 + 12))(
                   v32,
                   *(_DWORD *)(a3[2] + 8 * v5),
                   *(_DWORD *)(a3[2] + 8 * v5 + 4));
        }
      }
      v16 = **(void (__noreturn ***)())v18;
LABEL_10:
      v17 = 1;
      goto LABEL_11;
    }
  }
  else
  {
    v26 = a3[5];
    if ( v26 )
    {
      v27 = 8 * v26;
      v28 = (int (__fastcall **)(_DWORD, int *))(a3[4] + 4);
      v29 = (_DWORD *)(a3[2] + 4);
      v5 = ((v26 - 1) & 0x1FFFFFFF) + 1;
      while ( (!*v29 || !(*(int (__fastcall **)(int, _DWORD))(v33 + 12))(v32, *(v29 - 1))) && !(*v28)(*(v28 - 1), &v32) )
      {
        v28 += 2;
        v27 -= 8;
        v29 += 2;
        if ( !v27 )
          return v5 < a3[3]
              && (*(int (__fastcall **)(int, _DWORD, _DWORD))(v33 + 12))(
                   v32,
                   *(_DWORD *)(a3[2] + 8 * v5),
                   *(_DWORD *)(a3[2] + 8 * v5 + 4));
      }
      return 1;
    }
  }
  return v5 < a3[3]
      && (*(int (__fastcall **)(int, _DWORD, _DWORD))(v33 + 12))(
           v32,
           *(_DWORD *)(a3[2] + 8 * v5),
           *(_DWORD *)(a3[2] + 8 * v5 + 4));
}
