int __fastcall memchr::memmem::Searcher::as_ref(int result, int a2)
{
  char v2; // r8
  unsigned int v3; // r9
  int v4; // r3
  int v5; // r3
  int v6; // r2
  int v7; // r4
  int v8; // r5
  int v9; // r6
  int v10; // [sp+0h] [bp-18h]
  int v11; // [sp+4h] [bp-14h]
  int v12; // [sp+8h] [bp-10h]
  _BYTE v13[7]; // [sp+10h] [bp-8h]

  v3 = *(_DWORD *)(a2 + 16);
  v4 = v3 - 2;
  if ( v3 < 2 )
    v4 = 2;
  if ( v4 )
  {
    v2 = *(_BYTE *)(a2 + 8);
    if ( v4 == 1 )
    {
      v3 = 3;
    }
    else
    {
      *(_DWORD *)v13 = *(_DWORD *)(a2 + 9);
      *(_DWORD *)&v13[3] = *(_DWORD *)(a2 + 12);
      v10 = *(_DWORD *)(a2 + 20);
      v11 = *(_DWORD *)(a2 + 24);
      v12 = *(_DWORD *)(a2 + 28);
    }
  }
  else
  {
    v3 = 2;
  }
  *(_DWORD *)(result + 9) = *(_DWORD *)v13;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 36);
  v8 = *(_DWORD *)(a2 + 40);
  v9 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = v5;
  *(_DWORD *)(result + 16) = v3;
  *(_DWORD *)(result + 20) = v10;
  *(_DWORD *)(result + 24) = v11;
  *(_DWORD *)(result + 12) = *(_DWORD *)&v13[3];
  *(_DWORD *)(result + 28) = v12;
  *(_DWORD *)(result + 32) = v6;
  *(_DWORD *)(result + 36) = v7;
  *(_DWORD *)(result + 40) = v8;
  *(_DWORD *)(result + 44) = v9;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
