int __fastcall parameter_update_hns(int a1, char a2, int a3, char a4, int a5)
{
  int v7; // r1
  int result; // r0
  int v10; // r3
  double v11; // r0
  __int64 v12; // r0

  if ( *(_BYTE *)(a1 + 252) )
    return 0;
  if ( (unsigned int)(a3 - 50) <= 0x28A )
    v7 = a2 & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    v11 = sub_2706F8(*(_DWORD *)(a1 + 992), *(_DWORD *)(a1 + 996)) / (double)a3 * *(float *)(a1 + 976);
    v12 = sub_2708B8(LODWORD(v11), HIDWORD(v11));
    *(float *)(a1 + 976) = (float)a3;
    *(_QWORD *)(a1 + 992) = v12;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 980) = a5;
  return result;
}
