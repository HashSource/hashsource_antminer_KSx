int __fastcall parameter_update_ckb(int a1, char a2, int a3, char a4, int a5)
{
  int v7; // r1
  int result; // r0
  int v10; // r3
  double v11; // r0
  __int64 v12; // r0

  if ( *(_BYTE *)(a1 + 236) )
    return 0;
  if ( (unsigned int)(a3 - 50) <= 0x2EE )
    v7 = a2 & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    v11 = sub_25B868(*(_DWORD *)(a1 + 960), *(_DWORD *)(a1 + 964)) / (double)a3 * *(float *)(a1 + 940);
    v12 = sub_25BA28(LODWORD(v11), HIDWORD(v11));
    *(float *)(a1 + 940) = (float)a3;
    *(_QWORD *)(a1 + 960) = v12;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 944) = a5;
  return result;
}
