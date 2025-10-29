int __fastcall sub_1F8A88(int a1, int *a2)
{
  int v2; // r2
  int v3; // r1
  int v4; // r0
  int v5; // r1
  _DWORD v7[4]; // [sp+0h] [bp-10h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v7[1] = a1;
  v7[0] = 0;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(v3 + 16))(v2, v7);
  v5 = 9;
  if ( v4 )
    return 0;
  return v5;
}
