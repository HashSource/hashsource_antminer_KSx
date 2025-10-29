int __fastcall parameter_update_zec_1746(int a1, char a2, int a3, char a4, int a5)
{
  int v7; // r1
  int result; // r0
  int v10; // r3
  double v11; // r0
  __int64 v12; // r0

  if ( *(_BYTE *)(a1 + 252) )
    return 0;
  if ( (unsigned int)(a3 - 50) <= 0x352 )
    v7 = a2 & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    v11 = sub_26C9C0(*(_DWORD *)(a1 + 984), *(_DWORD *)(a1 + 988)) / (double)a3 * *(float *)(a1 + 964);
    v12 = sub_26CB80(LODWORD(v11), HIDWORD(v11));
    *(float *)(a1 + 964) = (float)a3;
    *(_QWORD *)(a1 + 984) = v12;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1200) <= 0x96 )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 968) = a5;
  return result;
}
