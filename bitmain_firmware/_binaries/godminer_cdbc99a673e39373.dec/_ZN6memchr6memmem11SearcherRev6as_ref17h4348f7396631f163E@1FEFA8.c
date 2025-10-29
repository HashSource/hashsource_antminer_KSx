int __fastcall memchr::memmem::SearcherRev::as_ref(int result, int *a2)
{
  char v2; // r8
  unsigned int v3; // r9
  int v4; // r3
  int v5; // r3
  int v6; // r7
  int v7; // r4
  int v8; // r1
  int v9; // [sp+0h] [bp-18h]
  int v10; // [sp+4h] [bp-14h]
  int v11; // [sp+8h] [bp-10h]
  _BYTE v12[7]; // [sp+10h] [bp-8h]

  v3 = a2[6];
  v4 = v3 - 2;
  if ( v3 < 2 )
    v4 = 2;
  if ( v4 )
  {
    v2 = *((_BYTE *)a2 + 16);
    if ( v4 == 1 )
    {
      v3 = 3;
    }
    else
    {
      *(_DWORD *)v12 = *(int *)((char *)a2 + 17);
      *(_DWORD *)&v12[3] = a2[5];
      v9 = a2[7];
      v10 = a2[8];
      v11 = a2[9];
    }
  }
  else
  {
    v3 = 2;
  }
  v5 = a2[1];
  v6 = a2[2];
  v7 = *a2;
  *(_DWORD *)(result + 17) = *(_DWORD *)v12;
  v8 = a2[3];
  *(_DWORD *)(result + 20) = *(_DWORD *)&v12[3];
  *(_BYTE *)(result + 16) = v2;
  *(_DWORD *)(result + 24) = v3;
  *(_DWORD *)(result + 28) = v9;
  *(_DWORD *)(result + 32) = v10;
  *(_DWORD *)(result + 36) = v11;
  *(_DWORD *)result = v7;
  *(_DWORD *)(result + 4) = v5;
  *(_DWORD *)(result + 8) = v6;
  *(_DWORD *)(result + 12) = v8;
  return result;
}
