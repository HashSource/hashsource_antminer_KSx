bool __fastcall sub_1E5A94(int a1, int *a2)
{
  _BYTE *v3; // r0
  _BYTE *v5; // r7
  _BYTE *v6; // r9
  int v7; // r10
  int v9; // r0
  unsigned int v10; // r1
  char v11; // r0
  int v12; // r1
  char v13; // [sp+12h] [bp-3Eh] BYREF
  char v14; // [sp+13h] [bp-3Dh] BYREF
  int v15; // [sp+14h] [bp-3Ch] BYREF
  int v16; // [sp+18h] [bp-38h]
  _DWORD v17[10]; // [sp+1Ch] [bp-34h] BYREF
  int v18[3]; // [sp+44h] [bp-Ch] BYREF

  v3 = *(_BYTE **)a1;
  if ( !*v3 && **(_DWORD **)(a1 + 4) > 0x64u )
    return 0;
  v17[1] = v3;
  v5 = *(_BYTE **)(a1 + 8);
  v6 = *(_BYTE **)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 16);
  v17[3] = &v14;
  v17[0] = &v13;
  v13 = 0;
  v14 = 0;
  v17[6] = a2;
  v17[5] = v7;
  v17[4] = v6;
  v17[2] = v5;
  sub_1F9A0C(a2, v17, &off_2DF488);
  if ( v14 )
    return 0;
  if ( !v13 && *v5 )
  {
    v9 = *a2;
    v10 = a2[1];
    v16 = v7;
    v15 = 0;
    if ( !v9 )
    {
      v17[0] = 0;
      Unwind_VRS_Get(v10, 0, 15, 0, v17);
      v10 = v17[0] & 0xFFFFFFFE;
    }
    v17[0] = 3;
    v18[0] = 2;
    v11 = sub_1E94D8(&v15, v10, v17, v18, 0);
    v12 = v16;
    *v6 = v11;
    ++*(_DWORD *)(v12 + 8);
  }
  ++**(_DWORD **)(a1 + 4);
  return *v6 == 0;
}
