int __fastcall sub_FFBB8(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  char v5; // r7
  int (__fastcall *v7)(int, __int128 *); // r10
  signed int v11; // r11
  unsigned __int8 *v12; // r0
  unsigned __int8 *v13; // r10
  int v14; // r4
  int v15; // [sp+14h] [bp-18h] BYREF
  __int128 v16; // [sp+18h] [bp-14h] BYREF

  v5 = a2;
  *(_QWORD *)((char *)&v16 + 4) = 0;
  v7 = *(int (__fastcall **)(int, __int128 *))(a1 + 248);
  *((_QWORD *)&v16 + 1) = 0x200000;
  LODWORD(v16) = a3 | 0x1980000;
  BYTE9(v16) = a2;
  if ( v7(a1, &v16) )
    return 0;
  usleep(0xC350u);
  *a4 = 0;
  *a5 = 0;
  v11 = *(_DWORD *)(a1 + 312);
  v16 = 0u;
  if ( v11 >= 1 )
    v11 = 1;
  v12 = (unsigned __int8 *)calloc(v11, 0xCu);
  BYTE9(v16) = v5;
  WORD5(v16) = 32;
  v13 = v12;
  (*(void (__fastcall **)(int, __int128 *, signed int, unsigned __int8 *, int *))(a1 + 268))(a1, &v16, v11, v12, &v15);
  v14 = v15;
  if ( v15 == 1 && a2 == v13[4] )
  {
    *a4 = *(_DWORD *)v13;
    *a5 = 1;
  }
  free(v13);
  return v14;
}
