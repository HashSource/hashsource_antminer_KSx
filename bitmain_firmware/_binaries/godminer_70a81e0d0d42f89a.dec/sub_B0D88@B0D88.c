int __fastcall sub_B0D88(_QWORD *a1, int *a2)
{
  int result; // r0
  int v4; // r2

  result = 0;
  v4 = dword_2EB6D0 + 1;
  if ( (unsigned int)(dword_2EB6D0 + 1) >= 0x4000 )
    v4 = 0;
  dword_2EB6D0 = v4;
  *a1 = *a2;
  return result;
}
