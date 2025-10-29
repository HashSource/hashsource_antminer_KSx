int __fastcall sub_106404(int a1, int a2)
{
  int v4; // r0
  int *v5; // r4
  int v6; // r5
  int (__fastcall *v7)(int, int); // r3
  int v8; // t1
  int result; // r0
  int v10; // r1

  v4 = sub_1061EC(a1);
  if ( v4 == 259 )
    return sub_106374(a1);
  v5 = (int *)&off_2E8A70;
  v6 = v4;
  do
  {
    v8 = *v5++;
    v7 = (int (__fastcall *)(int, int))v8;
    result = v6;
    if ( v8 )
    {
      v10 = a2;
      if ( a2 )
        v10 = 1;
      result = v7(v6, v10);
    }
  }
  while ( v5 != &dword_2E8A84 );
  return result;
}
