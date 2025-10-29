int __fastcall parameter_update_ltc(int a1, char a2, int a3, char a4, int a5)
{
  int v7; // r1
  int result; // r0
  int v10; // r5
  __int64 v11; // r0
  int v12; // r3

  if ( *(_BYTE *)(a1 + 236) )
    return 0;
  if ( (unsigned int)(a3 - 900) <= 0x3E8 )
    v7 = a2 & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    v11 = sub_25B668(*(_DWORD *)(a1 + 960), *(_DWORD *)(a1 + 964), a3, a3 >> 31);
    v12 = (int)*(float *)(a1 + 940);
    *(float *)(a1 + 940) = (float)a3;
    *(_QWORD *)(a1 + 960) = v11 * v12;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1400) <= 0x96 )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 944) = a5;
  return result;
}
