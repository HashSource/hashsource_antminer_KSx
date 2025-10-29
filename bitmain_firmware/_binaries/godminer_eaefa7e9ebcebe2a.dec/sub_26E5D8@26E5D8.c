int __fastcall sub_26E5D8(int result, int *a2, int a3)
{
  _DWORD *v3; // r1
  int v4; // r3
  int v5; // r4
  int v6; // r12
  int v7; // lr
  int v8; // r4
  int v9; // r12
  int v10; // lr

  if ( a3 == 4 )
  {
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    v7 = a2[3];
    v3 = a2 + 4;
    *(_DWORD *)(result + 8) = v4;
    *(_DWORD *)(result + 12) = v5;
    *(_DWORD *)(result + 16) = v6;
    *(_DWORD *)(result + 20) = v7;
    v8 = v3[1];
    v9 = v3[2];
    v10 = v3[3];
    *(_DWORD *)(result + 24) = *v3;
    *(_DWORD *)(result + 28) = v8;
    *(_DWORD *)(result + 32) = v9;
    *(_DWORD *)(result + 36) = v10;
    *(_QWORD *)result = 0;
  }
  else
  {
    *(_QWORD *)result = 1;
  }
  return result;
}
