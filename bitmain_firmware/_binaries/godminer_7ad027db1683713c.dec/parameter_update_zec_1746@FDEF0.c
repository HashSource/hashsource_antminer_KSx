int __fastcall parameter_update_zec_1746(int a1, char a2, int a3, char a4, int a5)
{
  int v7; // r1
  int result; // r0
  int v10; // r3
  double v11; // r0
  int v12; // r0
  int v13; // r1

  if ( *(_BYTE *)(a1 + 236) )
    return 0;
  if ( (unsigned int)(a3 - 50) <= 0x352 )
    v7 = a2 & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    v11 = COERCE_DOUBLE(sub_25A6F8(*(_QWORD *)(a1 + 960))) / (double)a3 * *(float *)(a1 + 940);
    v12 = sub_25A8B8(LODWORD(v11), HIDWORD(v11));
    *(float *)(a1 + 940) = (float)a3;
    *(_DWORD *)(a1 + 960) = v12;
    *(_DWORD *)(a1 + 964) = v13;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1200) <= 0x96 )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 944) = a5;
  return result;
}
