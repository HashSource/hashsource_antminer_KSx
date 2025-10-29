int __fastcall sub_12DEAC(int a1, int *a2)
{
  int v2; // lr
  int *v3; // r6
  int *v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3

  v2 = a1 + 136;
  v3 = a2 + 16;
  v5 = a2;
  do
  {
    v2 += 16;
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v9 = v5[3];
    v5 += 4;
    *(_DWORD *)(v2 - 16) = v6;
    *(_DWORD *)(v2 - 12) = v7;
    *(_DWORD *)(v2 - 8) = v8;
    *(_DWORD *)(v2 - 4) = v9;
  }
  while ( v5 != v3 );
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  return 0;
}
