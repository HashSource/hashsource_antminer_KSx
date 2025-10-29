int __fastcall eeprom_open(unsigned int a1)
{
  int v1; // r5
  int *v3; // r2
  int result; // r0
  int *v5; // r4
  unsigned int v6; // [sp+0h] [bp-Ch] BYREF
  __int16 v7; // [sp+4h] [bp-8h]
  char v8; // [sp+6h] [bp-6h]
  char v9; // [sp+7h] [bp-5h]

  if ( a1 > 0xF )
    return sub_1158EC(a1);
  v1 = 2 * a1;
  v3 = &dword_30BC28[2 * a1];
  result = v3[18];
  if ( !result || !v3[19] )
  {
    v6 = a1;
    v9 = a1;
    v7 = 0;
    v8 = 10;
    result = iic_init((int)&v6);
    if ( result >= 0 )
    {
      v5 = &dword_30BC28[v1];
      v5[18] = result;
      v5[19] = 1;
    }
  }
  return result;
}
