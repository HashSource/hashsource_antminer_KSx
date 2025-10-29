bool __fastcall sub_1D2F20(int a1, int *a2)
{
  _BYTE *v3; // r0
  _BYTE *v5; // r7
  _BYTE *v6; // r9
  int v7; // r10
  int v9; // r0
  unsigned int v10; // r1
  char v11; // r0
  int v12; // r1
  int v13; // [sp+4h] [bp-4Ch]
  char **v14; // [sp+Ch] [bp-44h]
  char v15; // [sp+12h] [bp-3Eh] BYREF
  char v16; // [sp+13h] [bp-3Dh] BYREF
  int v17; // [sp+14h] [bp-3Ch] BYREF
  int v18; // [sp+18h] [bp-38h]
  _DWORD v19[10]; // [sp+1Ch] [bp-34h] BYREF
  int v20[3]; // [sp+44h] [bp-Ch] BYREF

  v3 = *(_BYTE **)a1;
  if ( !*v3 && **(_DWORD **)(a1 + 4) > 0x64u )
    return 0;
  v19[1] = v3;
  v5 = *(_BYTE **)(a1 + 8);
  v6 = *(_BYTE **)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 16);
  v19[3] = &v16;
  v19[0] = &v15;
  v15 = 0;
  v16 = 0;
  v19[6] = a2;
  v19[5] = v7;
  v19[4] = v6;
  v19[2] = v5;
  sub_1E6E98(a2, (size_t)v19, (size_t)&off_2CA488);
  if ( v16 )
    return 0;
  if ( !v15 && *v5 )
  {
    v9 = *a2;
    v10 = a2[1];
    v18 = v7;
    v17 = 0;
    if ( !v9 )
    {
      v19[0] = 0;
      Unwind_VRS_Get(v10, 0, 15, 0, v19);
      v10 = v19[0] & 0xFFFFFFFE;
    }
    v19[0] = 3;
    v20[0] = 2;
    v11 = sub_1D6964(&v17, v10, v19, v20, 0, v13, 0, v14);
    v12 = v18;
    *v6 = v11;
    ++*(_DWORD *)(v12 + 8);
  }
  ++**(_DWORD **)(a1 + 4);
  return *v6 == 0;
}
