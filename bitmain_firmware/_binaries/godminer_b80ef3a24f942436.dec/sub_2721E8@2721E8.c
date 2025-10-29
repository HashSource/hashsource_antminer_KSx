int __fastcall sub_2721E8(int result, int *a2, int a3)
{
  char v3; // r3
  int v4; // r2

  v3 = 1;
  if ( a3 == 8 )
  {
    v4 = *a2;
    v3 = 0;
    *(_DWORD *)(result + 5) = a2[1];
    *(_DWORD *)(result + 1) = v4;
  }
  *(_BYTE *)result = v3;
  return result;
}
